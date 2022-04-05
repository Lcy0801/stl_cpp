#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;

class Print
{
public:
    void operator()(int val)
    {
        cout << val << endl;
    }
};

void test01()
{
    srand((unsigned int)time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 10);
    }
    cout << "排序前：" << endl;
    for_each(v.begin(), v.end(), Print());
    cout << "排序后：" << endl;
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), Print());
    cout << "倒序后：" << endl;
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), Print());
    return;
}

int main()
{
    test01();
    system("pause");
    return 0;
}