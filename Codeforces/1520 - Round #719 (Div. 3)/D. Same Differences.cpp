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
        int a[n*2] = {0} ; //For -n to +n
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> arr[i] ;
        	int curr = arr[i] - i ;
        	int pos = curr ;
        	if(curr < 0)
        	{
        		curr = abs(curr) ;
        		pos = n + curr ; //Pos after +ve n
        	}
        	cnt += a[pos] ;
        	a[pos] ++ ;
        }
        cout << cnt ; 
        cout << endl ;
    }
    return 0 ;
}    
