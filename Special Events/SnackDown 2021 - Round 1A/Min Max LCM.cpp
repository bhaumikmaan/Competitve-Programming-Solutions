/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int gcd(int a, int b)
{
  if(b == 0)
  {
  	return a ;
  }
  return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve( )
{
	int a , b ;
	cin >> a >> b ;
	int ans = lcm((a*b - 1) , (a*b)) ;
	cout << a*2 << " " << ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
