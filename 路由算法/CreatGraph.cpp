#include"CreatGraph.h"
#include"GraphInitiate.h"
#include"InsertEdge.h"
#include"InsertVertex.h"
//��������ͼG��ͨ���ڿ�ͼG�в���n�������e����ʵ�֡�ʱ�临�Ӷ�:O(n^2+e)��
void CreatGraph(AdjMGraph* G, DataType v[], int n, RowColWeight W[], int e)
{
	int i, k;
	GraphInitiate(G);//ͼ��ʼ��
	for (i = 0;i < n;i++)
	{
		InsertVertex(G, v[i]);//���붥��
	}
	for (k = 0;k < e;k++)
		InsertEdge(G, W[k].row, W[k].col, W[k].weight);//�����
}
