/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1579/problem/B
// Solution Link: https://codeforces.com/contest/1579/submission/130263588

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	vector<int> v(n) , a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i] ;
	}
	a = v ;
	sort(all(a)) ;
	vector<pair<int,pair<int,int>>> ans ;
	int i = 0 ;
	while(i < n)
	{
		if(a[i] == v[i])
		{
			i++ ;
		}
		else
		{
			int j ;
			for(j = i ; j < n ; j++)
			{
				if(a[i] == v[j])
				{
					break ;
				}
			}
			int t = v[i] ;
			v[i] = a[i] ;
			ans.pb({i,{j,(j-i)}}) ;
			for(int p = i + 1 ; p <= j ; p++)
			{
				int x = v[p] ;
				v[p] = t ;
				t = x ;
			}
			i++ ;
		} 
		
	}
	cout << ans.size() << "\n" ;
	for(auto i:ans)
	{
		cout << i.first + 1 << " " << i.second.first + 1 << " " << i.second.second << "\n" ;
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
        // cout << "\n" ;
    }
    return 0 ;
}    
