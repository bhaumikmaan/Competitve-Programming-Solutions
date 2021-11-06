/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	vector<int> a(n) ;
	vector<bool> b(n , false) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	bool ans = false ;
	for(int i = 0 ; i < n ; i++)
	{
		if(!ans)
		{
			for(int j = i + 2 ; j >= 2 ; j--)
			{
				if(a[i]%j)
				{
					b[i] = true ;
					break ;
				}
			}
			if(!b[i])
			{
				ans = true ;
			}
		}
	}
	if(ans)
	{
		cout << "NO" ;
		return ;
	}
	cout << "YES" ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
