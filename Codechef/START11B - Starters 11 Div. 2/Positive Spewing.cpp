/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://www.codechef.com/START11B/problems/POSSPEW
// Solution Link: https://www.codechef.com/viewsolution/51099944

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
    cin >> testcases ;
    while( testcases -- )
    {
        int n , k ;
        cin >> n >> k ;
        vector<int> v(n) ;
        queue<int> q ;
        vector<int> dist(n,inf) ;
        vector<int> vis(n,false) ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i] ;
            if(v[i])
            {
                q.push(i) ;
                dist[i]=0 ; 
                vis[i]=true ;
            }
        }
        while(q.size())
        {
            int curr = q.front();
            q.pop() ;
            int l=(curr-1+n)%n ;
            int r=(curr+1)%n ;
            if(!vis[l])
            {
                dist[l]=dist[curr]+1;
                vis[l]=true;
                q.push(l);
            }
            if(!vis[r])
            {
                dist[r]=dist[curr]+1;
                vis[r]=true;
                q.push(r);
            }
        }
        int ans = 0 ;
        for(int i=0;i<n;i++)
        {
            ans+=v[i];
            int diff=k-dist[i];
            if(diff>0)
                ans+=2*diff;
        }
        cout << ans ; 
        cout << "\n";
    }
    return 0 ;
}    
