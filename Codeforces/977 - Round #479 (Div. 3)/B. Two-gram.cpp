/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200100
using namespace std ;
void solve( )
{
	int n ;
	string s ;
	cin >> n >> s ;
	map<pair<char,char> , int> m ;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		m[make_pair(s[i] , s[i + 1])]++ ;
	} 
	int mx = 0 ;
	char a , b ;
	for(auto i:m)
	{
		if(i.second > mx)
		{
			mx = i.second ;
			a = i.first.first ;
			b = i.first.second ;
		}
	}
	cout << a << b ;
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
