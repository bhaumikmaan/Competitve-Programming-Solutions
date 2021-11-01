/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;	
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;	
    // cin >> testcases ;
    while( testcases -- )	
    {
    	int n , k ;
    	cin >> n >> k ;
    	map<int,int> mp ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		int a ;
    		cin >> a ;
    		mp[a]++ ;
    	}
    	int cnt = 0 , ans = 0 ;
    	for(auto i:mp)
    	{
    		cnt += i.second%2 ;
    		ans += (i.second/2)*2 ;
    	}
    	ans += (cnt + 1)/2 ;
    	cout << ans ;
        cout << endl ;
    }
    return 0 ;
}    
