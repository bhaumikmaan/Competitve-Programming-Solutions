/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1174/problem/A
// Solution Link: https://codeforces.com/contest/1174/submission/116599433

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	int n ;
    	cin >> n ;
    	int m = 2*n ;
    	int a[m] ;
    	bool flag = false ;
    	for(int i = 0 ; i < m ; i++)
    	{
    		cin >> a[i] ;
    	}
    	for(int i = 1 ; i < m ; i++)
    	{
    		if(a[i] != a[i-1])
    		{
    			flag = true ;
    		}
    	}
    	if(flag)
    	{
    		sort(a , a+m) ;
        	for(int i=0 ; i < m ; i++)
        	{
        		cout << a[i] << " " ;
        	}
    	}
    	else
    	{
    		cout << -1 ;
    	}
        cout << endl ;
    }
    return 0 ;
}   
