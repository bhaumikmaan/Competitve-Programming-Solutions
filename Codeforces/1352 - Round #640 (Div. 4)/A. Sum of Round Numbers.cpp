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
        vector<int> v ;
        int cnt = 0 , k = 0 ;
        while(n)
        {
        	v.push_back(n%10) ;
        	k++ ;
			n /= 10 ;
        }
        for(int i = 0 ; i < k ; i++)
		{
			if(v[i] != 0)
			{
				cnt++ ;
			}
		}
		cout << cnt << endl ;
		int m = 1 ;
        for(int i = 0 ; i < k ; i++)
		{
			if(v[i] != 0)
			{
				cout << v[i]*m << " " ;
			}
			m*=10 ;
		}
		cout << endl ;
    }
    return 0 ;
}    
