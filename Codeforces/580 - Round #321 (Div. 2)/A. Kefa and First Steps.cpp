/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n ; 
    cin >> n ; 
    int arr[n] ;
    int l = 1 ;
    int mx = 0 ;
    for( int i = 0 ; i < n ; i++)
    {
    	cin >> arr[i] ;
    }
    for( int i = 1 ; i < n ; i++)
    {
    	if(arr[i] >= arr[i-1])
    	{
    		l++ ;
    	}
    	else
    	{
    		mx = max(mx , l) ;
    		l = 1 ;
    	}
    	
    }
    mx = max(l , mx ) ;
    cout << mx << endl ;
    return 0 ;
}    
