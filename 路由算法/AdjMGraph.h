#pragma once
#include "SeqList.h"

//�ڽӾ���ʵ��ͼ�Ĵ洢���Ͷ���
typedef struct
{
	SeqList vertices;  //��Ŷ����˳���
	int edge[MaxVertices][MaxVertices];//��űߵ��ڽӾ���
	int numOfEdges;  //�ߵ���Ŀ
	int getVertexPos(DataType vertex) {//����������ͼ�е�λ��
		for (int i = 0;i < numOfEdges;i++)
			if (vertices.list[i] == vertex) return i;
		return -1;
	}

}AdjMGraph;

//����Ϣ�ṹ�嶨��
typedef struct
{
	int row;  //���±�
	int col;  //���±�
	int weight;  //Ȩֵ
}RowColWeight;

//void GraphInitiate(AdjMGraph* G);//��ͼGΪ��ͼ
//void InsertVertex(AdjMGraph* G, DataType vertex);///���붥��
//void InsertEdge(AdjMGraph* G, int v1, int v2, int weight);//ɾ��һ����v1������ָ���v2������ıߡ�
//void DeleteEdge(AdjMGraph* G, int v1, int v2);//ɾ����								 
//void DeleteVertex(AdjMGraph* G, int v); //ɾ����v������
//int GetFirstVex(AdjMGraph G, int v);//�õ���һ���ڽӵ�
//int GetNextVex(AdjMGraph G, int v1, int v2);//v1���ڽӵ�v2���ڽӵ�
//void CreatGraph(AdjMGraph* G, DataType v[], int n, RowColWeight W[], int e);//����ͼ
//void Dijkstra(AdjMGraph* G, int v0, int distance[], int path[]);//�Ͽ���˹���㷨��������·������Ӧ��·����
