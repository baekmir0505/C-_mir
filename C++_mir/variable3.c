#include <stdio.h>

int main4() {
	// 주석(//) : 이 줄은 메모로 취급
	/*
	작성자 : 000
	작성날짜: 2023-2-18
	기능: printf로 문자열 출력
	*/
	// 이름, 년도, 월, 일, f ==> 변수
	// 문자열[]변수 : 이름
	// 정수변수 : 년도, 월, 일
	// 문자변수 ; f

	char name[] = "백미르";   // %s
	int year = 2023;          // %d
	int month = 2;            // %d  
	int day = 18;             // %d
	char one = 'f';           // %c
	

	printf("이름:%s\n", name);
	printf("작성날짜:%d-%02d-%d\n", year, month, day);
	printf("기능:print%c로 문자열 출력",one);



	return 0;
}