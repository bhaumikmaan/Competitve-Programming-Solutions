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
	string a , b ;
	cin >> a >> b ;
	vi c(305 , 0) ;
	for(auto i:a)
	{
		c[i]++ ;
	}
	int x = 0 ;
	for(auto i:b)
	{
		if(c[i] > 0)
		{
			x++ ;
		}
		c[i]-- ;
	}
	int y = 0 ;
	for(int i = 'a' ; i <= 'z' ; i++)
	{
		if(c[i]*c[i + 'Z' - 'z'] < 0)
		{
			y += min(abs(c[i]) , abs(c[i + 'Z' - 'z'])) ;
		}
	}
	cout << x << " " << y ;
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
