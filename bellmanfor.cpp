
#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int start,end,weight;
};

int bellmanFord(int n, int e, int src, vector<edge> &edge, vector<int> &dist)
{
    int i,j;
    int s,d,w;
    i=src;

    dist[i-1]=0;
    
    for(i=1;i<n;i++)

    {
        for(j=0;j<e;j++)

        {

            s=edge[j].start;

            d=edge[j].end;

            w=edge[j].weight;

            if(dist[s]!=INT_MAX && dist[s]+w<dist[d])

            {

                dist[d]=dist[s]+w;

            }

        }

    }


    for(j=0;j<e;j++)

    {

        s=edge[j].start;

        d=edge[j].end;

        w=edge[j].weight;

        if(dist[s]!=INT_MAX && dist[s]+w<dist[d])

        {

            return 0;

        }

    }

    return 1;

}

 

int main()

{

    int i;

    int n,e;

    int s,d,w;

    int src;

 

    cout<<"Enter the number of vertices ";

    cin>>n;

    cout<<"Enter the number of edges ";

    cin>>e;

    vector<edge> edge(e);
 

    cout<<"Enter the src, dest and weight of each edge"<<endl;

    for(i=0;i<e;i++)

    {

        cin>>s>>d>>edge[i].weight;

        edge[i].start=s-1;

        edge[i].end=d-1;

    }

 

    cout<<"Enter the source vertex ";

    cin>>src ;
    vector<int> dist(n,INT_MAX);

    i=bellmanFord(n,e,src,edge,dist);

    cout<<endl;
    if(i)

    {

        cout<<"vectex Min. distance from source"<<endl;

        for(i=0;i<n;i++)

        {

            cout<<i+1<<"     "<<dist[i]<<endl;

        }

    }

 

    else

    {

        cout<<"There is a negative weight loop in the graph "<<endl;

    }

 

    return 0;

}