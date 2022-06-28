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
	int n ;
	cin >> n ;
	vi a(n) ;
	map<int,int> m ; 
	for(auto &i:a)
	{
		cin >> i ;
		m[i]++ ;
	}
	vi c ;
	c = a ;
	sort(all(c)) ;
	if(!c.back())
	{
		cout << 0 ;
		return ;
	}
	if(c[0] > 0)
	{
		cout << 1 ;
		return ;
	}
	int l = 0 , r = n - 1 , cnt = 0 ;
	while(!a[l])
	{
		l++ ;
		cnt++ ;
	}
	while(!a[r])
	{
		r-- ;
		cnt++ ;
	}
	if(cnt == m[0])
	{
		cout << 1 ;
	}
	else
	{
		cout << 2 ;
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
