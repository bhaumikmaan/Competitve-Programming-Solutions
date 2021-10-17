/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
void solve( )
{
	int n ;
	cin >> n ;
	int a[n] ;
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		sum += a[i] ;
	}
	if(!isPrime(sum))
	{
		cout << n << "\n" ;
		for(int i = 0 ; i < n ; i++)
		{
			cout << i + 1  << " ";
		}
	}
	else
	{
		bool flag = false ;
		cout << n - 1 << "\n" ;
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i]&1 && !flag)
			{
				flag = true ;
				continue ;
			}
			cout << i + 1 << " " ;
		}
	}
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
