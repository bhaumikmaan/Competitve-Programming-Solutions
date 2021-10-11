/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        vector<pair<int,int>> a(n) ;
        vector<int> v(n + 1 , 0) , u(n + 1 , 0) ;
        for(int i = 0 ; i < n ; i++)
        {
        	int x , y ;
        	cin >> x >> y ;
        	a[i] = {x , y} ;
        	v[x]++ , u[y]++ ;
        }
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
        	ans += (v[a[i].first] - 1)*(u[a[i].second] - 1) ;
        }
        cout << (n*(n-1)*(n-2))/6 - ans ;
        cout << "\n" ;
    }
    return 0 ;
}    
