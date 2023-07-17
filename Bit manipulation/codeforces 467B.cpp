#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
#define ull         unsigned long long
#define mod         1000000007
#define ios         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi          acos(-1)
#define lcm(a,b)    (a*b)/__gcd(a,b)
#define stp         cout << setprecision(6) << fixed

int main()
{
    ll n,m,k,i,z;
    cin>>n>>m>>k;
    ll a[m+1];
    ll cnt=0;
    for(i=0;i<=m;i++)  cin>>a[i];
    for(i=0;i<m;i++)
    {
         z=__builtin_popcount(a[m]^a[i]);
        if(z<=k)   cnt++;
    }
    cout<<cnt<<endl;
}
