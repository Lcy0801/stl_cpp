#include <iostream>
#include <functional>
#include <string>
using namespace std;

void test01()
{
    negate<int> n;
    cout << n(50) << endl;
}

void test02()
{
    // 二元内建仿函数要求两个操作数的参数类型必须相同
    plus<int> p;
    cout << p(1, 2) << endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}