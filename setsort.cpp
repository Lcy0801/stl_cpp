#include <iostream>
#include <string>
#include <set>
using namespace std;


class Person
{
    public:
    string m_name;
    int m_age;
    Person(string name,int age)
    {
        m_name=name;
        m_age=age;
    }
};

class PersonCompare
{
    public:
    bool operator() (Person p1,Person p2)
    {
        return p1.m_age>p2.m_age;
    }
};


void test01()
{
    set<Person,PersonCompare>s;
    s.insert(Person("张三",10));
    s.insert(Person("李四",8));
    s.insert(Person("王五",11));
    s.insert(Person("赵六",7));
    for(set<Person,PersonCompare>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<it->m_name<<"\t"<<it->m_age<<endl;
    }
    cout<<endl;
} 

int main()
{
    test01();
    system("pause");
    return 0;
}