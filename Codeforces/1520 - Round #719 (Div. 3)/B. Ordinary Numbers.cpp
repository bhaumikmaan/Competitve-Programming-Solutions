/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases ;
    cin >> testcases ;
    while( testcases -- )
    {
        int n ;
        cin >> n ;
        if(n < 10)
        {
        	cout << n ;
        }
        else
        {
        	int cnt = 0 , last , num = n , dig = 0;
        	while(num)
        	{
        		if(num/10)
        		{
        			dig++ ;
        			cnt += 9 ;
        			num /= 10 ;
        		}
        		else
        		{
        			dig++ ;
        			last = num%10 ;
        			cnt += last - 1 ; //For numbers less than n with same number of digits
        			int chk = 0 ;
        			while(dig--)
        			{
        				chk = chk*10 + last ;
        			}
        			if(chk <= n)
        			{
        				cnt++ ; 
        			}
        			num /= 10 ;
        		}
        	}
       		cout << cnt ;
        }
        cout << endl ;
    }
    return 0 ;
}    
