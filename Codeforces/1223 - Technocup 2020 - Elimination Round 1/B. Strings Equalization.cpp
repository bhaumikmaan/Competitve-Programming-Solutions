/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	string s , t ;
	cin >> s >> t ;
	map<char,int> m ;
	int S = s.length() , T = t.length() ;
	for(int i = 0 ; i < S ; i++)
	{
		m[s[i]]++ ;
	}
	bool flag = false ;
	for(int i = 0 ; i < T ; i++)
	{
		if(m[t[i]])
		{
			flag = true ;
			break ;
		}
	}
	if(flag)
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
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
