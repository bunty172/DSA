#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &t)
{ 
        for(auto i : t)
        {
            for(auto j : i)
            cout<<j<<" ";
            cout<<endl;
        }
}

void find(int i,int sum,int target,vector<int> &candidates,set<vector<int>> &ans,vector<vector<int>> & vans,vector<int> &ds)
    {
              if(i>=candidates.size())
              {
                  if(sum==target)
                  {
                      vans.push_back(ds);
                      sort(ds.begin(),ds.end());
                      ans.insert(ds);
                  }
                      return;
              }
        ds.push_back(candidates[i]);
        sum+=candidates[i];
        find(i+1,sum,target,candidates,ans,vans,ds);
        ds.pop_back();
        sum-=candidates[i];
        find(i+1,sum,target,candidates,ans,vans,ds);
    }

    
int main()
{
        set<vector<int>> ans;
        vector<int> ds;
        int sum=0;
        int target=5;
        vector<vector<int>> vans;
        vector<int> candidates={2,5,2,1,2};
        find(0,sum,target,candidates,ans,vans,ds);
        auto it=ans.begin();
        vector<vector<int>> fans;
        while(it != ans.end())
        {
            fans.push_back((*it));
            it++;
        }
        print(vans);

}