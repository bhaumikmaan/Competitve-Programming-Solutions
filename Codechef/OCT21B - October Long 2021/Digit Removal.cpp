/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/OCT21B/problems/DIGITREM
// Solution Link: https://www.codechef.com/viewsolution/51928121

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int rec(int n , int s)
{
	int copy = n , r = 0 , sum = 0 , cops = 1 , pl = 1 ;
	while(copy)
	{
		r = copy%10 ;
		if(r == s)
		{
			cops *= pl ;
			return (cops - sum) ;
		}
		else
		{
			sum += r*pl ;
			pl *= 10 ;
			copy /= 10 ;
		}
	}
	return 0 ;
}
void solve(int n , int s , int ans)
{
	int x = rec(n , s) ;
	if(x == 0)
	{
		cout << ans ;
	}
	else
	{
		ans += x ;
		n += x ;
		solve(n , s , ans) ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	int n , s ;
    	cin >> n >> s ;
    	int ans = 0 ;
    	solve(n , s , ans) ;
        cout << "\n" ;
    }
    return 0 ;
}    
