#include<iostream>
#include<string>
using namespace std;

bool isScramble(string s1,string s2){
if(s1.compare(s2)==0)return true;
if(s1.length()==1)return false ;
int n=s1.length();
for(int i=1;i<n;i++){
    string s11 = s1.substr(0,i);
            string s21 = s2.substr(0,i);
            string s22 = s2.substr(i);
            string s12 = s1.substr(i);
            if(isScramble(s11,s21) && isScramble(s12, s22))
                return true;
            
            s22 = s2.substr(0, n-i); // check the swapped order
            s21 = s2.substr(n-i);
            if(isScramble(s11,s21) && isScramble(s12, s22))
                return true;
        
    }
}

int main(){
string a,b;
cin>>a>>b;
if(a.length()!=b.length())cout<<"FALSE";
else cout<<isScramble(a,b);
return 0;
}