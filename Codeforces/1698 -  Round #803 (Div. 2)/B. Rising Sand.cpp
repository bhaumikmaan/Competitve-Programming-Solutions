/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vi a(n) ;
	int x = 0 ;
	for(auto &i:a)
	{
		cin >> i ;
	}	
	if(k == 1)
	{
		if(!(n&1))
		{
			n-- ;
		}
		cout << n/2 ;
	}
	else
	{
		int asn = 0 ;
		for(int i = 1 ; i < n - 1 ; i++)
		{
			if(a[i - 1] + a[i + 1] < a[i])
			{
				asn++ ;
			}
		}
		cout << asn ;
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
