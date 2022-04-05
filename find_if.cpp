#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

class Person
{
public:
    string m_name;
    int m_age;
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    Person(){};
};

class Greater20
{
public:
    bool operator()(const Person &p)
    {
        return p.m_age > 28;
    }
};

void test01()
{
    srand((unsigned int)time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 10);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end())
    {
        cout << "容器中不存在大于5的元素" << endl;
    }
    else
    {
        cout << "容器中第一个大于5的元素为" << *it << endl;
    }
}

void test02()
{
    vector<Person> v;
    for (int i = 0; i < 10; i++)
    {
        char name[10];
        int age;
        sprintf(name, "员工：%c", 65 + i);
        age = rand() % 10 + 20;
        v.push_back(Person(name, age));
    }

    vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
    if (it == v.end())
    {
        cout << "年龄大于28的员工不存在！" << endl;
    }
    else
    {
        cout << "年龄大于28的员工已经找到了！" << endl;
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