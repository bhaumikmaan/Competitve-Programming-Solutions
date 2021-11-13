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
    string s ;
    cin >> s ;
    string r = s ;
    sort(all(r)) ;
    if(s == r)
    {
    	cout << 0 ;
    	return ;
    }
    vector<int> v ;
    int x = 0 ;
    for(auto i:s)
    {
    	x += i - '0' ;
    }
    for(int i = 0 ; i < n ; i++)
    {
    	if(s[i] == '1' && i < n - x)
    	{
    		v.pb(i + 1) ;
    	}
    	if(s[i] == '0' && i >= n - x)
    	{
    		v.pb(i + 1) ;
    	}
    }
    cout << "1\n" << v.size() << " " ;
    sort(all(v)) ;
    for(auto i:v)
    {
        cout << i << " " ;
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
