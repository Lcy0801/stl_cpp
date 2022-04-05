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
        cout << val << endl;
    }
};
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    cout << "打乱前：" << endl;
    for_each(v.begin(), v.end(), Print());
    cout << "打乱后" << endl;
    srand((unsigned int)time(NULL));
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), Print());
}

int main()
{
    test01();
    system("pause");
    return 0;
}