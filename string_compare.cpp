#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// c++ 字符串string比较
void test01()
{
    string str1 = "aaa";
    string str2 = "bbb";
    string str3 = "aaa";

    if (str1 == str2)
    {
        cout << "str1==str2" << endl;
    }
    else
    {
        cout << "str1!=str2" << endl;
    }

    if (str1 == str3)
    {
        cout << "str1==str3" << endl;
    }
    else
    {
        cout << "str1!=str3" << endl;
    }
}

// c字符串 char* 比较

void test02()
{
    char *str1 = "aaa";
    char *str2 = "aaa";
    char *str3 = "bbb";
    if (str1 == str2 && str1 != str3)
    {
        cout << "char * 可以直接比较" << endl;
    }
    else
    {
        cout << "char * 不可以直接比较" << endl;
    }

    if (strcmp(str1, str2) == 0 && strcmp(str1, str3) != 0)
    {
        cout << "strcmp 用于 char* 字符串的比较" << endl;
    }
    else
    {

        cout << "strcmp 不用于 char* 字符串的比较" << endl;
    }
}

// c字符串 char[] 比较

void test03()
{
    char str1[] = "aaa";
    char str2[] = "aaa";
    char str3[] = "bbb";
    if (str1 == str2 && str1 != str3)
    {
        cout << "char[] 可以直接比较" << endl;
    }
    else
    {
        cout << "char[] 不可以直接比较" << endl;
    }

    if (strcmp(str1, str2) == 0 && strcmp(str1, str3) != 0)
    {
        cout << "strcmp 用于 char[] 字符串的比较" << endl;
    }
    else
    {

        cout << "strcmp 不用于 char[] 字符串的比较" << endl;
    }
}

int main()
{
    test01();
    test02();
    test03();
    system("pause");
    return 0;
}