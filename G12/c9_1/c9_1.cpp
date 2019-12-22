// c9_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include "stdlib.h"

void	print_menu();
void	write2file( struct student s[], int count );
void	readfromfile( struct student s[], int count );
void	student_input( struct student *s );
void    student_output( struct student *s);
void    all( struct student *s);

struct	student {
	int		no;
	char	name[21];
	float	chinese,english,math,physics,chemistry,biology,history,political,geographical,computer;
	float	avg, sum;
};

int main(int argc, char* argv[])
{
	struct student s[100] = {0};

	printf("%d\n", sizeof(struct student));

	char	selection;
	int		quitflag = 0;

	while(quitflag==0) {
		print_menu();
		selection = getch();
		switch(selection) {
		case '1':readfromfile( s, 100);break;
		case '2':write2file( s, 100);break;
		case '3':student_input(s);break;
		case '4':student_output(s);break;
		case '5':all(s);break;
		case '9':quitflag = 1;break;
		default:
			;
		}
	}


	return 0;
}

void	student_input( struct student *s )
{
	int		index;
	int     m,n;

	printf("输入学生学号");
	scanf("%d", &index);

	printf("学生学号:[%d]\n", s[index].no);
	scanf("%d", &s[index].no);

	printf("输入学生姓名:[%s]\n", s[index].name);
	scanf("%s", &s[index].name);
	
	printf("1.批量录入成绩\n2.单科入录成绩\n");
	scanf("%d",&m);
	
	if(m==1){
		printf("语文:");
		scanf("%f",&s[index].chinese);
		printf("数学::");
		scanf("%f",&s[index].math);
		printf("英语:");
		scanf("%f",&s[index].english);
		printf("物理:");
		scanf("%f",&s[index].physics);
		printf("化学:");
		scanf("%f",&s[index].chemistry);
		printf("生物:");
		scanf("%f",&s[index].biology);
		printf("历史:");
		scanf("%f",&s[index].history);
		printf("政治:");
		scanf("%f",&s[index].political);
		printf("地理:");
		scanf("%f",&s[index].geographical);
		printf("计算机:");
		scanf("%f",&s[index].computer);
	}
	if(m==2){
		while(1){
		printf("请选择学科\n");
		printf("1.语文 2.数学 3.英语 4.物理 5.化学 6.生物 7.历史 8.政治 9.地理 10.计算机 0.退出");
		scanf("%d",&n);
		if(n==1){
			printf("语文");
			scanf("%f",&s[index].chinese);
		}
		if(n==2){
			printf("数学");
			scanf("%f",&s[index].math);
		}
		if(n==3){
			printf("英语");
			scanf("%f",&s[index].english);
		}
		if(n==4){
			printf("物理");
			scanf("%f",&s[index].physics);
		}
		if(n==5){
			printf("化学");
			scanf("%f",&s[index].chemistry);
		}
		if(n==6){
			printf("生物");
			scanf("%f",&s[index].biology);
		}
		if(n==7){
			printf("历史");
			scanf("%f",&s[index].history);
		}
		if(n==8){
			printf("政治");
			scanf("%f",&s[index].political);
		}
		if(n==9){
			printf("地理");
			scanf("%f",&s[index].geographical);
		}
		if(n==10){
			printf("计算机");
			scanf("%f",&s[index].computer);
		}
		if(n==0){
			break;
		}
		}
	}
	s[index].sum=s[index].chinese+s[index].math+s[index].english+s[index].physics+s[index].chemistry+s[index].biology+s[index].history+s[index].political+s[index].geographical+s[index].computer;
	s[index].avg=(s[index].chinese+s[index].math+s[index].english+s[index].physics+s[index].chemistry+s[index].biology+s[index].history+s[index].political+s[index].geographical+s[index].computer)/10;

}

void student_output( struct student *s)
{
	int index;
	
	printf("输入学生学号:");
	scanf("%d",&index);
	printf("学号%d 姓名%s 语文%0.2f 数学%0.2f 英语%0.2f 物理%0.2f 化学%0.2f 生物%0.2f 历史%0.2f 政治%0.2f 地理%0.2f 计算机%0.2f 总分%0.2f\n",s[index].no,s[index].name,s[index].chinese,s[index].math,s[index].english,s[index].physics,s[index].chemistry,s[index].biology,s[index].history,s[index].political,s[index].geographical,s[index].computer,s[index].sum,s[index].avg);
	system("pause");
}
void	print_menu()
{
	system("cls");
	printf("1. 从数据库读取\n");
	printf("2. 录入数据库\n");
	printf("3. 输入学生成绩\n");
	printf("4. 查看学生数据\n");
	printf("5. 平均分查询\n");
	printf("9. exit\n");
}


void write2file( struct student s[], int count )
{
	FILE	*fp;

	fp = fopen( "c:\\Users\\74265\\Desktop\\daima\\cpl\\c9\\student.dat", "wb");
	fwrite( s, count, sizeof(struct student), fp);
	fclose(fp);

}

void readfromfile( struct student s[], int count )
{
	FILE	*fp;

	fp = fopen( "c:\\Users\\74265\\Desktop\\daima\\cpl\\c9\\student.dat", "rb");
	fread( s, count, sizeof(struct student), fp);
	fclose(fp);

}

void all( struct student *s)
{
	int i,ch;
	float sum,avg;
	printf("1.语文\n2.数学\n3.英语\n4.物理\n5.化学\n6.生物\n7.地理\n8.政治\n9.历史\n0.计算机\n");
	scanf("%d",&ch);
	if(ch==1){
		printf("语文平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].chinese;
		}
		avg=sum/100;
		printf("%f",avg);
	}
	if(ch==2){
		printf("数学平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].math;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==3){
		printf("英语平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].english;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==4){
		printf("物理平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].physics;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==5){
		printf("化学平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].chemistry;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==6){
		printf("生物平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].biology;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==7){
		printf("地理平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].geographical;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==8){
		printf("政治平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].political;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==9){
		printf("历史平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].history;
		}
		avg=sum/100;
		printf("%f",avg);
	}
	if(ch==0){
		printf("计算机平均分:");
		for(i=0;i<100;i++){
			sum=sum+s[i].computer;
		}
		avg=sum/100;
		printf("%f",avg);
	}
	system("pause");


}