#include"GetFirstVex.h"
#include"ListGet.h"

//�ڴ�Ȩ����ͼG��ȡ��v������ĵ�һ���ڽӶ��㣬����������ڽӶ�����ڣ��򷵻ظö����ڶ���˳������ţ����򷵻�-1��
int GetFirstVex(AdjMGraph G, int v)

{
	int col;//�к�
	DataType x;
	v = v - 1;
	if (ListGet(G.vertices, v, &x) == 0)
	{
		printf("ȡ��һ���ڽӶ���ʱ����vԽ�����\n");
		exit(1);
	}
	//Ѱ���ڽӾ���v���д�����ʼ��һ��ֵ�����ҷ�������Ȩֵ��Ӧ�Ķ���
	for (col = 0;col < G.vertices.size;col++)
		if (G.edge[v][col] > 0 && G.edge[v][col] < MaxWeight)
			return col;
	return -1;
}