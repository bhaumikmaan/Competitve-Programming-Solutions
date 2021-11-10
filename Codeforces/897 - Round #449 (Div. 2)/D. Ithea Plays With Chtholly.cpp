/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
int a[1010] ;
void solve()
{
	int n , m , c ;
	cin >> n >> m >> c ;
	while(m--)
	{
		int x ;
		cin >> x ;
		if(x > c/2)
		{
			for(int i = n ; i ; i--)
			{
				if(a[i] == 0 || a[i] < x)
				{
					a[i] = x ;
					cout << i << "\n" ;
					cout.flush() ;
					break ; 
				}
			}
		} 
		else
		{
			for(int i = 1 ; i <= n ; i++)
			{
				if(a[i] == 0 || a[i] > x)
				{
					a[i] = x ;
					cout << i << "\n" ;
					cout.flush() ;
					break ; 
				}
			}
		}	
		bool flag = false ;
		for(int i = n ; i ; i--)
		{
			if(!a[i])
			{
				flag = true ;
			}
		}
		if(!flag)
		{
			return ;
		}
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
