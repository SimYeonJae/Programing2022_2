#include<stdio.h>
#include<stdlib.h>


typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void)
{
	COLOR my_color = YELLOW, c;
	ARROW direction = UP;

	for (int c = CYAN; c <= BLACK; c++)
	{
		int direction{};NO.
		direction = direction % 4;
		direction++;
		if (c == my_color)break;
	}

	switch (direction)
	{
	case UP: printf("���� ���� : ��"); break;
	case DOWN: printf("���� ���� : �Ʒ�"); break;
	case LEFT: printf("���� ���� : ����"); break;
	case RIGHT: printf("���� ���� : ������"); break;
	}
	return 0;
}