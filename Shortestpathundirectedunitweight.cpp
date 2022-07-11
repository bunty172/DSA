#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Shortestpathundirectedunitweight(int src,vector<int> al[],vector<int> &d)
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
            if(d[node]+1 <= d[ad])
            {
                d[ad] = d[node]+1;
                q.push(ad);
            }
               
        }
    }
}


int main()
{
    vector<int> al[]={{1,3},{0,2},{1,6},{0,4},{3,5},{4,6},{2,5,7,8},{6,8},{6,7}};
    vector<int> d(9,INT_MAX);

int src=1;
    Shortestpathundirectedunitweight(src,al,d);

    for(auto i : d)
      cout<<i<<endl;

}