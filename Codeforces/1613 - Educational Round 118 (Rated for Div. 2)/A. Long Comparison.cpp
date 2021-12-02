/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000007
using namespace std ;
void solve()
{
	int x1 , p1 , x2 , p2 ;
	cin >> x1 >> p1 >> x2 >> p2 ;
	string s1 = to_string(x1) ;
    string s2 = to_string(x2);
    if(p1 == p2)
    {
    	int sz1 = s1.length() , sz2 = s2.length() ;
	    if(sz1 == sz2)
	    {
	        for(int i = 0 ; i < sz1 ; i++)
	        {
	            if(s1[i] > s2[i])
	            {
	            	cout << ">" ;
	            	return ;
	            }
	            else
	            {
	                if(s1[i] < s2[i])
	                {
	                	cout << "<" ;
	                    return ;
	                }
	            }
	        }
	    }
	    else
	    {
	        if(sz1 > sz2)
	        {
	        	cout << ">" ;
	            return ;
	        }
	        else
	        {
	        	cout << "<" ;
	            return ;
	        }
	    }
	    cout << "=" ;
    }
    else
    {
    	if(p1 > p2)
    	{
    		while(p1 > p2)
            {
                s1 += "0" ;
                p1-- ;
            }
    	}
    	else
    	{
    		while(p2 > p1)
            {
                s2 += "0" ;
                p2-- ;
            }    		
    	}
    	int sz1 = s1.length() , sz2 = s2.length() ;
    	if(sz1 == sz2)
	    {
	        for(int i = 0 ; i < sz1 ; i++)
	        {
	            if(s1[i] > s2[i])
	            {
	            	cout << ">" ;
	            	return ;
	            }
	            else
	            {
	                if(s1[i] < s2[i])
	                {
	                	cout << "<" ;
	                    return ;
	                }
	            }
	        }
	    }
	    else
	    {
	        if(sz1 > sz2)
	        {
	        	cout << ">" ;
	            return ;
	        }
	        else
	        {
	        	cout << "<" ;
	            return ;
	        }
	    }
	    cout << "=" ;
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
