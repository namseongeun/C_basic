// C ����� ǥ�� �Լ����� ����ϴ� ����
#include <stdio.h>

int main() {
	// printf() �Լ�

	// ���Ĺ���: ����� ���¸� ����
	/*
	%d: int: ����� ���¸� �����ϴ� �뵵�� ���
	%u: unsigned int: ��ȣ ���� 10����
	%o: unsigned int: ��ȣ ���� 8����
	%x: unsigned int: ��ȣ ���� 16���� ����
	%c: char: ����
	%s: char: ���ڿ�
	%f: float: ��ȣ�ִ� �Ǽ�
	*/

	// ���๮��: \n

	// ����� ���
	/*
	- ""�� ǥ�õǴ� ���ڿ��� �ڿ� �̾ ǥ��
	- �޸��� ������ ����
	- ���Ĺ��ڰ� 2�� �����ϸ� ����� ��� �� �� �����ؾ� ��
	*/

	// ����
	// ���� 10���� ��� ������ ����
	printf("%10d %10d\n", 1234, 5678);
	// ���� 10���� ��� ���� ����
	printf("%-10d %-10d\n", 1234, 5678);

	
	// ������ ������
	/*
	������ �����ϱ� ���� �޸� ���� �Ҵ�
	�Ҵ�� �޸� ������ �̸��� �����ϰ� ���� ����
	*/
	int number;
	number = 10;
	printf("%d\n", number);

	// �� �̻��� ������ ���ÿ� ���� ����
	int num1, num2;
	// ���� �ϸ� �ǹ� ���� ���� �޸𸮿� �Ҵ�
	printf("%d %d\n", num1, num2);
	// ����� ���ÿ� �ʱ� �� ���� ����
	int num3 = 100, num4 = 200;

	// ���� �̸� ��Ģ
	/*
	- ������ �̸��� ���ĺ�, ����, ����ٷ� ���еȴ�.
	- ��ҹ��ڸ� �����Ѵ�.
	- ������ �̸��� ���ڷ� ������ �� ����, Ű���嵵 ������ �̸����� ������� ���Ѵ�.
	- �̸� ���̿� ������ ���Ե� �� ����.
	- Ư������ ���Ұ�
	*/

	// ������ �ڷ���
	// �������� �Ǽ��� �ڷ�

	// 1. ������ ����(char, short, int, long)
	int age = 12;
	// %d: ������ ���� ����϶�� ��
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	// ����
	char string = 'A';
	printf("%c\n", string);
	// ���ڿ�
	char abc[12] = "Hello World";
	printf("%s\n", abc);

	// 2. �Ǽ��� ����(float, double)
	float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);


	// ����÷ο�� �����÷ο�
	char i = 127;
	char j = 128;
	unsigned char k = 255;
	unsigned char l = 256;
	unsinged char m = -1;

	printf("%d, %d, %u, %u %u\n", i, j, k, l, m);


	// ������
	// 1.��� ������
	int a = 5, b = 3;

	int result1 = a+b;
	int result2 = a-b;
	int result3 = a*b;
	int result4 = a/b;
	int result5 = a%b ;
	// �������� ��� ����� �Ǽ��̷��� ������ ���� ��ü�� �Ǽ����� ��.
	// ��, ���������� ������ ����� ����

	printf("����� %d, %d, %d, %d, %d�Դϴ�.\n", result1, result2, result3, result4, result5);

	// 2.���մ��� ������
	a = a + b;
	printf("%d\n", a);
	a += b;
	printf("%d\n", a);

	// 3.���� ������
	int c = 10;
	int d = (c--) + 2;
	int e = (--c) + 2;

	printf("d: %d\n", d);
	printf("e: %d\n", e);

	return 0;
}