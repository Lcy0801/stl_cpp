#include <iostream>
#include <list>
#include <string>
using namespace std;

void print(const list<int> &l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
}

void test01()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(0);
    print(l1);
    list<int>l2(l1.begin(),l1.end());
    print(l2);
    list<int>l3(l2);
    print(l3);
    list<int>l4(10,1);
    print(l4);
}

int main()
{
    test01();
    system("pause");
    return 0;
}
