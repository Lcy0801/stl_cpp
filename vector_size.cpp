#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<int>v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i)
    }
    cout<<"容器的大小："<<v1.size()<<endl;
    cout<<"容器的容量："<<v1.capacity()<<endl;
    v1.resize(20);
    cout<<"容器的大小："<<v1.size()<<endl;
    cout<<"容器的容量："<<v1.capacity()<<endl;
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    system("pause");
    return 0;
}