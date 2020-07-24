#include"bits/stdc++.h"
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define pb emplace_back
#define mod 1000000007
#define full(a) (a).begin(), (a).end()
#define full1(a) a.begin(), a.end()
#define FOR(i,a,n) for (int i = a; i <= n; ++i)
#define IFOR(i,n,a) for (int i = n; i >= a; --i)
#define printline cout<<"\n";
#define db1(x) cerr << #x << " = " << x << endl;
#define db2(x, y) cerr << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")\n"; 
#define db3(x, y, z) cerr << "(" << #x << ", " << #y << ", " << #z << ") = (" << x << ", " << y << ", " << z << ")\n";
#define printVector(v,l,r) FOR(i,l,r)cerr<<v[i]<<" \n"[i==r];
#define pii pair<int,int>
#define mp make_pair
#define fi first
#define se second
int32_t main()
{
    FASTIO
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,ele;
        cin>>n;  

        vector<int> v(n);
        for(auto &i: v) cin>>i;

     	std::vector<int> v(n+1);
     	FOR(i,1,n) cin>>v[i];
    }
    return 0;
}