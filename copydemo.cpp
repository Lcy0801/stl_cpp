#include <vector>
#include <algorithm>
#include <iostream>
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

void test01()
{
    srand((unsigned int)time(NULL));
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(rand() % 10);
    }
    cout << "容器v1的元素有：" << endl;
    for_each(v1.begin(), v1.end(), Print());
    vector<int> v2;
    v2.resize(v1.size());
    copy(++v1.begin(), --v1.end(), v2.begin());
    cout << "容器v2的元素有：" << endl;
    for_each(v2.begin(), v2.end(), Print());
    return;
}

int main()
{
    test01();
    system("pause");
    return 0;
}