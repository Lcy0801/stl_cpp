#include <iostream>
#include <string>
using namespace std;

int main()
{
    // cout<<"通过下标访问:"<<endl;
    string str="abc";
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<endl;
    }
    // cout<<"通过at进行访问:"<<endl;
    for(int i=0;i<str.length();i++)
    {
        cout<<str.at(i)<<endl;
    }
    system("pause");
    return 0;
}