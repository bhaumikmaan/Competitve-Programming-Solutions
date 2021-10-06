/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://atcoder.jp/contests/abc215/tasks/abc215_c
// Solution Link: https://atcoder.jp/contests/abc215/submissions/25204112

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void nPermute(string str,int n)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
  
    // Keep iterating until
    // we reach nth position
    int i = 1;
    do {
        // check for nth iteration
        if (i == n)
            break;
  
        i++;
    } while (next_permutation(str.begin(), str.end()));
  
    // print string after nth iteration
    cout << str;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	string s ;
    	cin >> s ;
    	int n ; 
    	cin >> n ;
    	nPermute(s , n) ;
        cout << "\n" ;
    }
    return 0 ;
}    
