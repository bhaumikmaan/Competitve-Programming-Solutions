/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
int pre[N + 5] ;
void solve()
{
	int n , c ;
	cin >> n >> c ;
	int a[n + 1] ;
	for(int i = 1 ; i <= c ; i++)
	{
		pre[i] = 0 ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
		pre[a[i]] = 1 ;
	}
	for(int i = 1 ; i <= c ; i++)
	{
		pre[i] += pre[i - 1] ;
	}
	sort(a + 1 , a + n + 1) ;
	int u = unique(a + 1 , a + n + 1) - a ;
	u-- ;
	for(int i = 1 ; i <= u ; i++)
	{
		for(int j = 1 ; j <= c/a[i] ; j++)
		{
			if(pre[j] == pre[j - 1])
			{
				int m = min(a[i]*(j + 1) - 1 , c) ;
				if(pre[m] != pre[a[i]*j - 1])
				{
					cout << "No" ;
					return ;
				}
			}
		}
	}
	cout << "Yes" ;
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
