
//���ֳ�������
#include <stdio.h>
#include <string.h>
//enum:ö�ٳ���---һһ�о١�//���磺��ɫ���Ա�
	enum Sex {
		Male,
		Female,
		Secret
		};	//ö�ٳ������ܸ�

int main()
{
	const int num = 10;
	//const--constant--������--���εĳ�����
	//ǰ�����const��֮��Ͳ��ܸ���num��ֵ��
	//��ʱnum�Ǳ��������г����ԣ���������˵num�ǳ�����������Ҫ������λ�ò�����
	printf("%d\n", num);
	//num = 18;//��ʱ�ᱨ����Ϊ֮ǰ����numΪ������
	//printf("%d\n", num);

	#define MAX 10//#define�﷨����ĳ�������ʱMax�ͱ�����Ϊ����
	int arr[MAX] = { 0 }; //����һ��int(����)�������������Ϊarr
	printf("%d\n", MAX);


	enum Sex Bob = Male;//ö�ٷ�ʽ����Bob��Male
	//Bob���Ըģ�Male���ܸ�
	printf("%d\n", Bob);//��ʾö�ٳ���
	
	//arr--����
	char arr1[] = "bit";//�ַ������롰����
	char arr2[] = { 'b', 'i', 't' };//���ַ����롮����
	char arr3[] = { 'b', 'i', 't','\0' };//  '\0'���ַ����Ľ�����־��ֱ��д0Ҳ���ԣ�\0�����ݾ���0
	printf("%s\n", arr1);//%s���ַ�������
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));//strlen--string length--�ַ������ȣ�ͷ�ļ���string��
	printf("%d\n", strlen(arr2));//arr2û�н�����־��\0�����������������
	printf("%d\n", strlen(arr3));//ʵ��֤����'\0'ֻ�ǽ�����־���������ݣ���ռ���ַ�����

	// \0��ת���ַ�--ת��ԭ������˼
	printf("abcn");
	printf("abc\n");//  \n ��ԭ��n����˼ת���ˡ�

	printf("c:\code\test.c\n");//��ʱ��ӡ��ȱ��c��t����\ת����
	//Ҫ����\��ת��
	printf("c:\\code\\test.c\n");//��\ǰ��\���Ժ����\����ת�壬��ʱ�Ϳ���������ӡ��

	//����1������Ļ�ϴ�ӡһ��������'����ô����
	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
	printf("%c\n", '\'');//%c���ַ��͸�ʽ
	printf("%s\n", "\"");//%s���ַ����͸�ʽ

	return 0;
}