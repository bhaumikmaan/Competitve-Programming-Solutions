/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 300010
using namespace std ;
int n , m ;
int a[N];
bool check(int mid)
{
	int curr = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] + mid < m)
		{
			if(a[i] + mid < curr)
			{
				return false ;
			}
			else
			{
				curr = max(curr , a[i]) ;
			}
		}
		else
		{
			if(a[i] + mid < curr + m)
			{
				curr = max(curr , a[i]) ;
			}
		}
	}
	return true ;
}
void solve( )
{
	cin >> n >> m ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	int st = 0 , en = m ;
	while(st < en)
	{
		int mid = st + (en - st)/2 ;
		if(check(mid))
		{
			en = mid ;
		}
		else
		{
			st = mid + 1 ;
		}
	}
	cout << en ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases-- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}
