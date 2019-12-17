#ifndef HHH
#define HHH

#include <stdlib.h>

#include <malloc.h>

#include<windows.h>

#include<stdio.h>

#include<string.h>

#include<conio.h>

typedef int DataType;

#define MaxSize 10

#define MaxVertices 10

#define MaxWeight 10000




typedef struct

{
	DataType list[MaxSize];
	int size;
}SeqList;

void ListInitiate(SeqList* L);
int ListLength(SeqList L);
int ListInsert(SeqList* L, int i, DataType x);
int ListDelete(SeqList* L, int i, DataType* x);
int ListGet(SeqList L, int i, DataType* x);



#endif // !HHH
#pragma once



