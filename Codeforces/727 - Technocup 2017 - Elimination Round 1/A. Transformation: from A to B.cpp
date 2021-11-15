/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
void solve()
{
	int a , b ;
	cin >> a >> b ;
	vector<int> v ;
	v.pb(b) ;
	while(b > a)
	{
		if(b%10 == 1)
		{
			b /= 10 ;
		}
		else
		{
			if(!(b&1))
			{
				b /= 2 ;
			}
			else
			{
				cout << "NO" ;
				return ;
			}
		}
		v.pb(b) ;
	}
	if(a > b)
	{
		cout << "NO" ;
	}
	else
	{
		cout << "YES\n" << v.size() << "\n" ;
		reverse(all(v)) ;
		for(auto i:v)
		{
			cout << i << " " ;
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
