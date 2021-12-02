/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	sort(all(a)) ;
	for(int i = 0 , j ; i < n ; i = j)
	{
		j = i ;
		while(j < n && a[j] == a[i])
		{
			j++ ;
		}
		if(k > (j - i)*n)
		{
			k -= (j - i)*n ;
			continue ;
		}
		for(int x = 0 ; x < n ; x++)
		{
			if(k <= (j - i))
			{
				cout << a[i] << " " << a[x] << "\n" ;
				return ;
			}
			k -= j - i ;
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
