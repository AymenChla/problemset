#include <bits/stdc++.h>

using namespace std;



long long dfs(int i,int nodes[], int visited[])
{
    if(visited[i]) return 0;

    visited[i] = 1;

    return (long long)1+dfs(nodes[i],nodes,visited);

}

int main()
{
    priority_queue<long long , vector<long long> > conn;
    int n;
    cin >> n;
    int nodes[n+1];
    int visited[n+1] = {0};
    int v;
    for(int i=1 ; i <= n ; i++)
    {
        cin >> v;
        nodes[i] = v;
    }


    for(int i =1 ; i <= n ; i++)
    {
        if(!visited[i])
        {
            conn.push(dfs(i,nodes,visited));
        }
    }

    int taille = conn.size();
    if(taille > 1)
    {
        long long max1 = conn.top();
        conn.pop();
        long long max2 = conn.top();
        conn.pop();


        long long s = max1+max2;
        long long rest = 0;
        while(!conn.empty())
        {
            rest += (long long) conn.top()*conn.top();
            conn.pop();
        }
        cout << (long long)s*s + rest<< endl;
    }
    else{
        cout << (long long)n*n << endl;
    }

    return 0;
}
