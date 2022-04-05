#include <deque>
#include <iostream>
#include <string>
using namespace std;


void print(const deque<int>&d )
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    return;
}
int main()
{
    deque<int>d1;
    int i=0;
    while (i<10)
    {
        d1.push_back(i);
        i++;
    }
    print(d1);
    //区间初始化
    //反向迭代器只能和反向迭代器配套使用
    //正向迭代器只能和正向迭代器配套使用
    deque<int>d2(d1.rbegin(),d1.rend());
    print(d2);
    deque<int>d3(10,1);
    print(d3);
    deque<int>d4(d3);
    print(d3);
    system("pause");
    return 0;
}