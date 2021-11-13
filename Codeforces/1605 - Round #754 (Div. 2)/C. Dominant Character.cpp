/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100110
using namespace std ;
vector<pair<int , string>> ss = {{2,"aa"},{3,"aca"},{3,"aba"},{4,"abca"},{4,"acba"},{7,"abbacca"},{7,"accabba"}} ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
  for(auto i:ss)
  {
    if(s.find(i.second) != string::npos)
    {
      cout << i.first ;
      return ;
    }
  }
  cout << -1 ;
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
