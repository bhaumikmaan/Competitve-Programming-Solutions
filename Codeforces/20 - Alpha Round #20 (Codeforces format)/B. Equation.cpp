/***  KNOWLEDGE IS POWER  ***/
#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 110000
using namespace std ;
void solve( )
{
	double a , b , c ;
	cin >> a >> b >> c ;
	if(a < 0)
	{
		a = -a , b = -b , c = -c ;
	}
	if(a == 0 && b == 0)
	{
		if(c)
		{
			cout << 0 ;
		}
		else
		{
			cout << -1 ;
		}
		return ;
	}
	if(a == 0)
	{
		cout << "1\n" ;
		cout << fixed << setprecision(10) << (-c)/b ;
		return ;
	}
	int d = b*b - 4*a*c ;
	if(d < 0)
	{
		cout << 0 ;
	}
	else if(d == 0)
	{
		cout << "1\n" ; 
		cout << fixed << setprecision(10) << (-b)/(2*a) ;
	}
	else
	{
		cout << "2\n" ;
		cout << fixed << setprecision(10) << ((-b - sqrt(d))/(2*a)) << "\n" << ((-b + sqrt(d))/(2*a));
	}
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
