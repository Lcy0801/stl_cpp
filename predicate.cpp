#include <algorithm>
#include <iostream>
#include <map>

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
};

class MyCompare
{
public:
    bool operator()(int key1, int key2) { return key1 > key2; }
};

class MyPred
{
public:
    bool operator()(pair<int, Person> e) { return e.first > 3; }
};

void test01()
{
    map<int, Person, MyCompare> m;
    m.insert(pair<int, Person>(1, Person("张三", 30)));
    m.insert(pair<int, Person>(4, Person("赵六", 60)));
    m.insert(pair<int, Person>(3, Person("王五", 50)));
    m.insert(pair<int, Person>(2, Person("李四", 40)));
    for (map<int, Person, MyCompare>::iterator it = m.begin(); it != m.end();
         it++)
    {
        cout << it->first << "\t" << it->second.m_name << "\t" << it->second.m_age
             << endl;
    }
    cout << endl;
    map<int, Person, MyCompare>::iterator it =
        find_if(m.begin(), m.end(), MyPred());
    if (it == m.end())
    {
        cout << "元素不存在" << endl;
    }
    else
    {

        cout << it->first << "\t" << it->second.m_name << "\t" << it->second.m_age
             << endl;
    }
}

int main()
{
    test01();
    system("pause");
    return 0;
}