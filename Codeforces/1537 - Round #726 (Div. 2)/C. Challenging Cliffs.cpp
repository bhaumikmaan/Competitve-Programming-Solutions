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
    cin >> testcases ;
    while( testcases -- )
    {
    	int n ;
    	cin >> n ;
    	vector<int> v(n) ;
    	vector<int> copy(n) ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		cin >> v[i] ;
    		copy[i] = v[i] ;
    	}
    	sort(all(copy)) ;
    	int mn = inf ;
    	int s , l ;
    	for(int i = 0 ; i < n - 1 ; i++)
    	{
    		if(copy[i+1] - copy[i] < mn)
    		{
    			mn = copy[i+1] - copy[i] ;
    			s = i ;
    			l = i+1 ;
    		}
    	}
    	sort(all(v)) ;
    	if(n == 2)
    	{
    		for(auto i : v)	
    		{
    			cout << i << " " ;
    		}
    	} 
    	else
    	{
	    	for(int i = l ; i < n ; i++)
	    	{
	    		cout << copy[i] << " " ;
	    	}
	    	for(int i = 0 ; i <= s ; i++)
	    	{
				cout << copy[i] << " " ;
	    	}
	    }
    	// cout << l ;
        cout << endl ;
    }
    return 0 ;
}    
