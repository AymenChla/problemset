#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int i=0;
	for(; i < s.length() && s[i]!='1' ;i++);
	int cmp=0;
	for(; i < s.length() ; i++) if(s[i] == '0') cmp++;

	if(cmp>=6) cout << "yes" << endl;
	else cout << "no" << endl;
 
return 0;
}
