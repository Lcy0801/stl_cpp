#include <iostream>
#include <string>
#include <map>
using namespace std;

void print(const map<string,int>m)
{
    for(map<string,int>::const_iterator it=m.begin();it != m.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
    cout<<endl;
}

void test01()
{
    map<string,int>m;
    m.insert(pair<string,int>("张三",30));
    m.insert(pair<string,int>("李四",40));
    m.insert(pair<string,int>("王五",50));
    m.insert(pair<string,int>("赵六",60));
    print(m);
}

int main()
{
    test01();
    system("pause");
    return 0;
}