/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1459/problem/A
// Solution Link: https://codeforces.com/contest/1459/submission/118486476

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
    	string r , b ;
    	cin >> r >> b ;
    	int rc = 0 , bc = 0 ;
    	for(int i = 0 ; i < n ; i++)
    	{
    		if(r[i]>b[i])
    		{
    			rc++ ;
    		}
    		else if(r[i]<b[i])
    		{
    			bc++ ;
    		}
    		else
    		{
    			rc++ ;
    			bc++ ;
    		}
    	}
    	if(rc > bc)
    	{
    		cout << "RED" ;
    	}
    	else if(rc < bc)
    	{
    		cout << "BLUE" ;
    	}
    	else
    	{
    		cout << "EQUAL" ;
    	}
        cout << endl ;
    }
    return 0 ;
}    
