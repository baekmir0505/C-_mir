#include <stdio.h>

int main5() {
	// page 85
	// #2
	int num1 = 27;

	printf("%d \n", num1 > 10);     //1
	printf("%d \n", num1 != 5);


	printf("%d \n", num1 >= 27);
	printf("%d \n", num1 == 27);    //1

	printf("%d \n", num1 < 30);     // 1
	printf("%d \n", num1 <= 27);

	// #3
	// ����=86, ����=75, ����=88, ��ȸ=60, ����=96
	// ����� ���ϼ��� (�Ҽ������� ���)
	int kor = 86, eng = 75, ma = 88, na = 60, sc = 96;
	int sum = 0;
	double avg = 0.0;
	sum = kor + eng + ma + na + sc;
	avg = (double)sum / 5;       //or sum / 5.0;
	printf("����� %lf �Դϴ�.\n", avg);

	// #4
	// ���������� ���
	int num = 5;
	// �� num�� ���������ڸ� �����Ͽ� 6 6 8 ����� ����غ����� ++, --
	printf("num�� ��: %d \n", ++num);      // 6
	printf("num�� ��: %d \n", num++);      // 6
	printf("num�� ��: %d \n", ++num);      // 8

	return 0;
}