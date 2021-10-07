/***	KNOWLEDGE IS POWER	***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
#define N 1000010
vector<int> v(N , 1) ;
vector<int> ar(N) ;
int a , b , k ;
bool check(int x)
{
	for(int i = a ; i + x - 1 <= b ; i++)
	{
		if(ar[i+x-1] - ar[i-1] < k)
		{
			return false ;
		}
	}
	return true ;
}
void solve( )
{
	// int a , b , k ;
	cin >> a >> b >> k ;
	v[0] = 0 , v[1] = 0 ;
	for(int i = 2 ; i*i <= b ; i++)
	{
		if(v[i])
		{
			for(int j = i*i ; j <= b ; j+=i)
			{	
				v[j] = 0 ;
			}
		}
	}
	for(int i = 1 ; i <= b ; i++)
	{
		ar[i] = ar[i-1] + v[i] ;
	}
	int s = 1 , e = b - a + 1 ;
	while(s < e)
	{
		int m = s + (e-s)/2 ;
		if(check(m))
		{
			e = m ;
		}
		else
		{
			s = m + 1 ;
		}
	}
	if(!check(s))
	{
		cout << -1 ;
	}
	else
	{
		cout << s ;
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
