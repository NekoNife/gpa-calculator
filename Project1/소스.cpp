#include <stdio.h>
#include <string.h>  
#include <stdlib.h>
#include <malloc.h> 
#include <windows.h >

#define size 40
#define _CRT_SECURE_NO_WARNINGS
//�� �� ü �� �� 

struct student {         // �л� �����Ϳ� ���� ����ü ����
	char group[20]; // �а��� ������ ���
	int num;            // �й��� ������ ���
	char name[20];      // �̸��� ������ ���    
	double score;       // ������ ������ ���
};
//����
int main(void) {

	int mm;
	//�ؽ�Ʈ ���� ���翩�� Ȯ�� ������ ����


	struct student list[size];
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("              �޴�\n");
	printf("           1.�������\n");
	printf("           2.�������\n");
	printf("           3.��������\n");             //
	printf("           4.��������/����\n");        //modify �� delete
	printf("           5.���α׷� ���� \n");
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	printf("       ������ �޴��� �����ּ���  ");
	scanf_s("%d", &mm);

	if (mm == 2) {

		int as;
		int ax;
		int bs;
		int bx;
		int cs;
		int cx;
		int ds;
		int dx;
		int fs;
		int all;             //�� ��û ����
		float sum, sum1;              //����



		printf("             �������\n.");
		printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
		printf("ex) 3���� a 2���� a �϶� a ����� 5����\n");

		printf("a+(4.5)����:");
		scanf_s("%d", &as);
		printf("\n");

		printf("a(4)����:");
		scanf_s("%d", &ax);
		printf("\n");

		printf("b+(3.5)����:");
		scanf_s("%d", &bs);
		printf("\n");

		printf("b(3)����:");
		scanf_s("%d", &bx);
		printf("\n");

		printf("c+(2.5)����:");
		scanf_s("%d", &cs);
		printf("\n");

		printf("c(2)����:");
		scanf_s("%d", &cx);
		printf("\n");

		printf("d+(1.5)����:");
		scanf_s("%d", &ds);
		printf("\n");

		printf("d(1)����:");
		scanf_s("%d", &dx);
		printf("\n");


		printf("�� �̼� ����:");
		scanf_s("%d", &all);
		printf("\n");


		printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");




		sum = (as * 4.5) + (ax * 4) + (bs * 3.5) + (bx * 3) + (cs * 2.5) + (cx * 2) + (ds * 1.5) + (dx * 1);
		sum1 = sum / all;

		printf("�� ������ %f �Դϴ�", sum1);

	}

	if (mm == 1) {
		int i;
		int p;

		int gg;

		printf("�Է� �ο� : ");
		scanf_s("%d", &p);

		for (i = 0; i < p; i++)
		{

			printf("menu1");
			printf("\n");

			printf("�а� : ");
			scanf_s("%s", &list[i].group, 20);

			printf("\n");

			printf("�й� : ");          // �ְ������� �й� 
			scanf_s("%d", &list[i].num);

			printf("\n");

			printf("�̸� : ");         // �ְ������� �̸� 
			scanf_s("%s", list[i].name, 20);

			printf("\n");

			printf("���� : ");     // �ְ������� ���� 
			scanf_s("%lf", &list[i].score);

			printf("\n");

			system("cls");
		}
		// �Էºκ� ���Ӹ� p.530

		for (i = 0; i < p; i++)
		{
			printf("�Է� ����\n");
			printf("�а�:%s\n�й�:%d\n�̸�:%s\n����%f\n\n", list[i].group, list[i].num, list[i].name, list[i].score);

		}


		goto endd; //����Ʈ�� �ٷ� �̵�



	}





	if (mm == 3) {

		//mm 1������ ���°�
		FILE* open = NULL;
		int c;
		open = fopen("��������.txt", "r");
		if (open == NULL)
			printf("���� ���� ����\n");
		else
			printf("���� ���� ����\n");

		while ((c = fgetc(open)) != EOF)
			putchar(c);
		putchar('\n');
		fclose(open);
		remove("��������.txt");
		return 0;





	}

	if (mm == 4) {
	endd: //mm 1������ ���°�
		printf("list ��");


	}
	/*  double �������� �̰ɷ� ����
	if (mm == 5) {
	   int ww;
	   int qq;
	   int ee;
	   float rr;
	   scanf_s("%d", &qq);
	   scanf_s("%d", &ww);
	   scanf_s("%d", &ee);
	   rr = (ww * 4) + (qq * 4.5);
	   rr = rr / ee;
	   printf("%f",rr);

	}*/

	printf("\n");

	printf("���α׷� ����.");



	return 0;
}