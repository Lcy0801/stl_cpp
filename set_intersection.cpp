#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void test01()
{
    vector<int> v1, v2, v3;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    v3.resize(min(v1.size(), v2.size()));
    //函数返回最后一个元素的下一个位置所在的迭代器
    vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for (vector<int>::iterator it = v3.begin(); it != itend; it++)
    {
        cout << *it << endl;
    }
    return;
}

int main()
{
    test01();
    system("pause");
    return 0;
}