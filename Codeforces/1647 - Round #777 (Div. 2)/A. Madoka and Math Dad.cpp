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
void solve()
{
	int n ;
	cin >> n ;
	if(n == 1 || n == 2)
	{
		cout << n ;
		return ;
	}
	string s = "" ;
	int cnt = 0 , i = 0 ;
	while(cnt < n)
	{
		if(i&1)
		{
			s += '2' ;
			cnt += 2 ;
		}
		else
		{
			s += '1' ;
			cnt++ ;
		}
		i++ ;
	}
	if(cnt > n)
	{
		s.erase(0 , 1) ;
	}
	string c = s ;
	reverse(all(c)) ;
	cout << max(s , c) ;
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
