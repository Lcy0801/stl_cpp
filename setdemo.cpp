#include <set>
#include <string>
#include <iostream>
using namespace std;

void print(const set<int> s)
{
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
}

void test01()
{
    set<int> s;
    s.insert(40);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(50);
    print(s);
}

void test02()
{
    set<int>s;
    pair<set<int>::iterator,bool> flag1=s.insert(10);
    if(flag1.second)
    {
        cout<<"数据插入成功！"<<endl;
    }
    else
    {
        cout<<"数据插入失败！"<<endl;
    }
    pair<set<int>::iterator,bool> flag2=s.insert(10);
    if(flag2.second)
    {
        cout<<"数据插入失败！"<<endl;
    }
    else
    {
        cout<<"数据插入失败！"<<endl;
    }
}

int main()
{
    // test01();
    test02();
    system("pause");
    return 0;
}