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
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    v.push_back(1);
    v.push_back(0);
    cout << "替换前：" << endl;
    for_each(v.begin(), v.end(), Print());
    cout << endl;
    cout << "替换后：" << endl;
    replace(v.begin(), v.end(), 1, -1);
    for_each(v.begin(), v.end(), Print());
    return;
}

int main()
{
    test01();
    system("pause");
    return 0;
}