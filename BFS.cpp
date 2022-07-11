#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bfs(int i,vector<int>al[5],vector<int> &visited)
{
    queue<int> q;
    q.push(i);
    while(!q.empty())
    {
        int vertex=q.front();
        q.pop(); 
        cout<<vertex;
        visited[vertex]=1;
        for(int k=0;k<al[vertex].size();k++)
        {
            int ad=al[vertex][k];
            if(!visited[ad])
            {
                visited[ad]=1;
                q.push(ad);
            }
        }
    }
}
int main()
{
    vector<int> al[5]={{1,2,3},{0,2},{0,1,4},{0},{2}};
    vector<int> visited(5,0);
    for(int i=0;i<=4;i++)
    {
        if(!visited[i])
          bfs(i,al,visited);
    }
}