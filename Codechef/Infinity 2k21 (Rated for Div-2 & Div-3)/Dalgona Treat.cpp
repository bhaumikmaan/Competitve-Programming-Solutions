/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ; 
void solve()
{
	int n ;
	cin >> n ;
	if(n == 1)
	{
		cout << "1\n1 1" ;
	}
	else if(n == 2)
	{
		cout << "2\n3 1\n4 1" ;
	}
	else if(n == 3)
	{
		cout << "2\n2 2\n1 1" ;
	}
	else if(n == 4)
	{
		cout << "1\n1 4" ;
	}
	else if(!(n&1))
	{
		cout << "2\n1 " << n - 1 << "\n" ;
		cout <<  (((n-1) - 3)/2) + 1 << " 1" ;
	}
	else
	{
		cout << "3\n" << ((n - 3)/2) + 2 << " 1\n2 1\n1 " << n - 2 ;
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
