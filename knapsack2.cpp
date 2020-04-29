#include<iostream>
using namespace std;

 
int N,W;
int fs[10];
void print(int mat[][20]){
    
    for(int i=0;i<N+1;i++){
        for(int j=0;j<W+1;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}


void SolveKnapsack(int mat[][20],int profit[],int weight[]){
    
    for(int i=1;i<=N;i++){
    for(int wt=1;wt<=W;wt++){
            
       int temp1=mat[i-1][wt] ;
       int temp2=mat[i-1][wt-weight[i-1]]+profit[i-1];
        
        if(weight[i-1]<=wt)
        {
            if(temp1>temp2){
                mat[i][wt]=mat[i-1][wt];
                            }
            else
            mat[i][wt]=mat[i-1][wt-weight[i-1]]+profit[i-1];       
          }

        else{
            mat[i][wt]=mat[i-1][wt];
            }
        }
    }
    cout<<endl;
    print(mat);

    
}


int main(){
	cout<<"enter the total items in knapsack";
  	cin>>N;
	int profit[N]={1,2,5,6};
	int weight[N]={2,3,4,5};
	cout<<"enter the profit and weight of each item";
//	for(int i=0;i<N;i++)
//	cin>>profit[N]>>weight[N];
	// creating a 2d matrix
	int solution[20][20];
	cout<<"enter the max capicity of bag";
	cin>>W;
	for (int i=0;i<N+1;i++){
	    for(int j=0;j<W+1;j++){
	        if(i==0 || j==0)
	        solution[i][j]=0;
	    }
	}
	SolveKnapsack(solution,profit,weight);
	return 0;
}
