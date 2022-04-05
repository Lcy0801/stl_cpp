#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    vector<int>v5;
    for(int i=0;i<5;i++)
    {
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
        v5.push_back(i+5);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    vector<vector<int>>::iterator vit=v.begin();
    while(vit!=v.end())
    {
        for(vector<int>::iterator vvit=vit->begin();vvit!=vit->end();vvit++)
        {
            cout<<*vvit<<"\t";   
        }
        cout<<endl;
        vit++;
    }
    system("pause");
    return 0;
}