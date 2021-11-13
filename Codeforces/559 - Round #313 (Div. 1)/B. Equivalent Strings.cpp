/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
string check(string s)
{
	if(s.length()&1)
	{
		return s ;
	}
	string x = check(s.substr(0, s.length()/2)) ;
    string y = check(s.substr(s.length()/2)) ;
    if(x > y)
    {
    	swap(x , y) ;
    }
    return x + y ;
}
void solve()
{
	string s , t ;
	cin >> s >> t ;
	if(check(s) == check(t))
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
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
