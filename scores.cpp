#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Player
{
    public:
    string m_Name;
    deque<int>m_d;
    int m_score;
    Player(string name,deque<int>d,int score=0);
};

Player::Player(string name,deque<int>d,int score)
{
    m_Name=name;
    m_d=d;
    m_score=score;
}

int main()
{
    string playersName[]={"张三","李四","王五","赵六","钱七"};
    srand(time(NULL));
    vector<Player> players;
    for(int i=0;i<5;i++)
    {
        deque<int>scores;
        for(int j=0;j<10;j++)
        {
            scores.push_back(rand()%10+90);
        }
        sort(scores.begin(),scores.end());
        scores.pop_back();
        scores.pop_front();
        int scoresSum=0;
        int scoreAvg;
        for(deque<int>::iterator it=scores.begin();it!=scores.end();it++)
        {
            scoresSum+=*it;
        }
        scoreAvg=scoresSum/scores.size();
        Player player(playersName[i],scores,scoreAvg);
        players.push_back(player);
    }
    for(int i=0;i<5;i++)
    {
        Player player=players.at(i);
        cout<<"运动员:"<<player.m_Name<<endl;
        cout<<"裁判员打分为:"<<endl;
        deque<int> scores=player.m_d;
        for(deque<int>::iterator it=scores.begin();it!=scores.end();it++)
        {
            cout<<*it<<"\t";
        }
        cout<<endl;
        cout<<"最后平均分为:"<<player.m_score<<endl;
        cout<<endl;
    }
    system("pause");
    return 0;
}