#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x;

    cin >> n >> x;

    long long somme = 0;
    for(int i=0 ; i < n ; i++)
    {
        int v; cin >> v;
        somme  += v;
    }

    if(x - somme == n - 1)  cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
