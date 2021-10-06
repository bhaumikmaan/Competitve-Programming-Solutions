/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://atcoder.jp/contests/abc215/tasks/abc213_c
// Solution Link: https://atcoder.jp/contests/abc213/submissions/24874590

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
        int h , w , n ;
	    cin >> h >> w >> n ;
	    vector<pair<int,int>> v1(n) ,v2(n) ;
	    for(int i = 0 ; i < n ; i++)
	    {
	        int x , y ;
	        cin >> x >> y ;
	        v1[i]={x,i} ;
	        v2[i]={y,i} ;
	    } 
	    sort(all(v1)) ;
	    sort(all(v2)) ;
	    vector<pair<int,int>> ans(n) ;
	    int curr=1;
	    for(int i=0;i<n;i++)
	    {
	        if(i and v1[i].first!=v1[i-1].first)
	        {
	            curr++;
	        }
	        ans[v1[i].second].first=curr;
	    }
	    curr=1;
	    for(int i=0;i<n;i++)
	    {
	        if(i and v2[i].first!=v2[i-1].first)
	        {
	            curr++;
	        }
	        ans[v2[i].second].second=curr;
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
	    }
    }
    return 0 ;
}    
