/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000001
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
	int n ;
	cin >> n ;
	vi l(n) , r(n) , c(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> l[i] >> r[i] >> c[i] ;
	}
	int mnl = inf , mnr = inf , mn = inf ;
	int le = 1e9 + 1 , ri = -1 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(l[i] < le)
		{
			mn = inf ;
			mnl = inf ;
			le = l[i] ;
		}
		if(r[i] > ri)
		{
			mn = inf ;
			mnr = inf ;
			ri = r[i] ;
		}
		if(l[i] == le)
		{
			mnl = min(mnl , c[i]) ;
		}
		if(r[i] == ri)
		{
			mnr = min(mnr , c[i]) ;
		}
		if(l[i] == le && r[i] == ri)
		{
			mn = min(mn , c[i]) ;
		}
		cout << min(mnl + mnr , mn) << "\n" ;
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
        // cout << "\n" ;
    }	
    return 0 ;
}    	
