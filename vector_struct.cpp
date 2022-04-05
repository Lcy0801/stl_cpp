#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print(const vector<int> &v)
{
    for(vector<int>:: const_iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    return;
}

int main()
{
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    cout<<"容器v1的元素有:"<<endl;
    print(v1);
    vector<int> v2(v1.begin(),--v1.end());
    cout<<"容器v2的元素有:"<<endl;
    print(v2);
    vector<int>v3(10,1);
    cout<<"容器v3的元素有:"<<endl;
    print(v3);
    vector<int>v4(v3);
    cout<<"容器v4的元素有:"<<endl;
    print(v4);
    system("pause");
    return 0;
}