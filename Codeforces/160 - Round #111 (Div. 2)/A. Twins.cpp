/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int arr[n], total = 0 , sum = 0, cnt = 0;
    
    for(int i=0; i<n; i++)
    {
    	cin >> arr[i];
    	total += arr[i];
    }
    
    total = total/2;
    sort( arr, arr + n);
    
    for(int i=n-1; i>=0 ; i--)
    {
    	sum += arr[i];
    	cnt++;
    	if( sum > total)
    	{
    		break;
    	}
    }	
    cout << cnt << endl;
    return 0 ;
}    
