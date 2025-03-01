// C 언어의 표준 함수들을 사용하는 파일
#include <stdio.h>

int main() {
	// printf() 함수

	// 서식문자: 출력의 형태를 지정
	/*
	%d: int: 출력의 형태를 지정하는 용도로 사용
	%u: unsigned int: 부호 없는 10진수
	%o: unsigned int: 부호 없는 8진수
	%x: unsigned int: 부호 없는 16진수 정수
	%c: char: 문자
	%s: char: 문자열
	%f: float: 부호있는 실수
	*/

	// 개행문자: \n

	// 출력의 대상
	/*
	- ""로 표시되는 문자열의 뒤에 이어서 표시
	- 콤마로 각각을 구분
	- 서식문자가 2개 등장하면 출력의 대상도 두 개 등장해야 함
	*/

	// 정렬
	// 폭을 10으로 잡고 오른쪽 정렬
	printf("%10d %10d\n", 1234, 5678);
	// 폭을 10으로 잡고 왼쪽 정렬
	printf("%-10d %-10d\n", 1234, 5678);

	
	// 변수와 연산자
	/*
	정수를 저장하기 위한 메모리 공간 할당
	할당된 메모리 공간의 이름을 지정하고 값을 저장
	*/
	int number;
	number = 10;
	printf("%d\n", number);

	// 둘 이상의 변수를 동시에 선언 가능
	int num1, num2;
	// 선언만 하면 의미 없는 값이 메모리에 할당
	printf("%d %d\n", num1, num2);
	// 선언과 동시에 초기 값 지정 가능
	int num3 = 100, num4 = 200;

	// 변수 이름 규칙
	/*
	- 변수의 이름은 알파벳, 숫자, 언더바로 구분된다.
	- 대소문자를 구분한다.
	- 변수의 이름은 숫자로 시작할 수 없고, 키워드도 변수의 이름으로 사용하지 못한다.
	- 이름 사이에 공백이 삽입될 수 없다.
	- 특수문자 사용불가
	*/

	// 변수의 자료형
	// 정수형과 실수형 자료

	// 1. 정수형 변수(char, short, int, long)
	int age = 12;
	// %d: 정수형 값을 출력하라는 뜻
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	// 문자
	char string = 'A';
	printf("%c\n", string);
	// 문자열
	char abc[12] = "Hello World";
	printf("%s\n", abc);

	// 2. 실수형 변수(float, double)
	float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);


	// 언더플로우와 오버플로우
	char i = 127;
	char j = 128;
	unsigned char k = 255;
	unsigned char l = 256;
	unsinged char m = -1;

	printf("%d, %d, %u, %u %u\n", i, j, k, l, m);


	// 연산자
	// 1.산술 연산자
	int a = 5, b = 3;

	int result1 = a+b;
	int result2 = a-b;
	int result3 = a*b;
	int result4 = a/b;
	int result5 = a%b ;
	// 나눗셈의 경우 결과가 실수이려면 나누는 변수 자체가 실수여야 함.
	// 즉, 정수끼리의 나눗셈 결과는 정수

	printf("결과는 %d, %d, %d, %d, %d입니다.\n", result1, result2, result3, result4, result5);

	// 2.복합대입 연산자
	a = a + b;
	printf("%d\n", a);
	a += b;
	printf("%d\n", a);

	// 3.증감 연산자
	int c = 10;
	int d = (c--) + 2;
	int e = (--c) + 2;

	printf("d: %d\n", d);
	printf("e: %d\n", e);

	return 0;
}