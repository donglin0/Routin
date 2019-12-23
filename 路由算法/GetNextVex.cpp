#include"GetNextVex.h"
#include"ListGet.h"


//�ڴ�Ȩ����ͼG��ȡ��v1������ļ��ڽӽ���v2������֮�����һ���ڽӽ�㡣
int GetNextVex(AdjMGraph G, int v1, int v2)
{
	int col;
	DataType x;
	if ((ListGet(G.vertices, v1, &x) == 0) || (ListGet(G.vertices, v2, &x) == 0))
	{
		printf("ȡ��һ�ڽӶ���ʱ����v1��v2Խ�����\n");
		exit(1);
	}
	if (G.edge[v1][v2] == 0)
	{
		printf("v2����v1���ڽӶ���\n");
		exit(1);
	}
	//Ѱ���ڽӾ���v���дӵ�v2+1�п�ʼ�ĵ�һ��ֵ�����ҷ�������Ȩֵ��Ӧ�Ķ���
	for (col = v2 + 1;col < G.vertices.size;col++)
		if (G.edge[v1][col] > 0 && G.edge[v1][col] < MaxWeight)
			return col;
	return -1;
}