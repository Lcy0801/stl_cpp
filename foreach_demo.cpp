#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
using namespace std;

void print01(int value)
{
    cout << value << endl;
}

class Print02
{
public:
    void operator()(int value)
    {
        cout << value << endl;
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
    // for_each(v.begin(), v.end(), print01);
    for_each(v.begin(), v.end(), Print02());
}

int main()
{
    test01();
    system("pause");
    return 0;
}