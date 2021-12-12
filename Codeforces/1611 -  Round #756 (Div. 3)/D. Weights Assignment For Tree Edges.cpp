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
	int n ;
	cin >> n ;
	vector<int> b(n + 1) , p(n + 1) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> b[i] ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> p[i] ;
	}
	if(b[p[1]] != p[1])
	{
		cout << -1 ;
		return ;
	}
	vector<int> s(n + 1) , w(n + 1 , -1) ;
	w[p[1]] = 0 ;
	bool flag = false ;
	for(int i = 2 ; i <= n ; i++)
	{
		if(w[b[p[i]]] == -1)
		{
			flag = true ;
			break ;
		}
		int x = s[p[i - 1]] - s[b[p[i]]] + 1 ;
		w[p[i]] = x ;
		s[p[i]] = s[b[p[i]]] + x ;
	}
	if(flag)
	{
		cout << -1 ;
	}
	else
	{
		for(int i = 1 ; i <= n ; i++)
		{
			cout << w[i] << " " ;
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
