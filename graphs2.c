
#include<stdio.h>

#include<stdlib.h>

#include<limits.h>

#include<string.h>





//Structure for storing a graph

struct Graph{

	int vertexNum;

	int** edges;

};



//Constructs a graph with V vertices and E edges

void createGraph(struct Graph* G,int V){

		G->vertexNum = V;

		G->edges =(int**) malloc(V * sizeof(int*));

		for(int i=0; i<V; i++){

			G->edges[i] = (int*) malloc(V * sizeof(int));

			for(int j=0; j<V; j++)

				G->edges[i][j] = INT_MAX;

			G->edges[i][i] = 0;

		}		

}
