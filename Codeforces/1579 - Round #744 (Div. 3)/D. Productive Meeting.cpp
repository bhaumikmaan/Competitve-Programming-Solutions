/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1579/problem/D
// Solution Link: https://codeforces.com/contest/1579/submission/130265767

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.rbegin(),v.rend()
#define mod 1000000007
#define inf 1e16
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int a[n] ;
	priority_queue<pair<int,int>> pq ;
	vector<pair<int,int>> ans ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		if(a[i])
		{
			pq.push({a[i] , i + 1}) ;
		}
	}
	while(pq.size() >= 2)
	{
      pair<int,int> q1 = pq.top() ;
    	pq.pop() ;
    	pair<int,int> q2 = pq.top() ;
    	pq.pop() ;
    	ans.pb({q1.second , q2.second}) ;
    	if(q1.first - 1)
    	{
    		pq.push({q1.first - 1 , q1.second}) ;
    	}
    	if(q2.first - 1)
    	{
    		pq.push({q2.first - 1 , q2.second}) ;
    	}
	}
	cout << ans.size()<< "\n" ;
	for(auto i:ans)
	{
		cout << i.first << " " << i.second << "\n" ;
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
