#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{

    // vector<vector<int>>vv(10,vector<int>(5,100));
    // for(int i=0;i<vv.size();i++)
    // {
    //     for(int j=0;j<vv[i].size();j++)
    //     {
    //         cout<<vv[i][j]<<" ";
    //         cout<<endl;
    //     }
    // }
    // pair<int,int>p;
    // p = {10,200};
    // cout<<p.first;
    // cout<<",";
    // cout<<p.second;
vector<pair<int,string>>vp;
vp.push_back({10,"XYZ"});
vp.push_back({20,"PQR"});
vp.push_back({30,"ABC"});
vp.push_back({40,"STU"});
vp.push_back({50,"DEF"});

for (int i=0;i<vp.size();i++)
{
    pair<int,string>p;
    p=vp[i];
    cout<<p.first<<","<<p.second;
    cout<<"\n";
   
}
}