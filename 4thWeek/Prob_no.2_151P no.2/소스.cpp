#include <stdio.h>

#define TWENTY 20
#define TEENAGERMIN 85   //20���̸� û�ҳ� �ּһ�����
#define TEENAGERMAX 95   //20���̸� û�ҳ� �ִ������
#define ADULTMIN 90      //20���̻� ���� �ּһ�����
#define ADULTMAX 100	//20���̻� ���� �ִ������

int main(void)
{
	int age, chest;
	char size;
	printf("Your age : ");
	scanf_s("%d", &age);
	printf("Your chest size : ");
	scanf_s("%d", &chest);

	if (age < TWENTY)
	{
		if (chest < TEENAGERMIN)
		{
			size = 's';
		}
		else if (chest >= TEENAGERMIN && chest < TEENAGERMAX)
		{
			size = 'M';
		}
		else if (chest >= TEENAGERMAX)
		{
			size = 'L';
		}
	}
	else if (age >= TWENTY)
	{
		if (chest < ADULTMIN)
		{
			size = 'S';
		}
		else if (chest >= ADULTMIN && chest < ADULTMAX)
		{
			size = 'M';
		}
		else if (chest >= ADULTMAX)
		{
			size = 'L';
		}
	}
	printf("���̴� %d�̸� ������� %c�Դϴ�.\n", age, size);
	
}