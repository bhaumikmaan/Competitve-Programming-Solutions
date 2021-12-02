/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
int get(vector<int> &sum , int k , int x , int y , int a , int b , int c) 
{
    if (x < y) 
    {
        swap(x , y) ;
        swap(a , b) ;
    }
    a = k / a ;
    b = k / b ;
    c = k / c ;
    a -= c ;
    b -= c ;
    int r = sum[c]/100*(x + y) + (sum[a + c] - sum[c])/100*x + (sum[a + b + c] - sum[a + c])/100*y ; 
    return r ;
}
void solve()
{
	int n ;
	cin >> n ;
	vector<int> ar(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> ar[i] ;
	}
	sort(all(ar) , greater<int>()) ;
	vector<int> sum ;
	sum.pb(0) ;
	for(auto i:ar)
	{
		sum.pb(sum.back() + i) ;
	}
	int x , a , y , b , k ;
	cin >> x >> a >> y >> b >> k ;
	int c = a*b/__gcd(a , b) ;
	int l = 0 , r = n + 1 ;
	while(r - l > 1)
	{
		int m = (l + r)>>1 ;
		if(get(sum , m , x , y , a , b , c) >= k)
		{
			r = m ;
		}
		else
		{
			l = m ;
		}
	}
	if(r == n + 1)
	{
		cout << -1 ;
	}
	else
	{
		cout << r ;
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
