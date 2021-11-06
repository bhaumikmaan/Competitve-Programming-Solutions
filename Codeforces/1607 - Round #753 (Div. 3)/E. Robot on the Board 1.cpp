/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	string s ;
	cin >> s ;
	int d = 0 , r = 0 ;
	int a[s.length()+ 10] , aa[s.length()+ 10] , b[s.length()+ 10] , bb[s.length() + 10] ;
	a[0] = 0 , aa[0] = 0 , b[0] = 0 , bb[0] = 0 ;
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] == 'U')
		{
			d-- ;
		}
		else if(s[i] == 'D')
		{
			d++ ;
		}
		else if(s[i] == 'R')
		{
			r++ ;
		}
		else
		{
			r-- ;
		}
		a[i + 1] = max(a[i] , d) ;
		b[i + 1] = max(b[i] , r) ;
		aa[i + 1] = min(aa[i] , d) ;
		bb[i + 1] = min(bb[i] , r) ;
	}
	for(int i = s.length() ; i >= 0 ; i--)
	{
		if(a[i] - aa[i] >= n || b[i] - bb[i] >= m)
		{
			
		}
		else
		{
			cout << 1 - aa[i] << " " << 1 - bb[i] ;
			return ;
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
