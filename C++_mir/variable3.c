#include <stdio.h>

int main4() {
	// �ּ�(//) : �� ���� �޸�� ���
	/*
	�ۼ��� : 000
	�ۼ���¥: 2023-2-18
	���: printf�� ���ڿ� ���
	*/
	// �̸�, �⵵, ��, ��, f ==> ����
	// ���ڿ�[]���� : �̸�
	// �������� : �⵵, ��, ��
	// ���ں��� ; f

	char name[] = "��̸�";   // %s
	int year = 2023;          // %d
	int month = 2;            // %d  
	int day = 18;             // %d
	char one = 'f';           // %c
	

	printf("�̸�:%s\n", name);
	printf("�ۼ���¥:%d-%02d-%d\n", year, month, day);
	printf("���:print%c�� ���ڿ� ���",one);



	return 0;
}