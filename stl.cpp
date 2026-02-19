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
    //     }d 
    // }
    // pair<int,int>p;
    // p = {10,200};
    // cout<<p.first;
    // cout<<",";
    // cout<<p.second;
// vector<pair<int,string>>vp;
// vp.push_back({10,"XYZ"});
// vp.push_back({20,"PQR"});
// vp.push_back({30,"ABC"});
// vp.push_back({40,"STU"});
// vp.push_back({50,"DEF"});

// for (int i=0;i<vp.size();i++)
// {
//     pair<int,string>p;
//     p=vp[i];
//     cout<<p.first<<","<<p.second;
//     cout<<"\n";
   
// }


queue<pair<int,int>>Q;
Q.push({1,2});
Q.push({3,4});
Q.push({5,6});
Q.push({7,8});
Q.push({9,10});
Q.push({11,12});
Q.push({13,14});

while(!Q.empty())
{
    pair<int,int>p;
    p=Q.front();
    cout<<p.first<<" "<<p.second<<endl;
    Q.pop();

}
}