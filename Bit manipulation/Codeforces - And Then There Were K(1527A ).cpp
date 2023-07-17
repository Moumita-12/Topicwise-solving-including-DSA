#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
#define ull         unsigned long long
#define mod         1000000007
#define ios         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi          acos(-1)
#define lcm(a,b)    (a*b)/__gcd(a,b)
#define stp         cout << setprecision(6) << fixed



unsigned countBits(unsigned int number)
{     
      
      return (int)log2(number)+1;
}


void solve()
{

 
  ll n;
 cin>>n;

 ll k=countBits(n);
 ll l=1<<(k-1);

   cout<<l-1<<endl;

 
 }




int main()
{
    ios;
   ll t;
     cin >> t;
  // t=1;
    while ( t-- )
        solve();
    return 0;
}
