/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200005
using namespace std ;
bool ispal(string s)
{
	string r = s ;
	reverse(all(r)) ;
	return s == r ;
}
void solve()
{
	string s ;
	cin >> s ;
	int n = s.length() ;
	for(int i = 0 ; i <= n ; i++)
	{
		for(char c = 'a' ; c <= 'z' ; c++)
		{
			string temp ;
			for(int j = 0 ; j < i ; j++)
			{
				temp += s[j] ;
			}
			temp += c ;
			for(int j = i ; j < n ; j++)
			{
				temp += s[j] ;
			}
			if(ispal(temp))
			{
				cout << temp ;
				return ;
			}
		}
	}
	cout << "NA" ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
