#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string m_Name;
    int m_Age;
    Person(string name,int age)
    {
        m_Name=name;
        m_Age=age;
    }
};

int main()
{
    vector<Person>v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<it->m_Name<<"\t"<<it->m_Age<<endl;
    }
    system("pause");
    return 0;
}
