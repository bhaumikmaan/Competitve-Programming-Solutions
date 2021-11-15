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
    	cin >> k >> n ;
    	int a[n] ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> a[i] ;
    	}
    	int l = a[n-1] ;
    	if(k%2 == 0)
    	{
    		if(l%2 == 0)
    		{
    			cout << "even" ;
    		}
    		else
    		{
    			cout << "odd" ;
    		}
    	}
    	else
    	{
    		int cnt = 0 ;
    		for(int i = 0 ; i < n - 1 ; i++)
    		{
    			if(a[i]%2 == 1)
    			{
    				cnt++ ;
    			}
    		}
    		cnt += l ;
    		if(cnt%2 == 0)
    		{
    			cout << "even" ;
    		}
    		else
    		{
    			cout << "odd" ;
    		}
    	}
    	cout << endl ;
    }
    return 0 ;
}    
