#include<stdio.h>

int main()

{
	struct marriage
	{
		char name[20];
		int age;
		int sex;
		double height;
	};
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };
	struct marriage* mp = &m1;

	printf("�̸�:%s  ", mp->name);
	printf("����:%d  ", mp->age);
	printf("����:%c  ", mp->sex);
	printf("Ű:%.1lf  ", mp->height);

}