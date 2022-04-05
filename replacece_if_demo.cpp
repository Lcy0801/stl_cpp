#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

class Print
{
public:
    void operator()(int val)
    {
        cout << val << "\t";
    }
};

class Greater5
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};
void test01()
{
    vector<int> v;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 10);
    }
    cout << "替换前：" << endl;
    for_each(v.begin(), v.end(), Print());
    cout << endl;
    cout << "替换后：" << endl;
    replace_if(v.begin(), v.end(), Greater5(), 10);
    for_each(v.begin(), v.end(), Print());
}

int main()
{
    test01();
    system("pause");
    return 0;
}
