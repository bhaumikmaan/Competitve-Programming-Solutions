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
vector<int> a(N , 0) , b(N , 0) ;
void show(vector<int> v)
{
	for(auto i:v)
	{
		cout << i << "\n" ;
	}
}
int sum(int s , int e)
{
	int sm = 0 ;
	for(int i = s ; i <= e ; i++)
	{
		sm += a[i] ;
	}
	return sm ;
}
void solve( )
{
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	// show(a) ;
	int q ;
	cin >> q ;
	while(q--)
	{
		int x , y ;
		cin >> x >> y ;
		cout << sum(x , y) << "\n" ;
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
