#include <iostream>
#include <string>
using namespace std;

template <class T>
class A
{
public:
    T m_T;
    A(T t)
    {
        m_T = t;
    }
    void print()
    {
        cout<<typeid(m_T).name()<<endl;
    }
};

template<class T>
using B=A<T>;
// 错误，tydef不可以给模板重命名
// typedef A<T> B;

int main()
{
    B<double> b(2.3);
    b.print();
    system("pause");
    return 0;
}
