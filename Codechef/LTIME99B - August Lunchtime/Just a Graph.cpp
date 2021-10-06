/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/LTIME99B/problems/JAG
// Solution Link: https://www.codechef.com/viewsolution/50252108

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
        int a[n+1] ;
        map<int,int> m ;
        for(int i = 1 ; i <= n ; i++)
        {
        	cin >> a[i] ;
        	m[a[i] - i]++ ;
        }
        if(m[a[1] - 1] == n)
        {
        	cout << n ;
        }
        else
        {
        	cout << 1 ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
