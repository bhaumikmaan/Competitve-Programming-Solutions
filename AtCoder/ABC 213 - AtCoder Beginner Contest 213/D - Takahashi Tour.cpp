/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://atcoder.jp/contests/abc215/tasks/abc213_d
// Solution Link: https://atcoder.jp/contests/abc213/submissions/24873198

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
#define N 500005
set<int> graph[N];
vector<int> visited(N,false);
vector<int> level(N,-1);
vector<int> parent(N,-1);

void dfs(int node)
{
    cout<<node+1<<" ";
    visited[node]=true;
    for(auto x:graph[node])
    {
        if(!visited[x])
        {
            level[x]=level[x]+1;
            parent[x]=node;
            dfs(x);
            cout<<node+1<<" ";
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
    	int n ;
    	cin >> n ;
    	int u , v ;
    	for(int i = 0 ; i < n - 1 ; i++)
    	{
    		cin >> u >> v ;
    		u-- ;
    		v-- ;
    		graph[u].insert(v);
	        graph[v].insert(u);
	    }
	    dfs(0) ; 
      cout << "\n" ;
    }
    return 0 ;
}    
