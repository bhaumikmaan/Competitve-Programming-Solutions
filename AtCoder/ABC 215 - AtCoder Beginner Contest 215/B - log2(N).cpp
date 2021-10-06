/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://atcoder.jp/contests/abc215/tasks/abc215_b
// Solution Link: https://atcoder.jp/contests/abc215/submissions/25223685

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;	
int pwer(int a, int b)
{
    if (b == 0)
        return 1;
    int answer = a;
    int increment = a;
    int i, j;
    for(i = 1; i < b; i++)
    {
        for(j = 1; j < a; j++)
        {
            answer += increment;
        }
        increment = answer;
    }
    return answer;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
        int n;
        cin >> n ;
        for(int i = 60 ; i >= 0 ; i--)
        {
        	if(pwer(2 , i) <= n)
        	{
        		cout << i ; 
        		return 0 ;
        	}
        }
        cout << "\n" ;
    }
    return 0 ;
}    
