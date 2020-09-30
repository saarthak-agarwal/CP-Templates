#define DEBUG
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#include "bits/stdc++.h"
using namespace std;
template<class T> ostream& operator<<(ostream &os, vector<T> V){os << "[ ";for(auto v : V)os << v << " ";return os << "]";}
#ifdef DEBUG
    #define debug(...) __printer(#__VA_ARGS__, __VA_ARGS__);
    template <typename T>
    void __printer(const char* var_name, T&& val)
    {
        cerr << var_name << " = " << val << endl;
    }
    template <typename T, typename... Arguments>
    void __printer(const char* arg_names, T&& val, Arguments&&... remaining_args)
    {
        const char* comma = strchr(arg_names + 1, ',');
        cerr.write(arg_names, comma - arg_names) << " = " << val <<", ";
        __printer(comma+1, remaining_args...);
    }
#else
    #define debug(...) 1;
#endif
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define pb emplace_back
#define mod 1000000007
#define full(a) (a).begin(), (a).end()
#define FOR(i,a,n) for (int i = a; i <= n; ++i)
#define IFOR(i,n,a) for (int i = n; i >= a; --i)
#define pii pair<int,int>
#define mp make_pair
#define fi first
#define se second
int32_t main()
{
    FASTIO
    int t = 1; 
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n ;
    }
    return 0;
}