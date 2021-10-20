/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000010
using namespace std ;
int prime[N+5];
void sieve()
{
    prime[0]=0;prime[1]=0;
	for(int i=2;i<=N;i++)
	{
		prime[i]=1;
	}
	for(int i=4;i<=N;i+=2)
	{
		prime[i]=0;
	}
	for(int i=3;i<N;i+=2)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=N;j+=i)
			{
				prime[j]=0;
			}
		}
	}

}
vector<int> cnt(N+5,0);
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    sieve();
    for(int i = 0 ; i < N ; i++)
    {
    	cnt[i] = cnt[i-1] + prime[i] ;
    }
    while( testcases -- )
    {
    	int x , y ;
		cin >> x >> y ;
		int a = y - x ;
		int b = cnt[y] - cnt[x + 1] ;
		cout << a - b ;
        cout << "\n" ;
    }
    return 0 ;
}    
