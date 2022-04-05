#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
using namespace std;

class Person
{
public:
    string m_name;
    int m_age;
    string m_gender;
    Person(string name, int age, string gender)
    {
        m_name = name;
        m_age = age;
        m_gender = gender;
    }
    Person(){};
};

class Print01
{
public:
    Person operator()(Person p)
    {
        cout << "函数对象调用结束" << endl;
        p.m_gender = (p.m_gender == "男") ? "女" : "男";
        return p;
    }
};

class Print02
{
public:
    void operator()(const Person &p)
    {
        cout << p.m_name << "\t" << p.m_age << "\t" << p.m_gender << endl;
    }
};

void test01()
{
    vector<Person> v1;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        char name[10];
        int age;
        string gender;
        age = rand() % 10 + 20;
        if (age % 2)
        {
            gender = "男";
        }
        else
        {
            gender = "女";
        }
        sprintf(name, "员工：%c", i + 65);
        v1.push_back(Person(name, age, gender));
    }
    for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << it->m_name << "\t" << it->m_age << "\t" << it->m_gender << endl;
    }
    cout << endl;
    // 遍历后
    vector<Person> v2;
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), Print01());
    for_each(v2.begin(), v2.end(), Print02());
}

int main()
{
    test01();
    system("pause");
    return 0;
}