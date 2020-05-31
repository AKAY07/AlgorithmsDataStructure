#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,sum;cin>>n>>sum;
vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i];
vector<vector<int>>t(n+1,vector<int>(sum+1));
for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
        if(i==0) t[i][j]=0;if(j==0)t[i][j]=1;
    }}   


for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
        if(arr[i-1]<=j)t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
        else t[i][j]=t[i-1][j];
    }}      
    
for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){   
        cout<<t[i][j]<<" ";
    }cout<<endl;} 
return 0;    
}