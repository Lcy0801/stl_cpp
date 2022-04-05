#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Print
{
public:
    void operator()(int val)
    {
        cout << val << "\t";
    }
};

void test01()
{
    vector<int> v1, v2, v3;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    // 并集中元素个数最多为两个原容器中元素个数的和
    v1.push_back(0);
    v3.resize(v1.size() + v2.size());
    vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), itEnd, Print());
}

int main()
{
    test01();
    system("pause");
    return 0;
}