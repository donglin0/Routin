#include"ListGet.h"

int ListGet(SeqList L, int i, DataType* x)
/*ȡ˳���L�е�i������Ԫ�ش���x�У��ɹ�����1��ʧ�ܷ���0*/
{
	if (i < 0 || i > L.size - 1)
	{
		printf("����i���Ϸ�!\n");
		return 0;
	}
	else
	{
		*x = L.list[i];//��ֵ����x
		return 1;
	}
}