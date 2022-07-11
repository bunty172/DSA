#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TopologicalsortDFS(int i,vector<int>& visited,vector<int> al[],stack<int>& s)
{
            visited[i]=1;

                for(auto ad : al[i])
                {
                    if(!visited[ad])
                    {
                        TopologicalsortDFS(ad,visited,al,s);
                    }
                }
                s.push(i);
            
}

int main()
{
   vector<int> al[6]={{},{},{3},{1},{0,1},{0,2}};
   vector<int> visited(6,0);
   stack<int> s;
   for(int i=0;i<10;i++)
   {
       if(!visited[i])
          TopologicalsortDFS(i,visited,al,s);
   }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}