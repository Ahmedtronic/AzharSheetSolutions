#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> intpair;
typedef long long ll;
#define pause system("pause")
#define overtwo >> 1
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(),x.end()
const int maxarr = 2e5 + 10;
int a[maxarr];

int main()
{
	fast;
	int t; cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll a[n + 1];

		ll m1[n + 2] = { 0 };


		for (int i = 0; i < n; i++) 
		{
			cin >> a[i];
			m1[a[i]]++;
		}

		ll sum = 0;
		for (int i = 0; i < n; i++) 
		{
			ll x = a[i];
			for (int j = i + 1; j < n; j++) 
			{
				x += a[j];
				if (x > n) break;
				if (m1[x]) { sum += m1[x];	m1[x] = 0; }
			}
		}

		cout << sum << endl;
	}	
}
