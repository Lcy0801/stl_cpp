#include <string>
#include <vector>
#include <iostream>
using namespace std;

void print(const vector<int> &v)
{
    for(vector<int>::const_iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
}

int main()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    cout<<"初始化容器："<<endl;
    print(v1);
    cout<<"尾删："<<endl;
    v1.pop_back();
    print(v1);

    cout<<"插入元素："<<endl;
    //通过迭代器来指明插入元素的位置
    v1.insert(++v1.begin(),100);
    v1.insert(--v1.end(),-1);
    print(v1);
    cout<<"删除元素："<<endl;
    //通过迭代器来指明要删除元素的位置
    v1.erase(v1.begin());
    print(v1);
    // 清空元素
    cout<<"清空元素："<<endl;
    v1.clear();
    print(v1);
    system("pause");
    return 0;
}