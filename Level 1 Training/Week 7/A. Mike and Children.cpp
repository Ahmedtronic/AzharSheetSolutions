#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
#include <functional>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <numeric>
#include <typeinfo>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <cctype>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <csetjmp>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
//**************************************//
using namespace std;
typedef pair <int, int> intpair;
#define longlongvector vector<long long>
#define llvector vector<long long>
typedef long long ll;
#define pause system("pause")
#define overtwo >> 1
#define intvector vector<int>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define reverseall(x) reverse(all(x))
#define size size()
#define ever for(;;)
#define isnotempty(s) !s.empty()
#define space " "
#define debughere cout<<"Debugging Here"<<endl
#define maxelement(x) *max_element(all(x));
#define cinvector(vec) for(auto & i : vec) cin >> i

vector<int> fre(2e5 + 10);
int main() {
    
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            fre[v[i] + v[j]]++;
    
    for (int i = 0; i <= 2e5; i++)
        cnt = max(cnt, fre[i]);
    
    cout << cnt <<endl;
}
