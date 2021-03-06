#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int sumofsubset(vector<int> arr,int n,int sum){
    
    vector<vector<int>>t(n+1,vector<int>(sum+1));
    for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
        if(i==0)t[i][j]=0;
        if(j==0)t[i][j]=1;}}
        
for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
        if(arr[i-1]<=j) t[i][j]=(t[i-1][j-arr[i-1]])||(t[i-1][j]);
        else t[i][j]=t[i-1][j];
    }}
    
    return t[n][sum];
}


int main(){
 int n;
 cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];
 int sum=accumulate(arr.begin(),arr.end(),0);
if(sum%2!=0){
 cout<<"cannot exsist";
}
else if(sumofsubset(arr,n,sum/2)){
    cout<<"exsist";
}
else{
    cout<<"cannot exsist";
}
 return 0;
}