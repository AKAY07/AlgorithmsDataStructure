#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
int n,diff;cin>>n>>diff;
vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i];
int sum=accumulate(arr.begin(),arr.end(),0);
int s1=(diff+sum)/2;;
vector<vector<int>>t(n+1,vector<int>(sum+1));
for(int i=0;i<n+1;i++){
for(int j=0;j<s1+1;j++){
        if(i==0)t[i][j]=0;
        if(j==0)t[i][j]=1;}}
for(int i=1;i<n+1;i++){
for(int j=1;j<s1+1;j++){
 if(arr[i-1]<=j)t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
 else t[i][j]=t[i-1][j];}}
 
 cout<<t[n][s1];
return 0;
}