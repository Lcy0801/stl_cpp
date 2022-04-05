#include <iostream>
#include <string>
#include <vector>
using namespace std;

void test01()
{
    vector<pair<string,int>> v;
    v.push_back(pair<string ,int>("张三",23));
    v.push_back(pair<string ,int>("李四",33));
    v.push_back(pair<string ,int>("王五",13));
    for(vector<pair<string,int>>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }
}

int main()
{
    test01();
    system("pause");
    return 0;
}