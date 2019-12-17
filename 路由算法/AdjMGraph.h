#include "SeqList.h"

//邻接矩阵实现图的存储类型定义
typedef struct

{
	SeqList vertices;  //存放顶点的顺序表
	int edge[MaxVertices][MaxVertices];//存放边的邻接矩阵
	int numOfEdges;  //边的数目

}AdjMGraph;//图的结构体定义

typedef struct

{
	int row;  //行下标
	int col;  //列下标
	int weight;  //权值

}RowColWeight;//边信息结构体定义

//置带权有向图G为空图
void GraphInitiate(AdjMGraph* G);

//在带权有向图G中插入顶点vertex。如果图中已经有顶点vertex,则图不变，时间复杂度:O(n)。
void InsertVertex(AdjMGraph* G, DataType vertex);

void InsertEdge(AdjMGraph* G, int v1, int v2, int weight);// 在带权有向图G中删除一条第v1个顶点指向第v2个顶点的边。

void DeleteEdge(AdjMGraph* G, int v1, int v2);//删除顶点
									 
void DeleteVertex(AdjMGraph* G, int v); //在带权有向图G中删除第v个顶点，时间复杂度:O(n^2)。

//在带权有向图G中取第v个顶点的第一个邻接顶点，如果这样的邻接顶点存在，则返回该顶点在顶点顺序表的序号，否则返回-1.时间复杂度:O(n)。
int GetFirstVex(AdjMGraph G, int v);

//在带权有向图G中取第v1个顶点的继邻接结点第v2个顶点之后的下一个邻接结点,时间复杂度:O(n)。
int GetNextVex(AdjMGraph G, int v1, int v2);

//创建有向图G，通过在空图G中插入n个顶点和e条边实现。时间复杂度:O(n^2+e)。
void CreatGraph(AdjMGraph* G, DataType v[], int n, RowColWeight W[], int e);

//迪克特斯拉算法求得是最短路径和相应的路由器
void Dijkstra(AdjMGraph* G, int v0, int distance[], int path[]);











#pragma once
