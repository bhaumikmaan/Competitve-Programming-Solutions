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
        int n ;
        cin >> n ;
        vector<int> v ;
        for(int i = 0 ; i < n ; i++)
        {
        	bool flag = false ;
        	for(int j = 0 ; j < n ; j++)
        	{
        		int x ;
        		cin >> x ;
        		if(x == 1 || x == 3)
        		{
        			flag = true ;
        		}
        	}
        	if(!flag)
        	{
        		v.pb(i + 1) ;
        	}
        }
        cout << v.size() << "\n" ;
        for(auto i:v)
        {
        	cout << i << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}     
