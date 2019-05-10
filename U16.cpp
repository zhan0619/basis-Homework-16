#include<stdio.h>
#include<stdlib.h>
void translate_1(int);
void map(int);
int main(void){
	int num;
	printf("請輸入數字");
	scanf("%d",&num);
	translate_1(num);
}
void translate_1(int num){
		map(num/100);
		printf("百");
		map((num%100)/10);
		printf("十");
		map((num%100)%10);
}
void map(int level){
	switch(level){
		case 0:
			printf("零");
			break;
		case 1:
			printf("一");
			break;
		case 2:
			printf("二");
			break;
		case 3:
			printf("三");
			break;
		case 4:
			printf("四");
			break;
		case 5:
			printf("五");
			break;
		case 6:
			printf("六");
			break;
		case 7:
			printf("七");
			break;
		case 8:
			printf("八");
			break;
		case 9:
			printf("九");
			break;
	}
}
