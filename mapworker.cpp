#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

class Worker
{
public:
    string m_name;
    int m_salary;
    Worker(string name, int salary)
    {
        m_name = name;
        m_salary = salary;
    }
};

int main()
{
    srand((unsigned int)time(NULL));
    vector<Worker> workers;
    for(int i=0;i<10;i++)
    {
        char name[10];
        sprintf(name,"%s%d","员工",i);
        int salary=rand()%10000+20000;
        workers.push_back(Worker(name,salary));
    }
    for(vector<Worker>::iterator it=workers.begin();it!=workers.end();it++)
    {
        cout<<it->m_name<<"\t"<<it->m_salary<<endl;
    }
    cout<<endl;
    multimap<int,Worker>m;
    for(vector<Worker>::iterator it=workers.begin();it!=workers.end();it++)
    {
        int dep=rand()%3+1;
        m.insert(pair<int,Worker>(dep,*it));
    }
    for(multimap<int,Worker>::iterator it=m.begin();it!=m.end();it++)
    {
        int depid=it->first;
        Worker worker=it->second;
        cout<<"部门："<<depid<<"\t"<<worker.m_name<<"\t"<<worker.m_salary<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}