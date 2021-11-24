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
	int n ;
	cin >> n ;
	int a[2] ;
	a[0] = 0 , a[1] = 0 ;
	int cnt = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		string s ;
		cin >> s ;
		for(auto i:s)
		{
			a[i - '0']++ ;
		} 
		if(s.length()&1)
		{
			cnt++ ;
		}
	}
	int c = a[0]%2 + a[1]%2 ;
	if(c > cnt)
	{
		cout << n - 1 ;
	}
	else
	{
		cout << n ;
	}
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
