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
	string a , b ;
	cin >> a >> b ;
	int sz = a.length() - 1 ;
	while(a[sz] == 'z')
	{
		a[sz] = 'a' ;
		sz-- ;
	}
	a[sz]++ ;
	if(a != b)
	{
		cout << a ;
	}
	else
	{
		cout << "No such string" ;
	}
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
