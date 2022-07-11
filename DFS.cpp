#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<int> al[],vector<int> &visited)
{
    cout<<i;
    visited[i]=1;
    for(auto ad : al[i])
    {
        if(!visited[ad]) 
            dfs(ad,al,visited);
    }
}
int main()
{
    vector<int> al[9]={{},{2,3},{1,4,5},{1,6,7},{2,8},{2,8},{3,8},{3,8},{4,5,6,7}};
    vector<int> visited(9,0);
    dfs(1,al,visited);
}