/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 200010
using namespace std ;
vector<int> a(N , 0) , b(N , 0) ;
void check(int i , int m)
{
	if(b[i] < m)
	{
		a[i] = 0 ;
	}
	else
	{
		a[i] = 1 ;
	}
}
void show(vector<int> v)
{
	for(auto i:v)
	{
		cout << i << "\n" ;
	}
}
void solve( )
{
	int n , m , k ;
	cin >> n >> m >> k ;
	for(int i = 0 ; i < n ; i++)
	{
		int x , y ;
		cin >> x >> y ;
		b[x]++ , b[y+1]-- ;
	}
	for(int i = 1 ; i <= N ; i++)
	{
		b[i] += b[i-1] ;
	}
	// show(b) ;
	for(int i = 0 ; i <= N ; i++)
	{
		check(i , m) ;
	}
	// show(a) ;
	for(int i = 1 ; i <= N ; i++)
	{
		a[i] += a[i-1] ;
	}
	// show(a) ;
	while(k--)
	{
		int x , y ;
		cin >> x >> y ;
		cout << a[y] - a[x - 1] << "\n" ;
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
        cout << "\n" ;
    }
    return 0 ;
}
