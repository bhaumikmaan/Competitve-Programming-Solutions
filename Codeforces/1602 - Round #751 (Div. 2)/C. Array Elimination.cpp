/***   KNOWLEDGE IS POWER ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	vector<int> a(31 , 0) ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		for(int j = 0 ; j < 30 ; j++)
		{
			if(x&(1<<j))
			{
				a[j]++ ;
			}
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		bool flag = true ;
		for(int j = 0 ; j < 30 ; j++)
		{
			if(a[j]%i)
			{
				flag = false ;
				break ;
			}
		}
		if(flag)
		{
			cout << i << " " ;
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
