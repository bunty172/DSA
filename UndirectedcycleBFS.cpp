#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkundirectedcycleBFS(int i,vector<int> &visited,vector<int> al[])
{
        queue<pair<int,int>> q;
        visited[i]=1;
        q.push({i,-1});
        while(!q.empty())
        {
            int node=q.front().first;
           int parent=q.front().second;
            q.pop();
            for(auto ad : al[node])
            {
                if(!visited[ad]) 
                {
                     visited[ad]=1;
                     q.push({ad,node});R
                }
                else if(ad!=parent)
                  return true;
            }
           

        }
 return false;
}

int main()
{
   vector<int> al[9]={{},{4,3},{5},{1},{1},{8,2},{7},{8,6},{5,7}};
   vector<int> visited(10,0);
   for(int i=1;i<10;i++)
   {
       if(!visited[i])
          if(checkundirectedcycleBFS(i,visited,al) && cout<<"true");
             break;
   }
    
    
}