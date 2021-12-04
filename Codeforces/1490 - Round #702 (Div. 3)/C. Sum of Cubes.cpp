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
    	bool flag = false ;
    	for(int i = 1 , j = pow(n , 1.0/3) + 9 ; i <= j ; i++)
    	{
    		while(i*i*i + j*j*j > n && j > 0)
    		{
    			j-- ;
    		}
    		if(i*i*i + j*j*j == n && j != 0)
    		{
    			flag = true ;
    		}
    	}
    	if(flag)
    	{
    		cout << "YES" ;
    	}
    	else
    	{
    		cout << "NO" ;
    	}
    	cout << endl ;
    }
    return 0 ;
}    
