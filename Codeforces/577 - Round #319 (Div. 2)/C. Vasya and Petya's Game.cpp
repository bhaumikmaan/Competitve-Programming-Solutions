/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
int a[N] , s[N] ;
void solve()
{
	int n ;
	cin >> n ;
	int curr = 0 ;
	for(int i = 2 ; i <= n ; i++)
	{
		if(!a[i])
		{
			bool flag = false ;
			for(int j = 2 ; j < i ; j++)
			{
				if(!(i%j))
				{
					flag = true ;
				}
			}
			if(!flag)
			{
				int j = i ;
				while(j <= n)
				{
					a[j] = 1 ;
					curr++ ;
					s[curr] = j ;
					j *= i ;
				}
			}
		}
	}
	cout << curr << "\n" ;
	for(int i = 1 ; i < curr ; i++)
	{
		cout << s[i] << " " ;
	}
	if(curr)
	{
		cout << s[curr] ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
