#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &t)
{
    for(auto i : t)
      cout<<i<<" ";
      if(t.size()==0) cout<<"{}";
      cout<<endl;
}

void subsequence(int i,vector<int> &a,vector<int> &v)
{
    if(i>=3)
    {
        print(v);
        return;
    }
    v.push_back(a[i]);
    subsequence(i+1,a,v);
    v.pop_back();
    subsequence(i+1,a,v);
}
int main()
{

    vector<int> a={3,1,2};
    vector<int> v;
    subsequence(0,a,v);

}