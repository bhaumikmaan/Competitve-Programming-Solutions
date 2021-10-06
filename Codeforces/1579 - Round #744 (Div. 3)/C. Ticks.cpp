/***	KNOWLEDGE IS POWER	***/

// Problem Link: https://codeforces.com/contest/1579/problem/C
// Solution Link: https://codeforces.com/contest/1579/submission/130264832

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
    int n , m , d ;
    cin >> n >> m >> d ;
    char c[n][m] ;
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = 0 ; j < m ; j++)
    	{
    		cin >> c[i][j] ;
    	}
    }
    vector<vector<int>> RR1(n,vector<int>(m,0)) ;
    vector<vector<int>> RR2(n,vector<int>(m,0)) ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(c[i][j] == '*')
            {
                if(i && j)
                {
                    RR1[i][j] = RR1[i-1][j-1] + 1 ;
                }
                else
                {
                    RR1[i][j]  = 1 ; 
                }
                if(i && j != m-1)
                {
                    RR2[i][j] = RR2[i-1][j+1] + 1 ;
                }
                else
                {
                    RR2[i][j] = 1 ;
                }
            }
            else
            {
                RR1[i][j] = 0 ;
                RR2[i][j] = 0 ;
            }
        }
    }
    vector<vector<int>> RR(n,vector<int>(m,0));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(c[i][j]=='*')
            {
                RR[i][j] = min(RR1[i][j],RR2[i][j]);
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(RR[i][j] <= d)
            {
                RR[i][j] = 0 ;
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    { 
        for(int j = 0 ; j < m ; j++)
        {
            int temp = RR[i][j];
            for(int k = 0 ; k < temp ; k++)
            {
                RR[i-k][j+k] = 1 ;
                RR[i-k][j-k] = 1 ;
            }
        }
    }
    bool flag = true ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if((RR[i][j] == 1 && c[i][j]=='*') || (RR[i][j]==0 && c[i][j]=='.'))
            {
                ;
            }
            else
            {
                flag=false;
            }
        }
    }
    if(flag)
    {
        cout<<"YES" ;
    }
    else
    {
        cout<<"NO" ;
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
