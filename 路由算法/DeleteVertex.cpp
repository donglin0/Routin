#include"DeleteVertex.h"
//ɾ������
void DeleteVertex(AdjMGraph* G, int v)
{

	int m3, i, j;
	m3 = v - 1;

	if (m3 < 0 || m3 >= G->vertices.size)
	{
		printf("�Բ��𣬴���·��û������Ҫɾ����·�ɽڵ�\n");
		exit(0);
	}
	else
	{
		//for(i=m3;i < G->vertices.size;i++)
		for (j = 0, i = m3;j < G->vertices.size;j++)
		{
			G->edge[j][i] = MaxWeight;//�ߵ�Ȩֵ��Ϊ���ֵ��ʾ����ͨ
		}

		//for(i=m3;i < G->vertices.size;i++)
		for (i = m3, j = 0;j < G->vertices.size;j++)
			G->edge[i][j] = MaxWeight;//����ͼ�޸�����
		//for(i=m3;i < G->vertices.size;i++)
		//G->vertices.list[i]=G->vertices.list[i]-1;
		//G->vertices.size--;
		printf("ɾ�����ɹ�\n");
	}

}