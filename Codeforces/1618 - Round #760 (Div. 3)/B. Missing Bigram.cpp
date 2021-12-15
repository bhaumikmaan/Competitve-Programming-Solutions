/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
 	int n ;
 	cin >> n ;
 	vector<string> v(n - 2) ;
 	for(int i = 0 ; i < n - 2 ; i++)
 	{
 		cin >> v[i] ;
 	}
	string ans = "" ;
	bool flag = false ;
	ans += v[0] ;
	for(int i = 1 ; i < n - 2 ; i++)
	{
		if(v[i][0] == v[i-1][1])
        {
            ans += v[i][1];
        }
        else
        {
            flag = true ;
            ans += v[i] ;
        }
	}
	if(!flag)
	{
		ans += 'a' ;
	}
	cout << ans ;
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
