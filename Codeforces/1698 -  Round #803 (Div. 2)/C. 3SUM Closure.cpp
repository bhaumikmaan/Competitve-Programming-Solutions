/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
typedef vector<pair<int,int>> vpi ;
#define haan cout << "YES"
void solve()
{
	int n ;
	cin >> n ;
	vi a(n) ;
	int cnt = 0 ;
	for(auto &i:a)
	{
		cin >> i ;
		if(!i)
		{
			cnt++ ;
		}
	}
	int sum = accumulate(all(a) , 0) ;
	if(n < 5)
	{
		bool flag = true ;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = i + 1 ; j < n ; j++)
			{
				for(int k = j + 1 ; k < n ; k++)
				{
					int curr = a[i] + a[j] + a[k] ;
					bool currr = false ;
					for(int x = 0 ; x < n ; x++)
					{
						if(curr == a[x])
						{
							currr = true ;
							break ;
						}
					}
					if(!currr)
					{
						flag = false ;
					}
				}
			}
		}
		if(flag)
		{
			haan ;
		}
		else
		{
			cout << "NO" ;
		}
	}
	else
	{
		if((cnt >= n - 1) || (cnt == n - 2 && !sum))
		{
			haan ;
		}
		else
		{
			cout << "NO" ;
		}
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
