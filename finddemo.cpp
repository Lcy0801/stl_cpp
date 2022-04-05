#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

//查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i = 0; i < 20; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it == v.end())
    {
        cout << "元素不存在！" << endl;
    }
    else
    {
        cout << "元素已经找到！" << endl;
    }
}

//查找自定义数据类型

class Person
{
public:
    string m_name;
    int m_age;
    Person(){};
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    bool operator==(const Person &p)
    {
        return p.m_age == m_age && p.m_name == m_name;
    }
};

class Print
{
public:
    void operator()(const Person &p)
    {
        cout << p.m_name << "\t" << p.m_age << endl;
    }
};

void test02()
{
    vector<Person> v;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int age;
        char name[10];
        sprintf(name, "员工：%c", 65 + i);
        age = rand() % 10 + 20;
        v.push_back(Person(name, age));
    }
    //遍历该容器
    for_each(v.begin(), v.end(), Print());
    Person p = v.at(rand() % 10);
    vector<Person>::iterator it = find(v.begin(), v.end(), p);
    if (it == v.end())
    {
        cout << "没有找到该元素" << endl;
    }
    else
    {
        cout << "元素已经找到" << endl;
        cout << it->m_name << "\t" << it->m_age << endl;
    }
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}