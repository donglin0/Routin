#include"DeleteEdge.h"
// �ڴ�Ȩ����ͼG��ɾ��һ����v1������ָ���v2������ıߡ�

void DeleteEdge(AdjMGraph* G, int v1, int v2)

{
	G->edge[v1][v2] = MaxWeight;
	G->edge[v2][v1] = MaxWeight;
	G->numOfEdges--;
}