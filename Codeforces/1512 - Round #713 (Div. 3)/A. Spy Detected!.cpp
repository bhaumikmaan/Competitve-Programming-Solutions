/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int arr[n] ;
        int d ;
        for(int i = 1 ; i < n +1  ; i++ )
        {
        	cin >> arr[i] ;
        }
        if(arr[1] != arr[2])
        {
        	d = 1 ;
        }
        if(arr[n-1] != arr[n] )
        {
        	d = n ;
        }
        for(int i = 2 ; i < n ; i++)
        {
        	if( arr[i] != arr[i-1] && arr[i] != arr[i+1] )
        	{
        		d = i ;
        	}   
        }
        cout << d << endl ;
    }
    return 0 ;
}    
