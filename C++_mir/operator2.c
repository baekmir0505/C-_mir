#include <stdio.h>

int main7() {
	// 연산자
	// 1. 대입연산자
	// =
	// 오른쪽에 있는 데이터값을 왼쪽에 있는 공간에 대입한다
	int num1;
	num1 = 3;

	int num2 = 4;  // 선언과 동시에 사용도 가능 (초기화)

	num1 = num2;   // 왼쪽(num1)은 공간, 오른쪽(num2)는 값

	num1 = num1;   // 왼쪽(공간)의 num1과 오른쪽(값)의 num1은 다름
	// num1 = 4;

	return 0;
}