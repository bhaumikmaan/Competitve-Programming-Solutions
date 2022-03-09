/***  KNOWLEDGE IS POWER  ***/
#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
void solve()
{
	int n ;
	cin >> n ;
	vi a(n) ;
	deque<int> q ;
	for(auto &i:a)
	{
		cin >> i ;
		q.pb(i) ;
	}
	vi ans(n , 0) ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		while(q.back() != i + 1) // R->L trav
		{
			q.pb(q.front()) ; // L Shift
			q.pop_front() ;
			ans[i]++ ;
		}
		q.pop_back() ;
	}
	for(auto &i:ans)
	{
		cout << i << " " ;
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
