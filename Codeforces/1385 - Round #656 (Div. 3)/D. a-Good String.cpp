/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1385/problem/D
// Solution Link: https://codeforces.com/contest/1385/submission/131066495	

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200002 
using namespace std ;
int n ;
string s ;
int work(int l , int r , char c)
{
	if(l == r)
	{
		if(s[r] == c)
		{
			return false ;
		}
		else
		{
			return true ;
		}
	}
	int m = l + (r - l)/2 , lc = 0 , rc = 0 ;
	for(int i = l ; i <= r ; i++)
	{
		if(s[i] != c)
		{
			if(i <= m)
			{
				lc++ ;
			}
			else
			{
				rc++ ;
			}
		}
	}
	lc += work(m + 1 , r , c + 1) ;
	rc += work(l , m , c + 1) ;
	return min(lc , rc) ;
}
void solve( ) 
{
	cin >> n >> s ;
	cout << work(0 , n - 1 , 'a') ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }
    return 0 ;
}    
