#define _CRT_SECURE_NO_WARNINGS //���԰�ȫ��⣬��Ȼʹ��scanf�ᱨ��

//std-standard-��׼�� i -input �� o -output  =��׼������� 
#include <stdio.h>

int num2 = 20;//num2��ȫ�ֱ������ڴ����{}�ⲿ��




//int�����ε���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
int main()//������-��������--ֻ����һ��
{
	//�����������


	printf ("helloworld\n");//����Ļ�����helloworld
	//����-print function -printf - ��ӡ����
	//printf-�⺯��-C���Ա����ṩ�����ǵĺ���
	//���˵Ķ���-���к� - #include
	
	//%c--��ӡ�ַ���ʽ
	//%d--����ʮ��������
	//%f--�����ͣ�С����
	//%p--�Ե�ַ����ʽ��ӡ
	//%x--ʮ����������
	//%0--
	

	char ch = 'A';//�� ch = 'A' �����ڴ棬A���ַ�����
	printf("%c\n",ch);
	
	int chh = 20;
	printf("%d\n", chh);
	
	float f = 2.2f;
	printf("%f\n", f);

	double d = 3.14;
	printf ("%lf\n", d);

	float weight = 55.5f;//�����f��ȷ��ʾ���ǵ�����
	printf("%f\n",weight);


	//�ַ����ݣ�
	//char-�ַ���������
	//short ��int��-������
	//int-����
	//long-������
	//long long-��������
	//float-�����ȸ�����
	//double-˫���ȸ�����

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	//sizeof()���ڴ��С

	int num1 = 10;//num1�Ǿֲ��������ڴ����{}�ڲ���
	int num2 = 15;//�ֲ���������ȫ�ֱ���ͬʱ���ڡ��ֲ��������ȡ����鲻Ҫ��ͬ��
	printf("%d\n", num2);

	{
		int num3 = 17;
	}
	//printf("%d\n", num3);			//��ʱ����num3����������ŵľֲ�����

	//�����������ĺ�
	int n1 = 0;
	int n2 = 0;//�ȴ����������������
	int sum = 0;//ע�⣡�������������������ܻᱨ�����ڶ�����á�
	
	printf("��ֱ�����Ҫ��ӵ�������\n");
	
	scanf ("%d%d",&n1,&n2);//scanf�����뺯��//%d��ʮ����������&��ȡ��ַ
	
	sum = n1 + n2;

	printf("SUM=%d\n", sum);


	extern int two;//extern--������Դ2.c������

	printf("%d\n", two);






	return 0;//���� 0��������
}