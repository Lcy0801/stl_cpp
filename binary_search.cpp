#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <ctime>
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
        return p.m_age == m_age && p.m_name == m_name;
    }
};

class PersonCompare
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        return p1.m_age > p2.m_age;
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

void test01()
{
    set<Person, PersonCompare> s;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        char name[10];
        int age;
        age = rand() % 10 + 20;
        sprintf(name, "员工：%c", i + 65);
        s.insert(Person(name, age));
    }
    s.insert(Person("员工：Z", 30));
    for_each(s.begin(), s.end(), Print());
    bool flag = binary_search(s.begin(), s.end(), Person("员工：Z", 30), PersonCompare());
    if (flag)
    {
        cout << "元素已经找到！" << endl;
    }
    else
    {
        cout << "元素不存在！" << endl;
    }
}

int main()
{
    test01();
    system("pause");
    return 0;
}
