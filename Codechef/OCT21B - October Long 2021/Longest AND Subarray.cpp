/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/OCT21B/problems/ANDSUBAR
// Solution Link: https://www.codechef.com/viewsolution/51927086

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
int setb(int n)
{
	int cnt = 0 ;
	while(n > 0)
	{
		cnt++ ;
		n = n>>1 ;
	}
	return cnt ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        int b = setb(n) ;
        int x = n - pow(2 , b - 1) + 1 ;
        int y = pow(2 , b - 1) - pow(2 , b - 2) ;
        cout << max(x , y) ;
        cout << "\n" ;
    }
    return 0 ;
}    
