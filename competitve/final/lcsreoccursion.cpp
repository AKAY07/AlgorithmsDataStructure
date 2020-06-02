#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
 string s1;string s2;
 cin>>s1>>s2;
 int length1=s1.length(),length2=s2.length();
 vector<vector<int>> t(length1+1,vector<int>(length2+1));
 
 
 for(int i=0;i<length1+1;i++){
     for(int j=0;j<length2+1;j++)if(i==0||j==0)t[i][j]=0;
 }
 
  for(int i=1;i<length1+1;i++){
     for(int j=1;j<length2+1;j++){
         if(s1[i-1]==s2[j-1]) t[i][j]=1+t[i-1][j-1];
         else t[i][j]=max(t[i-1][j],t[i][j-1]);
     }
 }
 
  for(int i=0;i<length1+1;i++){
     for(int j=0;j<length2+1;j++)cout << t[i][j] <<" ";
     cout<<endl;
 }

 return 0;
 }