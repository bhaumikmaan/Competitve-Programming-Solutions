/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
	int a[7] ;
	for(int i = 0 ; i < 7 ; i++)
	{
		cin >> a[i] ;
	}
	cout << a[0] << " " << a[1] << " " ;
	if(a[0] + a[1] == a[2])
	{
		cout << a[3] ;
	}
	else
	{
		cout << a[2] ;
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
