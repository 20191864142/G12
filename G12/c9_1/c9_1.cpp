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

	printf("����ѧ��ѧ��");
	scanf("%d", &index);

	printf("ѧ��ѧ��:[%d]\n", s[index].no);
	scanf("%d", &s[index].no);

	printf("����ѧ������:[%s]\n", s[index].name);
	scanf("%s", &s[index].name);
	
	printf("1.����¼��ɼ�\n2.������¼�ɼ�\n");
	scanf("%d",&m);
	
	if(m==1){
		printf("����:");
		scanf("%f",&s[index].chinese);
		printf("��ѧ::");
		scanf("%f",&s[index].math);
		printf("Ӣ��:");
		scanf("%f",&s[index].english);
		printf("����:");
		scanf("%f",&s[index].physics);
		printf("��ѧ:");
		scanf("%f",&s[index].chemistry);
		printf("����:");
		scanf("%f",&s[index].biology);
		printf("��ʷ:");
		scanf("%f",&s[index].history);
		printf("����:");
		scanf("%f",&s[index].political);
		printf("����:");
		scanf("%f",&s[index].geographical);
		printf("�����:");
		scanf("%f",&s[index].computer);
	}
	if(m==2){
		while(1){
		printf("��ѡ��ѧ��\n");
		printf("1.���� 2.��ѧ 3.Ӣ�� 4.���� 5.��ѧ 6.���� 7.��ʷ 8.���� 9.���� 10.����� 0.�˳�");
		scanf("%d",&n);
		if(n==1){
			printf("����");
			scanf("%f",&s[index].chinese);
		}
		if(n==2){
			printf("��ѧ");
			scanf("%f",&s[index].math);
		}
		if(n==3){
			printf("Ӣ��");
			scanf("%f",&s[index].english);
		}
		if(n==4){
			printf("����");
			scanf("%f",&s[index].physics);
		}
		if(n==5){
			printf("��ѧ");
			scanf("%f",&s[index].chemistry);
		}
		if(n==6){
			printf("����");
			scanf("%f",&s[index].biology);
		}
		if(n==7){
			printf("��ʷ");
			scanf("%f",&s[index].history);
		}
		if(n==8){
			printf("����");
			scanf("%f",&s[index].political);
		}
		if(n==9){
			printf("����");
			scanf("%f",&s[index].geographical);
		}
		if(n==10){
			printf("�����");
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
	
	printf("����ѧ��ѧ��:");
	scanf("%d",&index);
	printf("ѧ��%d ����%s ����%0.2f ��ѧ%0.2f Ӣ��%0.2f ����%0.2f ��ѧ%0.2f ����%0.2f ��ʷ%0.2f ����%0.2f ����%0.2f �����%0.2f �ܷ�%0.2f\n",s[index].no,s[index].name,s[index].chinese,s[index].math,s[index].english,s[index].physics,s[index].chemistry,s[index].biology,s[index].history,s[index].political,s[index].geographical,s[index].computer,s[index].sum,s[index].avg);
	system("pause");
}
void	print_menu()
{
	system("cls");
	printf("1. �����ݿ��ȡ\n");
	printf("2. ¼�����ݿ�\n");
	printf("3. ����ѧ���ɼ�\n");
	printf("4. �鿴ѧ������\n");
	printf("5. ƽ���ֲ�ѯ\n");
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
	printf("1.����\n2.��ѧ\n3.Ӣ��\n4.����\n5.��ѧ\n6.����\n7.����\n8.����\n9.��ʷ\n0.�����\n");
	scanf("%d",&ch);
	if(ch==1){
		printf("����ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].chinese;
		}
		avg=sum/100;
		printf("%f",avg);
	}
	if(ch==2){
		printf("��ѧƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].math;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==3){
		printf("Ӣ��ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].english;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==4){
		printf("����ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].physics;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==5){
		printf("��ѧƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].chemistry;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==6){
		printf("����ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].biology;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==7){
		printf("����ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].geographical;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==8){
		printf("����ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].political;
		}
		avg=sum/100;
		printf("%f",avg);
	}	
	if(ch==9){
		printf("��ʷƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].history;
		}
		avg=sum/100;
		printf("%f",avg);
	}
	if(ch==0){
		printf("�����ƽ����:");
		for(i=0;i<100;i++){
			sum=sum+s[i].computer;
		}
		avg=sum/100;
		printf("%f",avg);
	}
	system("pause");


}