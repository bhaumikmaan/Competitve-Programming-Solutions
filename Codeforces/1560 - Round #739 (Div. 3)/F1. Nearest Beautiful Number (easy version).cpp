/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000000	
#define inf LLONG_MAX
#define N 100010
using namespace std ;
set<int> st ;
void solveagain(int x , int i , int j)
{
	st.insert(x) ;
	if(x >= mod)
	{
		return ;
	}
	if(x || i)
	{
		solveagain(x*10 + i , i , j) ;
	}
	if(x || j)
	{
		solveagain(x*10 + j , i , j) ;
	}
}
void pre()
{
	for(int i = 0 ; i < 10 ; i++)
	{
		for(int j = i ; j < 10 ; j++)
		{
			solveagain(0 , i , j) ;
		}
	}
}
void solve()
{
	int n , k ;
	cin >> n >> k ;
	int ans = inf ;
	if(k == 1)
	{
		for(int i = 1 ; i < 10 ; i++)
		{
			int temp = 0 ;
			for(int j = 1 ; j <= 15 ; j++)
			{
				temp *= 10 ;
				temp += i ;
				if(temp >= n)
				{
					ans = min(ans , temp) ;
					break ;
				}
			}
		}
		cout << ans ;
	}	
	else
	{
		cout << *st.lower_bound(n) ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    pre() ;
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
