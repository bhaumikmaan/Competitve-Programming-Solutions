/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int gcd(int A , int B)
{
    while(B)
    {
        A %= B ;
        swap(A, B) ;
    }
    return A ;
}
 
int lcm(int A, int B)
{
    return A*(B/gcd(A, B));
}
void solve( )
{
	int n ;
	cin >> n ;
	int ans = 1 ;
	for(int i = 2 ; i*i <= n ; i++)
	{
		if(n%i == 0)
		{
			ans = max(ans , i) ;
			ans = max(ans , n/i) ;
		}
	}
	cout << ans << " " << n - ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }
    return 0 ;
}    
