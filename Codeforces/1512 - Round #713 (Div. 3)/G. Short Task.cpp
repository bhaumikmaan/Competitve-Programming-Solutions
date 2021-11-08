/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
const int N = 1e7 + 5 ;
using namespace std ;
int hashh[N] , sieve[N] ;
void solve( )
{
	memset(hashh , -1 , sizeof(hashh)) ;
	for(int i = 1 ; i <= 1e7 ; i++)
	{
		for(int j = 1 ; j <= 1e7 ; j+=i)
		{
			sieve[j] += i ;
		}
	}
	for(int i = 1 ; i <= 1e7 ; i++)
	{
		if(sieve[i] <= 1e7)
		{
			if(hashh[sieve[i]] == -1)
			{
				hashh[sieve[i]] = i - 1 ;
			}
		}
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    solve() ;
    while( testcases -- )
    {
    	int n ;
    	cin >> n ;
    	cout << hashh[n] ;
        cout << "\n" ;
    }	
    return 0 ;
}    
