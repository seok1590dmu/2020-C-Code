#include <stdio.h>

void outfunction() {
	extern int global, sgalobl;

	printf("\t\t%d\n", ++global);

	//�ܺ� ���Ͽ� ����� ���� ���������̹Ƿ� ���� �� ����
	//printf("%d\n", ++sglobal);
}