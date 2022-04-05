#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

//统计内置数据类型
void test01()
{
    vector<int> v;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 100; i++)
    {
        v.push_back(rand() % 10);
    }
    for (int i = 0; i < 10; i++)
    {
        int n;
        n = count(v.begin(), v.end(), i);
        cout << "元素：" << i << "的个数为：" << n << endl;
    }
}

//统计自定义数据类型

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
        return m_name == p.m_name && m_age == p.m_age;
    }
};

void test02()
{
    vector<Person> v;
    for (int i = 0; i < 1000; i++)
    {
        char name[10];
        sprintf(name, "员工：%c", rand() % 26 + 65);
        int age = rand() % 10;
        v.push_back(Person(name, age));
    }
    int n = count(v.begin(), v.end(), Person("员工：A", 5));
    cout << n << endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}