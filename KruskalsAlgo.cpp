#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int u;
    int v;
    int wt;
    node(int first,int second,int weight)
    {
        u=first;
        v=second;
        wt=weight;
    }
};

bool comp(node a ,  node b)
{
    return a.wt < b.wt;
}

int findpar(int u , vector<int> &parent)
{
    if(u==parent[u]) return u;

   return parent[u] = findpar(parent[u],parent); 
}

void uunion(int u , int v, vector<int> &parent , vector<int> &rank)
{
     u = findpar(u, parent);
     v = findpar(v, parent);
    if(rank[u] < rank[v]) {
    	parent[u] = v;
    }
    else if(rank[v] < rank[u]) {
    	parent[v] = u; 
    }
    else {
    	parent[v] = u;
    	rank[u]++; 
    }
}


void KruskalsAlgo(vector<node> &edges,vector<int> &parent , vector<int> &rank)
{
    vector<pair<int,int>> mst;
    
    for(int i=1;i<7;i++)
    {
       
        if(findpar(edges[i].u,parent) != findpar(edges[i].v , parent))
        {
                mst.push_back({edges[i].u,edges[i].v});

                uunion(edges[i].u,edges[i].v,parent,rank);
        }
    }


    for(auto it : mst)
       cout<<it.first<<"---"<<it.second<<endl;
}

int main()
{

    vector<node> edges;
    edges.push_back(node(5,4,9));
    edges.push_back(node(5,1,4));
    edges.push_back(node(1,4,1));
    edges.push_back(node(1,2,2));
    edges.push_back(node(4,3,5));
    edges.push_back(node(4,2,3));
    edges.push_back(node(3,2,3));
    edges.push_back(node(3,6,8));
    edges.push_back(node(2,6,7));
    
    sort(edges.begin(),edges.end(),comp);
    
    vector<int> parent(7);
    vector<int> rank(7,0);
    for(int i=0;i<7;i++)
       parent[i]=i;

    
    KruskalsAlgo(edges,parent,rank);
}