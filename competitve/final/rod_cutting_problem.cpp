#include<iostream>
#include<vector>
using namespace std;

int main(){
int n,length;cin>>n;cin>>length;
vector<int>val(n),wt(length);
vector<vector<int>>t(n+1,vector<int>(length+1));
for(int i=0;i<n;i++)cin>>val[i];
for(int i=0;i<length;i++)wt[i]=i+1;

for(int i=0;i<n+1;i++)
for(int j=0;j<length+1;j++) if(i==0||j==0)t[i][j]=0;

for(int i=1;i<n+1;i++){
for(int j=1;j<length+1;j++) {
    if(wt[i-1]<=j) t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
    else t[i][j]=t[i-1][j];}}
    
cout<<endl<<t[n][length];    
return 0;
}