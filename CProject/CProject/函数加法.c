#include<stdio.h>
int main() {
	int num1, num2, result;
	printf("����һ������һ�������س��������룺\n");
	scanf_s("%d+%d", &num1, &num2);
	addTest(num1, num2);
	printf("��������\n");
	scanf_s("%d", &result);
	if (print( num1,  num2,  result))
	{
		printf("Right!");

		return 1;
	}
	printf("Not correct! Try Again!");
	return 0;
}

int addTest(int num1, int num2) {
	return num1 + num2;
}

int print(int num1, int num2,int result) {
	int trueNum = num1 + num2;
	return result == trueNum ? 1 : 0;
}