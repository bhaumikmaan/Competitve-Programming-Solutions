/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/285/problem/B
// Solution Link: https://codeforces.com/contest/285/submission/113606473

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n , s , t ;
    cin >> n >> s >> t ;
    int p[n] ;
    for(int i = 1 ; i <= n ; i++)
    {
    	cin >> p[i] ;
    }
    int flag = s ;
    int cnt = 0 ;
    while(s != t)
    {
      cnt++ ;
        s = p[s];
        if(s == flag) 
        {
        	break ;
        }
	}
	if(s == t) 
	{
		cout << cnt << endl ;
	}
	else
	{
		cout << -1 << endl ;
	}
    return 0 ;
}  
