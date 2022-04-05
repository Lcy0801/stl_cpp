#include <iostream>
#include <string>
using namespace std;

class MyAdd
{
    public:
    int m_n;
    MyAdd()
    {
        m_n=0;
    }
    int operator()(int x,int y)
    {
        m_n++;
        return x+y;
    }
};

void test01()
{
    MyAdd m;
    int x=m(1,2);
    cout<<x<<endl;
    cout<<"MyAdd的加法调用次数为:"<<m.m_n<<endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}