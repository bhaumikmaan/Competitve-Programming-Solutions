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
bool check(int x , int y)
{
	int ans = 0 ;
	for(int i = 0 ; i < 4 ; i++)
	{
		if(x%10 != y%10)
		{
			ans++ ;
		}
		x /= 10 ;
		y /= 10 ;
	}
	if(ans > 1)
	{
		return false ;
	}
	return true ;
}
void solve( )
{
	int n ;
	cin >> n ;
	int a[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int x = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		bool flag = false ;
		for(int j = 1000 ; j <= 2011 ; j++)
		{
			if(j >= x && check(a[i] , j))
			{
				a[i] = j ;
				x = j ;
				flag = true ;
				break ;
			}
		}
		if(!flag)
		{
			cout << "No solution" ;
			return ;
		}
	} 
	for(int i = 0 ; i < n ; i++)
	{
		cout << a[i] << "\n" ;
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
