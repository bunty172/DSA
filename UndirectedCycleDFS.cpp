#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool detectcycledfs (int i,int parent ,vector<int> al[],vector<int> visited)
{
    visited[i]=1;
    for(auto ad : al[i])
    {
        if(!visited[ad])
        {
            if(detectcycledfs(ad,i,al,visited) ) return true;
        }
        else if(ad!=parent)
            return true;
    }
    return false;
}
int main()
{
    vector<int> al[9]={{},{4,3},{5},{1},{1},{8,2},{7},{8,6},{5,7}};
    vector<int> visited(9,0);
    for(int i=0;i<9;i++)
    {
        if(!visited[i])
           if(detectcycledfs(i,-1,al,visited))
           {
               cout<<"true"; 
               break;
           }
    }

    
}