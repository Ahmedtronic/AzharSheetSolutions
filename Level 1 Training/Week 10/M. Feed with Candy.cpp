#include<cmath>
#include <iostream>
#include<algorithm>
#include <vector>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include <map>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/// وَاصْبِرْ لِحُكْمِ رَبِّكَ فَإِنَّكَ بِأَعْيُنِنَا ❤  ////




struct candy
{
    int type,height,mass;
};

bool sorting(candy a,candy b)
{
    return a.mass>b.mass;
}

int main()
{
    
    fast;

    vector<candy>v1;
    vector<candy>v2;
    
    int n,initialheight;
    cin>>n>>initialheight;
    
    int sum=initialheight;
    
    candy c;
    
    for(int i=0;i<n;i++)
    {
        int type,height,mass;
        cin>>type >> height >> mass;
        
        c.type=type;
        c.height=height;
        c.mass=mass;
        
        v1.push_back(c);
        v2.push_back(c);
    }
    
    sort(v1.begin(),v1.end(),sorting);
    sort(v2.begin(),v2.end(),sorting);
    
    int counter1=0,counter2=0;
    
    bool turn = 0;
    
    for(int i=0;i<n;i++)
    {
        if(sum >= v1[i].height && turn == v1[i].type)
        {
            sum+=(v1[i].mass);
            turn=!turn;
            counter1++;
            v1[i].type=3;
            i=-1;
        }
    }
    
    sum = initialheight;
    turn = 1;
    
    for(int i=0;i<n;i++)
    {
        if(sum >= v2[i].height && turn == v2[i].type)
        {
            sum+=(v2[i].mass);
            turn=!turn;
            counter2++;
            v2[i].type=3;
            i=-1;
        }
    }
    
    cout<<max(counter1,counter2) << "\n";
        
}
