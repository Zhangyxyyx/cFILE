#include"fileOperate.h"

void main() {
	FILE *fp1,*fp2;
	STUDENT stu[4];
	char f1[] = "file1.txt";
	char f2[] = "file2.txt";
	if ((fp1 = fopen(f1, "w+")) == NULL) {
		printf("cannot open this file");
		exit(0);
	}
	if ((fp2 = fopen(f2, "a+")) == NULL) {
		printf("cannot open this file");
		exit(0);
	}
	fputs("Today's weather is cloudy",fp1);
	fseek(fp1, -8, SEEK_END);
	char * str=(char *)malloc(sizeof(char)*100);
	
	fgets(str, 10, fp1);
	printf("%s\n", str);
	//freopen("in.txt", "r+", stdin);
	//freopen("out.txt", "w+", stdout);

	
	

	fclose(fp2);
	fclose(fp1);
	int c;
	while (1) {};
	scanf("%d", &c);
}

void readfile(FILE *fp, STUDENT*p, int n) {
	for (int i = 0; i < n; i++) {
		fread(&p[i], sizeof(STUDENT), 1, fp);
		
	}
}
void savefile(FILE*fp,STUDENT  *p,int n){
	for (int i = 0; i < n; i++) {
		if (fwrite(&p[i], sizeof(STUDENT), 1, fp) != 1) {
			printf("file write error\n");
			exit(0);
		}
	}
}
void CopyFile(FILE *fp1, FILE *fp2) {
	
	char ch;
	while ((ch = fgetc(fp1)) != EOF) {
		fputc(ch, fp2);
	}
}

void PutcharToFile(FILE *p) {
	char ch = getchar();
	while (ch != '#') {
		fputc(ch, p);
		ch = getchar();
	}
	rewind(p);
	putchar('\n');
}
void show(FILE * p) {
	char ch;
	rewind(p);
	while ((ch = fgetc(p)) != EOF) {
		printf("%c", ch);
	}
	rewind(p);
}
void fputcANDfgetc() {
	FILE * fp;
	char * fname = (char *)malloc(sizeof("demo"));
	fname = "demo";
	if ((fp = fopen(fname, "w+")) == NULL) {
		printf("cannot open this file\n");
		exit(0);
	}
	for (int i = 'A'; i < 'z'; i++) {
		for (int j = 0; j < 10; j++) {
			fputc(i, fp);
		}
	}
	char ch;
	rewind(fp);
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);
	int a;
	scanf("%d", &a);
}