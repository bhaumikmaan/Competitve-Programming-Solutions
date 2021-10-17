/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 100010
using namespace std ;
vector<int> a(N) , b[N] , pre(N) ;
void show(vector<int> v , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout << v[i] << " " ;
	}
	cout << "\n" ;
}
void solve( )
{
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	vector<int> b = a ;
	// show(a , n + 1) ;
	// show(b , n + 1) ;
	sort(b.begin() , b.begin() + n + 1) ;
	for(int i = 2 ; i <= n ; i++)
	{
		a[i] += a[i-1] ;
		b[i] += b[i-1] ;
	}
	int q ;
	cin >> q ;
	while(q--)
	{
		int x , y , z ;
		cin >> x >> y >> z ;
		if(x == 1)
		{
			cout << a[z] - a[y - 1] ;
		}
		else
		{
			cout << b[z] - b[y - 1] ;
		}
		cout << "\n" ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases-- )
    {
        solve() ;
        // cout << "\n" ;
    }
    return 0 ;
}
