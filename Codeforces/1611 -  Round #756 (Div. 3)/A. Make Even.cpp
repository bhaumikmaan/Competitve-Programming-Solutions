/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000007
using namespace std ;
void solve()
{
	string s ;
	cin >> s ;
	char b = s.back() ;
	if(b == '0' || b == '2' || b == '4' || b == '6' || b == '8')
	{
		cout << 0 ;
		return ;
	}
	int p = -1 ;
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')
		{
			p = i ;
			break ;
		}
	}
	if(p == -1)
	{
		cout << p ;
	}
	else if(p == s.length() - 1)
	{
		cout << 0 ;
	}
	else
	{
		if(p == 0)
		{
			cout << 1 ;
		}
		else
		{
			cout << 2 ;
		}
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
