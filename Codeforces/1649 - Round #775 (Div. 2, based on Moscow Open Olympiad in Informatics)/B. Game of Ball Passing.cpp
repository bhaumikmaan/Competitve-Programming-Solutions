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
#define haan cout << "YES"
void solve()
{
	int n ;
	cin >> n ;
	vi a(n) ;
	int sum = 0 ;
	for(auto &i:a)
	{
		cin >> i ;
		sum += i ;
	} 
	sort(all(a)) ;
	int c = sum - a.back() ;
	if(!sum)
	{
		cout << 0 ;
	}
	else if(c - a.back() >= -1)
	{
		cout << 1 ;
	}
	else
	{
		cout << a.back() - c ;
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
