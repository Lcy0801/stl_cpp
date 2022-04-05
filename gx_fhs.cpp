#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
#include <ctime>

void printV(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
}

void test01()
{
    srand((unsigned int)time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 10);
    }
    printV(v);
    cout << "降序排列：" << endl;
    sort(v.begin(), v.end(), greater<int>());
    printV(v);
    cout << "升序排列：" << endl;
    sort(v.begin(), v.end(), less<int>());
    printV(v);
}

int main()
{
    test01();
    system("pause");
    return 0;
}