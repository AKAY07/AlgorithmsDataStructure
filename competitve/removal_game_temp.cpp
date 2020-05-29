#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++)cin>>a[i];
int x=0,y=n-1,turn=1,player1=0,player2=0;

while(x<=y){
    if(turn==1){
        if(a[x]>=a[y]) player1+=a[x],x++;
        else player1+=a[y],y--;
        turn--;
    }
    else{
        if(a[x]>=a[y]) player2+=a[x],x++;
        else player2+=a[y],y--;
        turn++;
    }
}

cout<<max(player1,player2);
return 0;
}