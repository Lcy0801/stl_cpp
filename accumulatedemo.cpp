#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
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
    Person operator+(const Person &p)
    {
        return Person("", p.m_age + m_age);
    }
};

class PersonPlus
{
public:
    int operator()(int val, const Person &p)
    {
        return val + p.m_age;
    }
};

void test01()
{
    vector<Person> v;
    srand((unsigned int)time(NULL));
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        char name[20];
        int age;
        sprintf(name, "Employee:d%", i);
        age = rand() % 100;
        sum += age;
        v.push_back(Person(name, age));
    }
    int ageSum = accumulate(v.begin(), v.end(), 0, PersonPlus());
    cout << sum << endl;
    cout << ageSum << endl;
}

void test02()
{
    vector<Person> v;
    srand((unsigned int)time(NULL));
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        char name[20];
        int age;
        sprintf(name, "Employee:d%", i);
        age = rand() % 100;
        sum += age;
        v.push_back(Person(name, age));
    }
    Person p;
    p = accumulate(v.begin(), v.end(), Person("", 0));
    cout << p.m_age;
    cout << p.m_age;
    cout << p.m_age;
    cout << p.m_age;
    cout << sum << endl;
}
int main()
{
    // test01();
    test02();
    system("pause");
    return 0;
}
