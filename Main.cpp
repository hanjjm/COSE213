#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"
#include "LinkedList.h"

/*int RandInt(int min, int max) {									//������ index�����Լ�
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}*/

int main() {

	/*int start;													//�ð�üũ
	double diff;*/
	//start = clock();												//�ð�üũ
	
	//List list = *ListInit();										//ListInit

	//Vector vector = *VectorInit();								//VectorInit
	
	/*	for (int i = 1; i <= 5; i++) {								//Doubly linked list�� ����׽�Ʈ
			ListInsertAtTail(&list, 2 * i - 1);
			ListPrint(&list);
			ListInsertAtHead(&list, 2 * i);
			ListPrint(&list);
		}
		for (int j = 1; j < 5; j++) {
			ListDeleteFirst(&list);
			ListPrint(&list);
			ListDeleteLast(&list);
			ListPrint(&list);
		}
	ListDeleteFirst(&list);
	ListPrint(&list);*/

	/*for (int i = 0; i < 10; i++)									//ListInsertAtHead
	ListInsertAtHead(&list, i);*/

	/*for (int i = 0; i < 10; i++)									//ListInsertAtTail
	ListInsertAtTail(&list, i);*/
	
	/*for (int j = 0; j < 10; j++)									//ListDeleteFirst
	ListDeleteFirst(&list);*/

	/*for (int j = 0; j < 10; j++)									//ListDeleteLast
	ListDeleteLast(&list)*/

	/*for (int i = 0; i < 10; i++)									//VectorInsertAtHead
	VectorInsertAtHead(&vector, i);*/

	/*for (int i = 0; i < 10; i++)									//VectorInsertAtTail
	VectorInsertAtTail(&vector, i);*/

	/*for (int j = 0; j < 10; j++) {								//VectorDeleteFirst
	VectorDeleteFirst(&vector);*/

	/*for (int j = 0; j < 10; j++) {								//VectorDeleteLast
	VectorDeleteLast(&vector);*/

	//ListPrint(&list);												//ListPrint

	//ListReversePrint(&list);										//ListReversePrint

	//srand(time(NULL));											//������ index ��������
		
	/*for (int j = 0; j < 10000; j++)								//ListGetAt
	ListGetAt(&list, RandInt(0, 9));*/

	/*for (int j = 0; j < 10000; j++)								//VectorGetAt
	VectorGetAt(&vector, RandInt(0, 9));*/

	/*diff = clock() - start;										//�ð�üũ
	float msec = diff * 1000.0 / CLOCKS_PER_SEC;
	printf(" Time taken %.4f seconds.\n", msec / 1000.0);*/

	return 0;
}
