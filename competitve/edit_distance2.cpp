#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int minimum(int a,int b,int c){
    if(a<=b&&a<=c)return a;
    else if(b<=a&&b<=c)return b;
    else return c;
}

int main(){
    string a,b;
    cin>>b>>a;
    int temp[a.size()+1][b.size()+1];
    int row=b.size()+1;
    int col=a.size()+1;
    
    for(int i=0; i < row; i++) temp[0][i] = i;
    for(int i=0; i < col; i++) temp[i][0] = i;

    for(int i=1;i<=a.size(); i++){
    for(int j=1; j<= b.size(); j++){
        if(b[i-1] == a[j-1])
        temp[i][j] = temp[i-1][j-1];
        else
        temp[i][j] = 1+minimum(temp[i-1][j-1], temp[i-1][j], temp[i][j-1]);
    }
        }
        cout<<temp[col-1][row-1];
     
    
    return 0;
}