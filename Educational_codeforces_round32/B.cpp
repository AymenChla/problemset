#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char tab[n];
	for(int i=0 ; i < n ;i++)
		cin >> tab[i];
	
	int ans=0;
	char search;
	for(int i=0; i < n;i++)
	{
		if(tab[i] != 'N')
		{
			switch(tab[i])
			{
				case 'L': search = 'R'; break;
				case 'R': search = 'L'; break;
				case 'D': search = 'U'; break;
				case 'U': search = 'D'; break;
			}
			for(int j=0; j < n ; j++)
			{
				if(tab[j] == search){
					ans+=2;
					tab[j] = 'N';
					tab[i] = 'N';
					break;
				}
			}

		}
				
	
	}	

	cout << ans << endl;

return 0;
}
