/***  KNOWLEDGE IS POWER  ***/

// PROBLEM STATEMENT
// n students attended the first meeting of the Berland SU programming course (n is even). All students will be divided into two groups. Each group will be attending exactly 
// one lesson each week during one of the five working days (Monday, Tuesday, Wednesday, Thursday and Friday), and the days chosen for the groups must be different. 
// Furthermore, both groups should contain the same number of students.
// Each student has filled a survey in which they told which days of the week are convenient for them to attend a lesson, and which are not.
// Your task is to determine if it is possible to choose two different week days to schedule the lessons for the group 
// (the first group will attend the lesson on the first chosen day, the second group will attend the lesson on the second chosen day), 
// and divide the students into two groups, so the groups have equal sizes, and for each student, the chosen lesson day for their group is convenient.

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	vector<vector<int>> v(n , vector<int>(5)) ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < 5 ; j++)
		{
			cin >> v[i][j] ;
		}
	}
	bool flag = false ;
	for(int i = 0 ; i < 5 ; i++)
	{
		for(int j = i + 1 ; j < 5 ; j++)
		{
			int x = 0 , y = 0 ;
			bool c = true ;
			for(int k = 0 ; k < n ; k++)
			{
				if(v[k][i] == 0 && v[k][j] == 0)
				{
					c = false ;
					break ;
				}
				if(v[k][i] == 1 && v[k][j] == 1)
				{
					continue ;
				}
				if(v[k][i] == 1)
				{
					x++ ;
				}
				else
				{
					y++ ;
				}
			}
			if(c && x <= n/2 && y <= n/2)
			{
				flag = true ;
				break ;
			}
		}
	}
	if(flag)
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
