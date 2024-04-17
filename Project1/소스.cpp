#include <stdio.h>
#include <string.h>  
#include <stdlib.h>
#include <malloc.h> 
#include <windows.h >

#define size 40
#define _CRT_SECURE_NO_WARNINGS
//구 조 체 선 언 

struct student {         // 학생 데이터에 대한 구조체 선언
	char group[20]; // 학과을 저장할 멤버
	int num;            // 학번을 저장할 멤버
	char name[20];      // 이름을 저장할 멤버    
	double score;       // 학점을 저장할 멤버
};
//메인
int main(void) {

	int mm;
	//텍스트 파일 존재여부 확인 없을시 생성


	struct student list[size];
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("              메뉴\n");
	printf("           1.성적등록\n");
	printf("           2.학점계산\n");
	printf("           3.학점저장\n");             //
	printf("           4.학점수정/삭제\n");        //modify 와 delete
	printf("           5.프로그램 종료 \n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("       실행할 메뉴를 정해주세요  ");
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
		int all;             //총 신청 학점
		float sum, sum1;              //계산식



		printf("             학점계산\n.");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("ex) 3학점 a 2학점 a 일때 a 등급은 5학점\n");

		printf("a+(4.5)갯수:");
		scanf_s("%d", &as);
		printf("\n");

		printf("a(4)갯수:");
		scanf_s("%d", &ax);
		printf("\n");

		printf("b+(3.5)갯수:");
		scanf_s("%d", &bs);
		printf("\n");

		printf("b(3)갯수:");
		scanf_s("%d", &bx);
		printf("\n");

		printf("c+(2.5)갯수:");
		scanf_s("%d", &cs);
		printf("\n");

		printf("c(2)갯수:");
		scanf_s("%d", &cx);
		printf("\n");

		printf("d+(1.5)갯수:");
		scanf_s("%d", &ds);
		printf("\n");

		printf("d(1)갯수:");
		scanf_s("%d", &dx);
		printf("\n");


		printf("총 이수 학점:");
		scanf_s("%d", &all);
		printf("\n");


		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");




		sum = (as * 4.5) + (ax * 4) + (bs * 3.5) + (bx * 3) + (cs * 2.5) + (cx * 2) + (ds * 1.5) + (dx * 1);
		sum1 = sum / all;

		printf("총 학점은 %f 입니다", sum1);

	}

	if (mm == 1) {
		int i;
		int p;

		int gg;

		printf("입력 인원 : ");
		scanf_s("%d", &p);

		for (i = 0; i < p; i++)
		{

			printf("menu1");
			printf("\n");

			printf("학과 : ");
			scanf_s("%s", &list[i].group, 20);

			printf("\n");

			printf("학번 : ");          // 최고학점의 학번 
			scanf_s("%d", &list[i].num);

			printf("\n");

			printf("이름 : ");         // 최고학점의 이름 
			scanf_s("%s", list[i].name, 20);

			printf("\n");

			printf("학점 : ");     // 최고학점의 학점 
			scanf_s("%lf", &list[i].score);

			printf("\n");

			system("cls");
		}
		// 입력부분 끝머리 p.530

		for (i = 0; i < p; i++)
		{
			printf("입력 내용\n");
			printf("학과:%s\n학번:%d\n이름:%s\n학점%f\n\n", list[i].group, list[i].num, list[i].name, list[i].score);

		}


		goto endd; //리스트로 줄로 이동



	}





	if (mm == 3) {

		//mm 1번에서 오는곳
		FILE* open = NULL;
		int c;
		open = fopen("학점계산기.txt", "r");
		if (open == NULL)
			printf("파일 열기 실패\n");
		else
			printf("파일 열기 성공\n");

		while ((c = fgetc(open)) != EOF)
			putchar(c);
		putchar('\n');
		fclose(open);
		remove("학점계산기.txt");
		return 0;





	}

	if (mm == 4) {
	endd: //mm 1번에서 오는곳
		printf("list 목");


	}
	/*  double 오류나서 이걸로 수정
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

	printf("프로그램 종료.");



	return 0;
}