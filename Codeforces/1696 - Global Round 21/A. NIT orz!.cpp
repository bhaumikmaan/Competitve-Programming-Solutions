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
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
void solve( )
{
	int n , z ;
	cin >> n >> z ;
	vi a(n) ;
	for(auto &i:a)
	{
		cin >> i ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		a[i] |= z ;
		z &= a[i] ;
	}
	cout << *max_element(all(a)) ;
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
