#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gsum=5;
void print(vector<int> &t,int sum)
{
    if
    (sum==gsum)
    {
        for(auto i : t)
      cout<<i<<" ";
      cout<<endl;
    }
}

void subsequence(int i,vector<int> &a,vector<int> &v,int sum)
{
    if(i>=5)
    {
        print(v,sum);
        return;
    }
    v.push_back(a[i]);
    sum+=a[i];
    subsequence(i+1,a,v,sum);
    v.pop_back();
    sum-=a[i];
    subsequence(i+1,a,v,sum);
}
int main()
{
    vector<int> a={2,5,2,1,2};
    vector<int> v;
    int sum=0;
    // subsequence(0,a,v,sum);
    set<vector<int>> s;
    s.insert({1,2});
    s.insert({1,2});
    s.insert({1,22});
    s.insert({2,11});
    cout<<s.size();

}