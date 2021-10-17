/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 100010
using namespace std ;
vector<int> a(N) , pre(N) ;
void show(vector<int> v , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout << v[i] << " " ;
	}
	cout << "\n" ;
}
int sol(int x , int n)
{
	if(a[0] >= x)
	{
		return n ;
	}
	int st = 0 , en = n - 1 , save = 0 ;
	while(st <= en)
	{
		int mid = st + (en - st)/2 ;
		if(a[mid] >= x)
		{
			en = mid - 1 ;
		}
		else
		{
			save = mid ;
			st = mid + 1 ;
		}
	}
	int ans = n - 1 - save , newsave = 0 ;
	st = 0 , en = save ;
	while(st <= en)
	{
		int mid = st + (en - st)/2 ;
		int req = (save - mid + 1)*x ;
		int curr = 0 ;
		if(mid == 0)
		{
			curr = pre[en] ;
		}
		else
		{
			curr = pre[save] - pre[mid - 1] ;
		}
		int snaker = req - curr , snakeh = mid ;
		if(snakeh >= snaker)
		{
			newsave = max(newsave , save - mid + 1) ;
			en = mid - 1 ;
		}
		else
		{
			st = mid + 1 ;
		}
	} 
	ans += newsave ;
	return ans ;
}
void solve( )
{
	int n , q ;
	cin >> n >> q ;
	a.resize(n) ;
	pre.resize(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	// show(a , n) ;
	sort(all(a)) ;
	// show(a , n) ;
	pre[0] = a[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		pre[i] = pre[i-1] + a[i] ;
	}
	// cout << pre[0] << " " << pre[1] ;
	// show(pre , n) ;
	while(q--)
	{
		int x ;
		cin >> x ;
		cout << sol(x , n) << "\n" ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases-- )
    {
        solve() ;
        // cout << "\n" ;
    }
    return 0 ;
}
