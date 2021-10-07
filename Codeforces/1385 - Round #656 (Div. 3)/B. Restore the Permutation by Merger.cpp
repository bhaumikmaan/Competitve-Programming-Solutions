/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1385/problem/B
// Solution Link: https://codeforces.com/contest/1385/submission/118153056

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	int n ;
    	cin >> n ;
    	n *= 2 ;
    	int a[n] ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> a[i] ;
    	}
    	map<int,int> mp ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		mp[a[i]]++ ;
    		if(mp[a[i]] == 2)
    		{
    			cout << a[i] << " " ;
    		}
    	}
        cout << endl ;
    }
    return 0 ;
}    
