#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    int cmp=0;
    int v;
    int i=0;
    for( ; i < n ; i++)
    {
        cin >> v;
        cmp += 86400 - v;

        if(cmp>=t) break;
    }

    cout << i  + 1 << endl;

    return 0;
}
