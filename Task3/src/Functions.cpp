#include "Functions/Functions.h"
#include <string>
#include <math.h>
#include <iostream>
std::string toBin8(std::string s)
{
    std::string temp = "";
    int a;
    for (int i = 0; i < s.length(); i++)
    {
        a = (int)s[i];
        while (a > 0)
        {

            a % 2 == 1 ? temp += '1' : temp += '0';
            a = (a / 2);
        }
        for (int i = 0; i < temp.length()%8; i++)
        {
            temp = temp + '0';
        }
    }
    
    return temp;
}

std::string toBin6(int a)
{
    std::string temp = "";
    while (a > 0)
    {

        a % 2 == 1 ? temp += '1' : temp += '0';
        a = (a / 2);
    }
    for (int i = 0; i < temp.length() % 6; i++)
    {
        temp = temp + '0';
    }

    return temp;
}

int binToDec(std::string s)
{
    int res = s[0] == '1'? 1 : 0;
    for (int i = s.length(); i >=0; i--)
    {
        int temp = (s[i] == '1') ? i : 0;
        if (temp != 0 )
            res += pow(2, temp);
    }
    return res;
}

std::string encodeToBase64(std::string s)
{
    
    std::string res = "";
    char map[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                  'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                  'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                  'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };
    s = toBin8(s);
    int ravno = s.length() % 6;
    while (s.length() % 6 != 0)
    {
        s = '0' + s;
    }
    int len = s.length();
    for (int i = len-1; i > 0; i-=6)
    {
        res += map[binToDec(s.substr(i-5, i+1))];
    }
    for (int i = 0; i < ravno; i++)
    {
        res += '=';
    }
    return res;
}

std::string decodeFromBase64(std::string s)
{
    char map[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                   'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                   'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                   'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };
    int index;
    int nuli = 0;
    std::string temp = "";
    std::string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        index = -1;
        if (s[i] == '=')
	{
	    nuli += 2;
	}
	else
	{
            for (int j = 0; j < 64; j++)
            {
                if (s[i] == map[j])
                {
	            index = j;
                    break;
                }
            }
	}
        if (index != -1)
        {
            temp += toBin6(index);
        }

    }
    for (int i = 0; i < nuli; i++)
    {
        temp = '0' + temp;
    }
    for (int i = temp.length()-1; i > 0; i -= 8)
    {
        res += (char)binToDec(temp.substr(i-7, i+1));
    }
    return res;
}
//00000111 00000111
//000001 110000 011100
