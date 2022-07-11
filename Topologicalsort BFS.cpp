#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TopologicalsortDFS(vector<int>& visited,vector<int> al[])
{
    vector<int> indegree(6,0);
           for(int i=0;i<6;i++)
           {
               for(auto ad : al[i])
                 indegree[ad]++;
           }
           queue<int> q;
           for(int i=0;i<indegree.size();i++)
           {
               if(indegree[i]==0) q.push(i);
           }
           vector<int> topo;
           while(!q.empty())
           {
               int node=q.front();
               topo.push_back(node);
               q.pop();
               for(auto ad : al[node])
               {
                   indegree[ad]--;
                   if(indegree[ad]==0)
                     q.push(ad);
               }
           }

           for(auto i : topo)
             cout<<i<<" ";
            
}

int main()
{
   vector<int> al[6]={{},{},{3},{1},{0,1},{0,2}};
   vector<int> visited(6,0);
   stack<int> s;
  
   TopologicalsortDFS(visited,al);
   
   
    
}