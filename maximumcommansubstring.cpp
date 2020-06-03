#include<iostream>
#include<string>
#include<climits>
#include<vector>
using namespace std;
int main(){
string s1,s2;cin>>s1>>s2;
int l1=s1.length(),l2=s2.length();
int result=INT_MIN;
vector<vector<int>>t(l1+1,vector<int>(l2+1));
for(int i=0;i<l1+1;i++){
for(int j=0;j<l2+1;j++)if(i==0||j==0)t[i][j]=0;}

for(int i=1;i<l1+1;i++){
for(int j=1;j<l2+1;j++){
 if(s1[i-1]==s2[j-1]) t[i][j]=1+t[i-1][j-1],result=max(result,t[i][j]);
 else t[i][j]=0;
}
}
cout<<endl<<result;
return 0;
}
