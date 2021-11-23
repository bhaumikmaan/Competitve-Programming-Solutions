/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 601000
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	int ar[n + 1] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> ar[i] ;
	}
	int l = 1 , r = n ; 
	int a = 0 , b = 0 , pre = 0 , move = 0 ;
	bool flag = true ;
	while(l <= r)
	{
		move++ ;
		if(flag)
		{
			int curr = 0 ;
			while(curr <= pre && l <= r)
			{
				curr += ar[l] ;
				a += ar[l] ;
				l++ ;
			}
			pre = curr ;
			flag = false ;
		}
		else
		{
			int curr = 0 ;
			while(curr <= pre && l <= r)
			{
				curr += ar[r] ;
				b += ar[r] ;
				r-- ;
			}
			pre = curr ;
			flag = true ;
		}
	}
	cout << move << " " << a << " " << b ;
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
