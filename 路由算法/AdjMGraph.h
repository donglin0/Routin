#include "SeqList.h"

//�ڽӾ���ʵ��ͼ�Ĵ洢���Ͷ���
typedef struct

{
	SeqList vertices;  //��Ŷ����˳���
	int edge[MaxVertices][MaxVertices];//��űߵ��ڽӾ���
	int numOfEdges;  //�ߵ���Ŀ

}AdjMGraph;//ͼ�Ľṹ�嶨��

typedef struct

{
	int row;  //���±�
	int col;  //���±�
	int weight;  //Ȩֵ

}RowColWeight;//����Ϣ�ṹ�嶨��

//�ô�Ȩ����ͼGΪ��ͼ
void GraphInitiate(AdjMGraph* G);

//�ڴ�Ȩ����ͼG�в��붥��vertex�����ͼ���Ѿ��ж���vertex,��ͼ���䣬ʱ�临�Ӷ�:O(n)��
void InsertVertex(AdjMGraph* G, DataType vertex);

void InsertEdge(AdjMGraph* G, int v1, int v2, int weight);// �ڴ�Ȩ����ͼG��ɾ��һ����v1������ָ���v2������ıߡ�

void DeleteEdge(AdjMGraph* G, int v1, int v2);//ɾ������
									 
void DeleteVertex(AdjMGraph* G, int v); //�ڴ�Ȩ����ͼG��ɾ����v�����㣬ʱ�临�Ӷ�:O(n^2)��

//�ڴ�Ȩ����ͼG��ȡ��v������ĵ�һ���ڽӶ��㣬����������ڽӶ�����ڣ��򷵻ظö����ڶ���˳������ţ����򷵻�-1.ʱ�临�Ӷ�:O(n)��
int GetFirstVex(AdjMGraph G, int v);

//�ڴ�Ȩ����ͼG��ȡ��v1������ļ��ڽӽ���v2������֮�����һ���ڽӽ��,ʱ�临�Ӷ�:O(n)��
int GetNextVex(AdjMGraph G, int v1, int v2);

//��������ͼG��ͨ���ڿ�ͼG�в���n�������e����ʵ�֡�ʱ�临�Ӷ�:O(n^2+e)��
void CreatGraph(AdjMGraph* G, DataType v[], int n, RowColWeight W[], int e);

//�Ͽ���˹���㷨��������·������Ӧ��·����
void Dijkstra(AdjMGraph* G, int v0, int distance[], int path[]);











#pragma once
