/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int a , b ;
	cin >> a >> b ;
	int a2 = 0 , a3 = 0 , a5 = 0 ;
	int b2 = 0 , b3 = 0 , b5 = 0 ;
	while(!(a&1))
	{
		a2++ ;
		a /= 2 ;
	}
	while(a%3 == 0)
	{
		a3++ ;
		a /= 3 ;
	}
	while(a%5 == 0)
	{
		a5++ ;
		a /= 5 ;
	}
	while(!(b&1))
	{
		b2++ ;
		b /= 2 ;
	}
	while(b%3 == 0)
	{
		b3++ ;
		b /= 3 ;
	}
	while(b%5 == 0)
	{
		b5++ ;
		b /= 5 ;
	}
	if(a != b)
	{
		cout << -1 ;
	}
	else
	{
		cout << abs(a2 - b2) + abs(a3 - b3) + abs(a5 - b5) ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
