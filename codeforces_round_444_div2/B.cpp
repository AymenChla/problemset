#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int c[n][6];
	set<int> nbrs;	
	for(int i=0 ; i < n ; i++)
	{
		for(int j=0 ; j < 6 ; j++)
		{
			int v;
			cin >> v;
			c[i][j] = v;
			nbrs.insert(v);
		}
	}

	if(n>=2)
	{

		//combinaison of two
		for(int i=0 ; i < 6 ; i++)
		{
			for(int j=0 ; j < 6 ; j++)
			{
				nbrs.insert(c[0][i]*10+c[1][j]);
				nbrs.insert(c[0][i]+c[1][j]*10);
			}
		}
	}
		
	if(n>=3)
	{
	
		//combinaison of two
		for(int i=0 ; i < 6 ; i++)
		{
			for(int j=0 ; j < 6 ; j++)
			{
				nbrs.insert(c[2][i]*10+c[1][j]);
				nbrs.insert(c[2][i]+c[1][j]*10);
				nbrs.insert(c[2][i]*10+c[0][j]);
				nbrs.insert(c[2][i]+c[0][j]*10);
			}
		}

		//combinaison of 3
		for(int i=0 ; i < 6 ; i++)
		{
			for(int j=0 ; j < 6 ; j++)
			{
				for(int k=0 ; k < 6 ; k++)
				{
				nbrs.insert(c[0][i]*100+c[1][j]*10+c[2][k]);
				nbrs.insert(c[0][i]*100+c[1][j]+c[2][k]*10);
				nbrs.insert(c[0][i]*10+c[1][j]*100+c[2][k]);
				nbrs.insert(c[0][i]*10+c[1][j]+c[2][k]*100);
				nbrs.insert(c[0][i]+c[1][j]*100+c[2][k]*10);
				nbrs.insert(c[0][i]+c[1][j]*10+c[2][k]*100);
				}
			}
		}
	}
	

	int prev=0;
	for(auto it:nbrs)
	{
		if(it!=0 && it-prev>1){
			cout << prev << endl;
			return 0;
		}
		prev = it;
	}
	cout << prev << endl;
	
return 0;
}
