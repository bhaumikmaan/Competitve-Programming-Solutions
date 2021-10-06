/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1174/problem/C
// Solution Link: https://codeforces.com/contest/1174/submission/130977157

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int a[100010] ;
void solve()
{
	int n ;
	cin >> n ;
	int cnt = 0 ;
	for(int i = 2 ; i <= n ; i++)
	{
		if(!a[i])
		{
			cnt++ ;
			for(int j = i ; j <= n ; j+=i)
			{
				a[j] = cnt ;
			}
		}
	}
	for(int i = 2 ; i <= n ; i++)
	{
		cout << a[i] << " " ;
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
