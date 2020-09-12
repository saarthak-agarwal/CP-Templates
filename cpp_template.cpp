/*
 * Limits for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
 *
*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#include"bits/stdc++.h"
using namespace std;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define pb emplace_back
#define mod 1000000007
#define full(a) (a).begin(), (a).end()
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
    int t = 1; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;  
        std::vector<int> v(n);
        FOR(i,1,n) 
        {
            cin>>v[i-1];

        }
    }
    return 0;
}