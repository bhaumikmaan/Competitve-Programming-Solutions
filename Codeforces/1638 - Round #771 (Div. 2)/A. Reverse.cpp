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
#define haan cout << "YES"
void solve()
{
	int n ;
	cin >> n ;
	vi a(n) ;
	bool flag = false ;
	int lpos = 0 , rpos = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		if(flag)
        {
            if(a[i] == lpos + 1)
            {
                rpos = i ;
            }
        }
        else
        {
            if(a[i] != i + 1)
            {
                flag = true ;
                lpos = i ;
            }
        }
	}
	for(int i = 0 ; i < lpos ; i++)
	{
		cout << a[i] << " " ;
	}
	for(int i = rpos ; i >= lpos ; i--)
	{
		cout << a[i] << " " ;
	}
	for(int i = rpos + 1 ; i < n ; i++)
	{
		cout << a[i] << " " ;
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
