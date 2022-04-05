#include <vector>
//标准算法的头文件
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void print(int val)
{
    cout<<val<<endl;
    return;
}

int main()
{
    vector<int>v;
    //尾插法插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问数据
    vector<int>::iterator itBegin=v.begin();//指向容器中的第一个元素
    vector<int>::iterator itEnd=v.end();//指向容器中最后一个元素的下一个位置
    //遍历方式一
    // while (itBegin!=itEnd)
    // {
    //     cout<<*itBegin<<endl;
    //     itBegin++;
    // }
    //遍历方式二
    // for(vector<int>::iterator it=itBegin;it!=itEnd;it++)
    // {
    //     cout<<*it<<endl;
    // }
    //遍历方式三

    for_each(itBegin,itEnd,print);
    system("pause");
    return 0;
    
}