/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000000000000003
#define inf LLONG_MAX
#define N 601000
using namespace std ;
int a[N] ;
set<int> st ;
void solve()
{
	int n , m ;
	cin >> n >> m ;
	a[0] = 1 ;
	for(int i = 1 ; i < N ; i++)
	{
		a[i] = a[i - 1]*3 ;
		a[i] %= mod ;
	}
	for(int i = 0 ; i < n ; i++)
	{
		string s ;
		cin >> s ;
		int temp = 0 ;
		for(auto i:s)
		{
			temp *= 3 ;
			temp += i - 'a' ;
			temp %= mod ;
		}
		st.insert(temp) ;
	}
	for(int i = 0 ; i < m ; i++)
	{
		string s ;
		cin >> s ;
		int temp = 0 ;
		for(auto i:s)
		{
			temp *= 3 ;
			temp += i - 'a' ;
			temp %= mod ;
		}
		bool flag = false ;
		int l = s.length() ;
		for(int j = 0 ; j < l ; j++)
		{
			int temp2 = temp - (s[l - 1 - j] - 'a')*a[j] ;
			temp2 %= mod ;
			if(temp2 < 0)
			{
				temp2 += mod ;
			}
			for(int k = 0 ; k < 3 ; k++)
			{
				if(s[l-1-j]-'a' != k && st.count((temp2 + k*a[j])%mod))
				{
					flag = true ;
					break ;
				}
			}
		}
		if(flag)
		{
			cout << "YES\n" ;
		}
		else
		{
			cout << "NO\n" ;
		}
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
