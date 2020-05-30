#include<iostream>
#include<vector>
using namespace std;

int main(){
int n,sum;
cin>>n>>sum;
vector<int> val(n),wt(n);
//vector<vector<int>>t(n+1,vector<int>(sum+1));
int t[n+1][sum+1];
for(int i=0;i<n;i++)cin>>val[i];
for(int i=0;i<n;i++)cin>>wt[i];
//intilization
for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
        if(i==0 || j==0)t[i][j]=0;
    }}
//logic
for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
        if(wt[i-1]<=j)
            t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
        else
        t[i][j]=t[i-1][j];
    }
}
for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
      cout<<t[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

return 0;
}