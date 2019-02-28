#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct student {
	char name[10];
	int num;
	int age;
	char addr[15];
}STUDENT;
void CopyFile(FILE *fp1, FILE *fp2);
void PutcharToFile(FILE *p);
void show(FILE * p);
void savefile(FILE *fp, STUDENT *p, int n);
void readfile(FILE *fp, STUDENT*p, int n);


