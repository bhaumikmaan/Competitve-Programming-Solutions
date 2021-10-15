/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/OCT21B/problems/MIXTURE
// Solution Link: https://www.codechef.com/viewsolution/51926751

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
        int a , b ;
        cin >> a >> b ;
        if(a && b)
        {
        	cout << "Solution" ;
        }
        else if(b == 0)
        {
        	cout << "Solid" ;
        }
        else if(a == 0)
        {
        	cout << "Liquid" ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    
