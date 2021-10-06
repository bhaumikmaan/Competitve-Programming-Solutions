/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/LTIME99B/problems/KMAX2
// Solution Link: https://www.codechef.com/viewsolution/50248611

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
        int n , k ;
        cin >> n >> k ;
        k-- ;
        int a[n] ;
        int mx = INT_MIN , pos = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> a[i] ;
        	mx = max(mx , a[i]) ;
        }
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
        	int x = i + k ;
        	if(x < n && a[x] == mx)
        	{
        		cnt += (n-x) ;
        	}
        }
        cout << cnt ;
        cout << "\n" ;
    }
    return 0 ;
}    
