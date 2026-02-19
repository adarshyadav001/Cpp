#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{

    vector<vector<int>>vv(10,vector<int>(5,100));
    for(int i=0;i<vv.size();i++)
    {
        for(int j=0;j<vv[i].size();j++)
        {
            cout<<vv[i][j]<<" ";
            cout<<endl;
        }
    }
}