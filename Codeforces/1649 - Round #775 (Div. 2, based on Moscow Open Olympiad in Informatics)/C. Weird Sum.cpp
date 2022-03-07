/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
int get(vi v)
{
	sort(all(v)) ;
	int ret = 0 , sum = 0 ;
	for(int i = 0 ; i < v.size() ; i++)
	{
		ret += (v[i]*i - sum) ;
		sum += v[i] ;
	}
	return ret ;
}
int sumret(vi x , vi y)
{
	return get(x) + get(y) ;
}
void solve()
{
	int n , a ;
	cin >> n >> a ;
	map<int,vector<pair<int,int>>> m;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= a ; j++)
		{
			int x ;
			cin >> x ;
                        m[x].push_back({i,j}) ;
		}
	}
	int ans = 0 ;
	for(auto &x:m)
	{
		vi aa , bb ;
		for(auto i:x.second)
		{
			aa.pb(i.first) ;
			bb.pb(i.second) ;
		}
		ans += sumret(aa , bb) ;
	}
	cout << ans ;
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
