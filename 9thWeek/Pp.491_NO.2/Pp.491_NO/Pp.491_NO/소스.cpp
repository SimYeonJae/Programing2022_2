#include <stdio.h>
struct craker
{
	int 가격;
	int 열량;
};
int main(void)
{
	struct craker basasak;
	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf_s("%d%d", &basasak.가격, &basasak.열량);
	printf("바사삭의 가격 : %d원\n", basasak.가격);
	printf("바사삭의 열량 : %dkcal\n", basasak.열량);
	return 0;
}