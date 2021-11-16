/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
vector<int> v ;
void solve()
{
	int n ;
	cin >> n ;
    for(auto i:v)
    {
    	if(i == n)
    	{
    		cout << 0 ;
    		return ;
    	}
    }
    int ans = inf ;
    for(int i = 0 ; i < 61 ; i++)
    {
    	string s = to_string(v[i]) ;
    	string check = to_string(n) ;
    	int chk = 0 , it = 0 , cnt = 0 ;
    	while(it < s.length() && chk < check.length())
    	{
    		if(s[it] == check[chk])
    		{
    			it++ ;
    			cnt++ ;
    		}
    		chk++ ;
    	}
    	ans = min(ans , s.length() + check.length() - 2*cnt) ;
    }
    cout << ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    for(int i = 0 ; i < 61 ; i++)
    {
    	int x = pow(2 , i) ;
    	v.pb(x) ;
    }
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
