#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <functional>
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
    srand((unsigned int)time(NULL));
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(rand() % 10);
        v2.push_back(rand() % 10);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    cout << "容器1的元素：" << endl;
    for_each(v1.begin(), v1.end(), Print());
    cout << endl;
    sort(v2.begin(), v2.end());
    cout << "容器2的元素有：" << endl;
    for_each(v2.begin(), v2.end(), Print());
    cout << endl;
    vector<int> v3;
    v3.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout << "合并后容器的元素有：" << endl;
    for_each(v3.begin(), v3.end(), Print());
}

int main()
{
    test01();
    system("pause");
    return 0;
}