/***  KNOWLEDGE IS POWER  ***/

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
	int a , b ;
	cin >> a >> b ;
	bool flag = true ;
	int cnt = 0 ;
	while(flag)
	{
		if(b > a)
		{
			a += 2 ;
			cnt++ ;
		}
		else if(a > b)
		{
			a-- ;
			cnt++ ;
		}
		else
		{
			flag = false ;
		}
	}
	cout << cnt ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
