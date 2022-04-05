#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

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
    bool operator==(const Person &p)
    {
        return p.m_name == m_name && p.m_age == m_age;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    if (it == v.end())
    {
        cout << "不存在相邻且重复的元素!" << endl;
    }
    else
    {
        cout << "存在相邻且重复的元素!" << endl;
        cout << *it << endl;
    }
}

void test02()
{
    vector<Person> v;
    v.push_back(Person("张三", 30));
    v.push_back(Person("张三", 30));
    v.push_back(Person("李四", 40));
    v.push_back(Person("王五", 50));
    v.push_back(Person("赵六", 60));
    v.push_back(Person("陈七", 70));
    vector<Person>::iterator it = adjacent_find(v.begin(), v.end());
    if (it == v.end())
    {
        cout << "不存在相邻且重复的元素" << endl;
    }
    else
    {
        cout << "存在相邻且重复的元素" << endl;
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