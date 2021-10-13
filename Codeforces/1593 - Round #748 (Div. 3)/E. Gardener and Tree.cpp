/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 400010
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ,k ;
        cin >> n >> k ;
        vector<int> edge[n] ;
        vector<int> rank(n , 0) ;
        for(int i = 0 ; i < n - 1 ; i++)
        {
        	int x , y ;
        	cin >> x >> y ;
        	edge[x - 1].pb(y - 1) ;
        	edge[y - 1].pb(x - 1) ;
        	rank[x - 1]++ ;
        	rank[y - 1]++ ;
        }
        // for(int i = 0 ; i < n ; i++)
        // {
        	// rank[i] = edge[i].size() ;
        	// // cout << rank[i] ;
        // }
        queue<int> q ;
        vector<bool> tra(n , false) ;
        for(int i = 0 ; i < n ; i++)
        {
          if(rank[i] == 0 || rank[i] == 1)
          {
            tra[i] = true ;
            q.push(i) ;
          }
        }
        int ans = n ;
        while(k -- && ans > 0)
        {
        	queue<int> copy ;
          while(!q.empty())
          {
            ans-- ;
            int u = q.front() ;
            q.pop() ;
            for(auto &i : edge[u])
            {
              rank[i]-- ;
              if(rank[i] == 1 || rank[i] == 0 && !tra[i])
              {
                          tra[i] = true ;
                          copy.push(i) ;
              }
            }
          }
          q = copy ;
        }
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++)	
        {
        	if(rank[i] >= 0)
        	{
        		cnt++ ;
        	}
        }
        cout << ans ;
        cout << "\n" ;
    }
    return 0 ;
}    
