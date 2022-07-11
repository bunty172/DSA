#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ShortestpathundirectedvariableweightDijksatras(int src,vector<pair<int,int>> al[],vector<int> &d)
{
    queue<int> q;
    q.push(src);
    d[src]=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto ad  : al[node])
        {
           if(d[node]+ad.second <= d[ad.first])
           {
               d[ad.first]=d[node]+ad.second;
               q.push(ad.first);
           }
              
        }
    }
}


int main()
{
    // vector<pair<int,int>> al[]={{{}},{{2,2},{4,1}},{{1,2},{3,4},{5,1}},{{2,4},{4,3},{5,1}},{{1,1},{3,3}},{{2,1},{3,1}}}; 
    vector<pair<int,int>> al[] = {{{1,2}},  {{2,3}}   ,{{4,2},{3,6}},   {{5,1}}  ,{{5,4},{0,1}},  {}};                //DAG
    vector<int> d(6,INT_MAX);

    int src=2;
    ShortestpathundirectedvariableweightDijksatras(src,al,d);

    for(auto i : d)
      cout<<i<<endl;

}