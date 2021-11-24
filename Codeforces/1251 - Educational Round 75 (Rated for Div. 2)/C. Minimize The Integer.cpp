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
	string s ;
	cin >> s ;
	vector<char> v1 , v2 ;
	for(auto i:s)
	{
		int x = i - '0' ;
		if(x&1)
		{
			v1.pb(i) ;
		}
		else
		{
			v2.pb(i) ;
		}
	}
	reverse(all(v1)) ;
	reverse(all(v2)) ;
	while(v1.size() + v2.size())
	{
		if(!v1.size())
		{
			cout << v2.back() ;
			v2.pop_back() ;
			continue ;
		}
		if(!v2.size())
		{
			cout << v1.back() ;
			v1.pop_back() ;
			continue ;
		}
		if(v1.back() < v2.back())
		{
			cout << v1.back() ;
			v1.pop_back() ;
		}
		else
		{
			cout << v2.back() ;
			v2.pop_back() ;
		}
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
