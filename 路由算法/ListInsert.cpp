#include"ListInsert.h"

int ListInsert(SeqList* L, int i, DataType x)
/* ��˳���L�ĵ�i(0 <= i = size)��λ��ǰ��������Ԫ��ֵx����ɹ�����1������ʧ�ܷ���0*/
{
	int j;
	//cout<<i<<"Ӧ�е�����"<<endl;
	if (L->size >= MaxSize)
	{
		printf("˳��������޷�����!\n");
		return 0;
	}
	else if (i < 0 || i > L->size)
	{
		printf("����i���Ϸ�!\n");
		return 0;
	}
	else
	{
		/*Ϊ������׼��*/
		for (j = L->size; j > i; j--)
			L->list[j] = L->list[j - 1];
		L->list[i] = x;
		L->size++;      //Ԫ�ظ�����1
		return 1;
	}
}