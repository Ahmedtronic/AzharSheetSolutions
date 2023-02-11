using namespace std;
#include<bits/stdc++.h>
#define fast        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define forn(i, n) for(int i = 0; i < n; i++)
#define pb   push_back
#define clr(x ,val) memset(x,val , sizeof(x))


int	main() {
ll n ;
cin>>n;
ll arr[n];
ll res[n];
   stack<ll>st;
        for(int i=0 ; i<n ; i++) {
            cin >> arr[i];
        }

        for(int i =0 ; i<n ; i++){

            if(i==0){

                st.push(i);
            }else{

                while (arr[i] > arr[st.top()] && !st.empty()) {
                    res[st.top()] = arr[i];
                    st.pop();
                    if(st.empty() ||arr[i] < arr[st.top()])
                        break;

                }
                st.push(i);

            }

        }

    while (!st.empty()){
        res[st.top()]= -1;
        st.pop();
    }

    for(int i=0 ; i<n ; i++){
        cout<<res[i]<<" ";
    }

}
