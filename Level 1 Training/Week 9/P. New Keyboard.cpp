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

int main()
{
    fast;
    string s;
    while (cin >> s)
    {
        deque<char> words;
        stack<char> st;
        int a = int(s.size());
        bool closed = true;
        for (int i = 0; i < a; i++ )
        {
            if ( closed )
            {
                if (s[i] != '[' && s[i] != ']') words.push_back(s[i]);
                else
                {
                    while(!st.empty())
                    {
                        words.push_front(st.top());
                        st.pop();
                    }
                    if (s[i] == '[')
                    {
                        closed = false;
                    }
                    else closed =true;
                }
            }

            else
            {
                if (s[i] != '[' && s[i] != ']')
                {
                    st.push(s[i]);
                    continue;
                }
                else
                {

                    while(!st.empty())
                    {
                        words.push_front(st.top());
                        st.pop();
                    }

                    if (s[i] == '[') closed = false;
                    else closed=true;

                }

            }
        }

        //     cout << st.size() << endl;
        while(st.size())
        {
            words.push_front(st.top());
            st.pop();
        }

        for (auto i : words) cout << i ;
        cout << endl;
    }
}
