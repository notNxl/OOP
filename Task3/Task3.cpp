#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;
// из стр в число
int CharinInt(char x)
{
    return (int)x;
}
char IntChar(int x)
{
    return (char)x;
}

// в 10сс
int InTenCC(string binStr)
{
    int digit = 0;
    int count = 1;

    for (int i = binStr.size(); i > 0; i--, count *= 2)
    {
        if ((binStr[i - 1] != '0') && (binStr[i - 1] != '1'))
        {

            break;
        }
        if (binStr[i - 1] == '1')
        {
            digit += count;
        }
    }
    return digit;
}

int pow(int x, int y)
{
    int n = 1;
    while (y--)
        n *= x;
    return n;
}
// в 2сс
int InBB(int x)
{

    int bin = 0; // Искомое число в двоичной CC
    int i = 0;   // Разряд двоичного числа

    while (x > 1)
    {
        bin += (x % 2) * pow(10, i); // Присваиваем i-тому разряду остаток от деления
        x /= 2;
        i++;
    }
    bin += x * pow(10, i);

    return bin;
}
string FullEnd(string& data, char num)
{
    data.insert(data.end(), num);
    return data;
}

// добав недост нули
string FullandString(int x, int n)
{
    int number = x;
    int precision;

    std::ostringstream ostr;
    ostr << x;

    string str = ostr.str();
    // int n = 8;
    if (n == str.size())
    {
        return str;
    }
    if (n < str.size())
    {
        precision = n - n;
    }
    else if (n > str.size())
    {
        precision = n - str.size();
    }

    str.insert(0, precision, '0');
    return str;
}

// из числоа в  коды
char TranslateInCode(int n)
{
    char map[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                  'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                  'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                  'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };

    for (auto i = 0; i < 63; i++)
    {
        if (n == i)
        {
            return map[i];
        }
    }
}

int TranslateInNum(char n)
{
    char map[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                  'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                  'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                  'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };

    for (auto i = 0; i < 63; i++)
    {
        if (n == map[i])
        {
            return i;
        }
    }
}

void encode(string s)
{

    string buf;
    string encod;
    vector<string> masStr;
    char zero = '0';
    int count;
    vector<int> masDec;

    string result;
    int k = 0;
    for (auto m : s)
    {
        result += FullandString(InBB(CharinInt(m)), 8); 
    }

    for (auto i = 0; i < result.size(); i++)
    {
        if (i == k + 5)
        {

            for (int j = k; j <= i; j++)
            {
                buf = buf + result[j];
            }
            masStr.push_back(buf);
            buf = "";
            k += 6;
        }
    }

    if (result.size() - k == 2)
        count = 3;
    if (result.size() - k == 4)
        count = 2;
    if (result.size() - k != 0) // 2
    {
        for (int l = k; l < result.size(); l++)
        {
            buf = buf + result[l]; //[  01   ]
        }

        for (int n = 0; n < (6 - buf.size()) + count; n++)
        {

            FullEnd(buf, zero);
        }
        masStr.push_back(buf);
    }

    for (int r = 0; r < masStr.size(); r++)
    {
        masDec.push_back(InTenCC(masStr[r])); // [17 , 25 , 2 ... ]
    }

    if (result.size() - k == 2)
    {
        for (auto num : masDec)
        {
            cout << TranslateInCode(num);
        }
        cout << "==";
    }
    else if (result.size() - k == 4)
    {
        for (auto num : masDec)
        {
            cout << TranslateInCode(num);
        }
        cout << "=";
    }
    else if (result.size() - k == 0)
    {
        for (auto num : masDec)
        {
            cout << TranslateInCode(num);
        }
    }
}

string base64_decode(string s)
{
    char map[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                  'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                  'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                  'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };

    string buf;
    string encod;
    vector<string> masStr;
    char zero = '0';
    int count;
    vector<int> masDec;

    string result;
    int k = 0;
    int countEqual = 0;
    int lenStr = s.size();

    if (s[lenStr - 1] == '=')
    {
        countEqual++;
    }

    if (s[lenStr - countEqual - 1] == '=')
    {
        countEqual++;
    }

    for (auto m = 0; m < lenStr - countEqual; m++)
    {

        result = result + FullandString(InBB(TranslateInNum(s[m])), 6); //[000101010101110101]
    }
    for (auto i = 0; i < result.size(); i++)
    {
        if (i == k + 7)
        {

            for (int j = k; j <= i; j++)
            {
                buf = buf + result[j];
            }
            masStr.push_back(buf); //["00000000 "  00000000  00000000 ........]= masStr
            buf = "";
            k += 8;
        }
    }
    for (int l = 0; l < masStr.size(); l++)
    {
        if (masStr[l] == "00" || masStr[l] == "0000")
        {
            masStr.erase(masStr.begin() + l);
        }
    }

    for (int r = 0; r < masStr.size(); r++)
    {
        masDec.push_back(InTenCC(masStr[r])); // [17 , 25 , 2 ... ]
    }

    for (auto num : masDec)
    {
        cout << IntChar(num);
    }
    return result;
}

int main()
{
    cout << "'I' in base 64 = ";
    encode("I");
    cout << std::endl;
    cout << "'SQ==' decoding from base 64 = "; base64_decode("SQ==");
    cout << endl;
    string s;
    cout << "Input your message to encode it in base64" << endl;
    cin >> s;
    cout << "'" << s << "' is ";
    encode(s);
    cout << " in base64" << endl;

    cout << "Input your message in base64 to decode it" << endl;
    cin >> s;
    cout << "'" << s << "' is ";
    base64_decode(s);
    cout << "in ASCII" << endl;
    return 0;
}
