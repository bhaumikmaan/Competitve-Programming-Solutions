/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int solvefor3(int n)
{
	int cnt = 0 ;
	while(n%3 == 0)
	{
		n /= 3 ;
		cnt++ ;
	}
	return cnt ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        vector<pair<int,int>> a(n) ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i].second ;
        	a[i].first = (-solvefor3(a[i].second)) ;
        	// cout << a[i].first ;
        }
        sort(all(a)) ; // On a[i].first
        for(auto i:a)
        {
        	cout << i.second << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
