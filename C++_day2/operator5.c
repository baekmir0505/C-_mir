#include <stdio.h>

int main7() {
	// #1
	// 사용자로부터 나이를 입력받아 20살 이상이면 1250원, 20살 미만이면 800원을 받는 지하철 요금정산 프로그램 만들기
	
	int age;
	int price;
	printf("나이를 입력하세요>> ");
	scanf("%d", &age);

	price = (age < 20) ? 800 : 1250;
	printf("당신의 나이는 %d세이며, 요금은 %d원입니다.\n", age, price);

	/* 당신의 나이는 26세이며, 요금은 1250원입니다.*/
	/* 당신의 나이는 19세이며, 요금은 800원입니다.*/

	// #2
	// 사용자로부터 나이와 키를 입력받아 나이가 12살 이상이고 키가 120cm 이상일 때만 놀이기구 탑승을 허용해주세요
	/* 놀이기구에 탑승할 수 있습니다 */
	/* 놀이기구에 탑승할 수 없습니다 */

	int ag = 0;
	double height = 0.0;
	printf("나이를 입력하세요>> ");
	scanf("%d", &ag);

	printf("키를 입력하세요>> ");
	scanf("%d", &height);
	
	(ag >= 12 && height >= 120.0) ? printf("놀이기구에 탑승할 수 있습니다") : printf("놀이기구에 탑승할 수 없습니다");

	return 0;
}