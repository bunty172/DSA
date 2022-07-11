#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrimsAlgo(vector<pair<int,int>> al[])
{
    vector<int> key(7,INT_MAX);
    vector<int> parent(7,-1);
    vector<bool> mst(7,false);
    key[1]=0;
    for(int i=0;i<6;i++)
    {
        int mini=INT_MAX,u;
        for(int j=1;j<7;j++)
        {
            if(mst[j]==false && key[j]<mini)
               {
                   mini=key[j];
                   u=j;
               }
               mst[u]=true;
               for(auto ad : al[u])
               {
                   if(ad.second < key[ad.first] && mst[ad.first] == false)
                     {
                         key[ad.first] = ad.second;
                         parent[ad.first] = u;
                     }
               }
        }
    }

    for(int i=2;i<parent.size();i++)
    {
        cout<<i<<"-----"<<parent[i]<<endl;
    }
}

int main()
{

    vector<pair<int,int>> al[]={{},{{2,2},{4,1},{5,4}},{{1,2},{4,3},{3,3},{6,7}},{{2,3},{6,8},{4,5}},{{5,9},{1,1},{2,3},{3,5}},{{1,4},{4,9}},{{3,8},{2,7}}};

    PrimsAlgo(al);
   
    
}