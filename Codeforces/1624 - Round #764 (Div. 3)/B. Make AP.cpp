/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 400005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int a , b , c ;
	cin >> a >> b >> c ;
	if(a == c && b == a)
	{
		haan ;
		return ;
	}
	if(b - a == c - b)
	{
		haan ;
	}
	else if(!((2*b - c)%a) && 2*b > c)
	{
		haan ;
	}
	else if(!((2*b - a)%c) && 2*b > a)
	{
		haan ;
	}
	else if(!((a + c)%(2*b)))
	{
		haan ;
	}
	else
	{
		cout << "NO" ;
	}
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
