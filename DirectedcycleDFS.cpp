#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkcycledirectedDFS(int i,vector<int>&visited,vector<int>&currentvisited,vector<int> al[])
{
    visited[i]=currentvisited[i]=1;
    for(auto ad : al[i])
    {
        if(!visited[ad])
        {
            if(checkcycledirectedDFS(ad,visited,currentvisited,al)) 
                   return true;
        }
        else if(currentvisited[ad]) 
             return true;
    }
    currentvisited[i]=0;
    return false;
}

int main()
{
    vector<int> al[10]={{},{2},{3},{4,6},{5},{6,3},{},{2,8},{},{7}};
    vector<int> visited(10,0);
    vector<int> currentvisited(10,0);
    for(int i=1;i<11;i++)
    {
        if(!visited[i])
         if (checkcycledirectedDFS(i,visited,currentvisited,al) && cout<<"true")
              break;
    }
    
}