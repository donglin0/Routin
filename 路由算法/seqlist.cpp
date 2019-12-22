#include"SeqList.h"
void ListInitiate(SeqList* L)    /* ��ʼ��˳���L*/
{
	L->size = 0;//��ʼ˳���Ϊ��
}

int ListLength(SeqList L)      /* ����˳���L�ĵ�ǰ����Ԫ�ظ���*/
{
	return L.size;
}

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
		*x = L.list[i];
		return 1;
	}
}