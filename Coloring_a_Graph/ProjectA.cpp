#include <bits/stdc++.h>

using namespace std;

int graphColoring(vector<vector<int>> v, int n)
{

	int available[n];
	int colors[n+1];
	memset(available,0,sizeof(available));
	//memset(colors,-1,sizeof(colors));
	for(int i=1 ; i <= n; i++)
	{
		colors[i] = -1;
	}

	colors[1] = 0;
	int chromaticNumber = 1;
	
	for(int i=2 ; i <= n ; i++)
	{
		
		
		for(int j=0 ; j < v[i].size() ; j++)
		{
			if(colors[v[i][j]] != -1)
			{
				available[colors[v[i][j]]] = true;
			}
		}
		
		int j=0;
		for(; j < n && available[j] ; j++);
		colors[i] = j;
		
		chromaticNumber = max(j+1,chromaticNumber);
		
		//memset(available,0,sizeof(available));
		for(int j=0 ; j < n ; j++)
			available[j] = false;
	}
	
    	return chromaticNumber;
}

int main()
{
 	int t;
	cin >> t;
		
	while(t--)
	{
		int n,m; cin >> n >> m;
		vector<vector<int>> v(n+1);
		
		for(int i = 0 ; i < m ; i++)
		{
			int a,b;
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}		
		
		cout << graphColoring(v,n) << endl;
	}
}
