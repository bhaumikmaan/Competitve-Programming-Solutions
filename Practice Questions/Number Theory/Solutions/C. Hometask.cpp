/***	KNOWLEDGE IS POWER	***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
bool checkprime(int n)
{
	for(int i = 2 ; i < n ; i++)
	{
		if(n%i == 0)
		{
			return false ;
		}
	}
	return true ;
}
bool check(int n)
{
	int cnt = 0 ;
	for(int i = 2 ; i*i < n ; i++)
	{
		if(n%i == 0 && i != n)
		{
			cnt++ ;
		}
	}
	if(cnt)
	{
		return true ;
	}
	return false ;
}
bool abchalja(int n)
{
	if(n == 2 || n == 3)
	{
		return true ;
	}
	if(n%2 == 0)
	{
		return false ;
	}
	int sq = sqrt(n) + 1 ;
	for(int i = 3 ; i < sq ; i+=2)
	{
		if(n%i == 0)
		{
			return false ;
		}
	}
	return true ;
}
void solve( )
{
	int n ;
	cin >> n ;
	if(n == 1)
	{
		cout << "YES" ;
	}
	else if(n == 4)
	{
		cout << "NO" ;
	}
	else
	{
		if(abchalja(n))
		{
			cout << "NO" ;
		}
		else
		{
			cout << "YES" ;
		}
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
