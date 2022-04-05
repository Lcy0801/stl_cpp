#include <iostream>
#include <list>
#include <string>
using namespace std;


class Person{
    public:
    string m_name;
    int m_age;
    Person(string name,int age)
    {
        m_name=name;
        m_age=age;
    }
};

void print(const list<Person>l)
{
    for(list<Person>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<(*it).m_name<<"\t"<<(*it).m_age<<"\t";
    }
    cout<<endl;
    return;
}

bool compare(const Person &p1,const Person &p2)
{
    return p1.m_age>p2.m_age;
}
void test01()
{
    list<Person>l;
    l.push_back(Person("张三",30));
    l.push_back(Person("李四",40));
    l.push_back(Person("王五",10));
    l.push_back(Person("赵六",20));
    cout<<"按年龄排序前："<<endl;
    print(l);
    cout<<"按年龄排序后："<<endl;
    l.sort(compare);
    priint(l);
}   


int main()
{
    test01();
    system("pause");
    return 0;
}