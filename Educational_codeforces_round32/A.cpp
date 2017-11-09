#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int tab[n];
	for(int i=0 ; i < n ;i++)
		cin >> tab[i];
	
	int ans=0;
	for(int i=1 ; i < n-1 ;i++)
	{
		if(tab[i]<tab[i-1] && tab[i]<tab[i+1])
			ans++;
		if(tab[i]>tab[i-1] && tab[i]>tab[i+1])
			ans++;
	}	

	cout << ans << endl;

return 0;
}
