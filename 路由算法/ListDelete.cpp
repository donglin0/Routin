#include"ListDelete.h"

int ListDelete(SeqList* L, int i, DataType* x)
/*ɾ��˳���L��λ��Ϊi(0 <= i = size-1)������Ԫ�ز���ŵ�x��*/
/*ɾ���ɹ�����1��ɾ��ʧ�ܷ���0*/
{
	int j;
	if (L->size <= 0)
	{
		printf("˳����ѿ�������Ԫ�ؿ�ɾ!\n");
		return 0;
	}
	else if (i < 0 || i > L->size - 1)
	{
		printf("����i���Ϸ�!\n");
		return 0;
	}
	else
	{
		*x = L->list[i];  /*����ɾ����Ԫ�ص�x��*/
		/*����ǰ��*/
		for (j = i + 1; j <= L->size - 1; j++)
			L->list[j - 1] = L->list[j];
		L->size--;        //Ԫ�ظ�����1
		return 1;
	}
}
