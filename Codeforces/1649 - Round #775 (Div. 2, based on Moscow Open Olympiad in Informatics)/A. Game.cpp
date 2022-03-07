/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
void solve()
{
	int n ;
	cin >> n ;
	vi a(n) ;
	for(auto &i:a)
	{
		cin >> i ;
	} 
	int s = -1 , e = -1 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(!a[i])
		{
			s = i - 1 ;
			break ;
		}
	}
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		if(!a[i])
		{
			e = i + 1 ;
			break  ;
		}
	}
	if(s == e && e == -1)
	{
		cout << 0 ;
	}
	else
	{
		cout << e - s ;
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
