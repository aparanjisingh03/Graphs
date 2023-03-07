#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,e;
	cin>>n>>e;
	//using matrix
	int matrix[n+1][n+1];
    int u,v;
    for(int i=0;i<e;i++)
    {
    	cin>>u>>v;
    	matrix[u][v]=1;
    	matrix[v][u]=1
    }
    //using adjacency list
    vector<int>adj[n+1]
    int u,v;
    for(int i=0;i<e;i++)
    {
    	cin>>u>>v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);

    }
}