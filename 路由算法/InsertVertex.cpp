#include"InsertVertex.h"
#include"ListInsert.h"
//���붥��
void InsertVertex(AdjMGraph* G, DataType vertex)
{
	if (ListInsert(&G->vertices, G->vertices.size, vertex) == 0)//�ڶ���˳���ı�β���붥��vertex
	{
		printf("���붥��ʱ�ռ������޷����룡");
		exit(1);
	}
}
