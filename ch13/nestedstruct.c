#include <stdio.h>
#include <string.h>

//��¥�� ���� ����ü
struct data {
	int year;		//��
	int month;		//��
	int day;		//��
};

//���ಲ�¸� ���� ����ü
struct account {
	struct data open;		//���� ��������
	char name[12];			//������ �̸�
	int actnum;				//���¹�ȣ
	double balance;			//�ܰ�
};

int main(void) {
	struct account me = { {2018, 3, 9}, "ȫ�浿", 1001, 300000 };

	printf("����üũ��: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);

}
