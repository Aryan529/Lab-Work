#include<iostream>
#include<climits>     
using namespace std;


int minimumDist(int dist[], bool Tset[]) 
{
	int min=INT_MAX,index;
              
	for(int i=0;i<4;i++) 
	{
		if(Tset[i]==false && dist[i]<=min)      
		{
			min=dist[i];
			index=i;
		}
	}
	return index;
}

void Dijkstra(int graph[4][4],int src)
{
	int dist[4];                             
	bool Tset[4];
	 
	for(int i = 0; i<4; i++)
	{
		dist[i] = INT_MAX;
		Tset[i] = false;	
	}
	
	dist[src] = 0;              
	
	for(int i = 0; i<4; i++)                           
	{
		int m=minimumDist(dist,Tset); 
		Tset[m]=true;
		for(int i = 0; i<6; i++)                  
		{
			if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
				dist[i]=dist[m]+graph[m][i];
		}
	}
	cout<<"Vertex\t\tDistance from source"<<endl;
	for(int i = 0; i<4; i++)                      
	{ 
		char str=65+i; 
		cout<<str<<"\t\t\t"<<dist[i]<<endl;
	}
}

int main()
{
	int graph[4][4]={
		{0, 10, 20, 0},
		{10, 0, 0, 50},
		{20, 0, 0, 20},
		{0, 50, 20, 0}};
	Dijkstra(graph,2);
	return 0;	                        
}
