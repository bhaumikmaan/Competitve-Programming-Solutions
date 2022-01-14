/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        vector<int> prime ;
        for(int i = 2 ; i < 40 ; i++)
        {
        	if(isPrime(i))
        	{
        		prime.pb(i) ;
        	}
        }
		int cnt = 1 ;
		vector<int> ans , v(11) ;
		for(int i = 0 ; i < n ; i++)
		{
			int x ;
			cin >> x ;
			for(int j = 0 ; j < 11 ; j++)
			{
				if(x%prime[j] == 0)
				{
					if(v[j] == 0)
					{
						v[j] = cnt ;
						cnt++ ;
					}
					ans.pb(v[j]) ;
					break ;
				}
			}
		}
		cout << cnt - 1 << "\n" ;
		for(auto i:ans)
		{
			cout << i << " " ;
		}
        cout << "\n" ;
    }
    return 0 ;
}    
