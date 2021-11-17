/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007	
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	int cnt = 0 ;
	for(auto i:s)
	{
		if(i == '0')
		{
			cnt++ ;
		}
		else
		{
			cnt-- ;
		}
	}
	cnt %= 4 ;
	if(cnt < 0)
	{
		cnt += 4 ;
	}
	if(!cnt)
	{
		cout << "E" ;
	}
	else if(cnt == 1)
	{
		cout << "S" ;
 	}
 	else if(cnt == 2)
 	{
 		cout << "W" ;
 	}
 	else
 	{
 		cout << "N" ;
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
