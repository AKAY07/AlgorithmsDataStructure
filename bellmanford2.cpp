#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int V,E,source;
int infinity=INT_MAX;


struct edge{
  int beg;
  int end;
  int weight;
};




void printSolution(vector<int>v){
   for(int i=1;i<=V;i++)
   {
    cout<<"\n"<<i<<"\t"<<v[i];
    }
} 

/*


void Dijkistra(vector<int>dis,vector<bool>set,edge graph_edge[],int V,int E){
    dis[source]=0;
    for(int i=0;i<V-1;i++){
        int u=MinDistance(dis,set);
        set[u]=true;
        for(int j=0;j<E;j++){
            if(!set[j] && dis[u]+edge[u].weight)
        }
    }
    
}

*/

void bellmanford(vector<int>dis,edge graph_edge[],int V,int E){
    
    dis[source]=0;
    
    for(int i=0;i<V;i++){
        for(int j=0;j<E;j++){
            if(dis[graph_edge[j].beg]+graph_edge[j].weight < dis[graph_edge[j].end])
                
            {
                if(dis[graph_edge[j].beg]!=INT_MAX)
                dis[graph_edge[j].end]=dis[graph_edge[j].beg]+graph_edge[j].weight;
            }
        }
        
        
    }
   printSolution(dis);

    
}




int main(){
 
 edge graph_edge[100];

 cout<<"enter the number of vertex and edges";
 cin>>V;
 cin>>E;
 vector<int> dist(V,INT_MAX); 
 cout<<"enter the sourse destination and weight of respective edges";
 for(int i=0;i<E;i++){
 
    cin>>graph_edge[i].beg;
    cin>>graph_edge[i].end;
    cin>>graph_edge[i].weight; 
 }
 
 cout<<"enter the sourse vertex";
 cin>>source;
 
 bellmanford(dist,graph_edge,V,E);
    
    
 return 0;  
}
