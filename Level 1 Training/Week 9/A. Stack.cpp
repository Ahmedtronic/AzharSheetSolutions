#include<cmath>
#include <iostream>
#include<algorithm>
#include <vector>
#include<map>
#include<stack>
#include<queue>
using namespace std;

    /// وَاصْبِرْ لِحُكْمِ رَبِّكَ فَإِنَّكَ بِأَعْيُنِنَا ❤  ////

int main()
{
    int q;
    cin >> q;
    
    stack<long long> qu;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            long long x;
            cin >> x ;
            qu.push(x);
            
        }
        else if  (s == "top")
        {
            cout << qu.top() << endl;
            
        }else
        {
           // cout <<  qu.front() << endl;
            qu.pop();
        }
    }
    
}
