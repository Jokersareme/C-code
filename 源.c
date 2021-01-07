#define _CRT_SECURE_NO_WARNINGS //忽略安全检测，不然使用scanf会报错

//std-standard-标准； i -input ； o -output  =标准输入输出 
#include <stdio.h>

int num2 = 20;//num2是全局变量（在代码块{}外部）




//int是整形的意思
//main前面的int表示main函数调用返回一个整形值
int main()//主函数-程序的入口--只能有一个
{
	//这里完成任务


	printf ("helloworld\n");//在屏幕上输出helloworld
	//函数-print function -printf - 打印函数
	//printf-库函数-C语言本身提供给我们的函数
	//别人的东西-打招呼 - #include
	
	//%c--打印字符格式
	//%d--整形十进制数据
	//%f--浮点型（小数）
	//%p--以地址的形式打印
	//%x--十六进制数字
	//%0--
	

	char ch = 'A';//把 ch = 'A' 放入内存，A是字符类型
	printf("%c\n",ch);
	
	int chh = 20;
	printf("%d\n", chh);
	
	float f = 2.2f;
	printf("%f\n", f);

	double d = 3.14;
	printf ("%lf\n", d);

	float weight = 55.5f;//后面的f明确表示数是单精度
	printf("%f\n",weight);


	//字符数据：
	//char-字符数据类型
	//short （int）-短整形
	//int-整形
	//long-长整形
	//long long-更长整形
	//float-单精度浮点数
	//double-双精度浮点数

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	//sizeof()，内存大小

	int num1 = 10;//num1是局部变量（在代码块{}内部）
	int num2 = 15;//局部变量，与全局变量同时存在。局部变量优先。建议不要相同。
	printf("%d\n", num2);

	{
		int num3 = 17;
	}
	//printf("%d\n", num3);			//此时报错，num3是上面大括号的局部变量

	//计算两个数的和
	int n1 = 0;
	int n2 = 0;//先创立两个数和求的数
	int sum = 0;//注意！！定义变量放在下面可能会报错，放在顶部最好。
	
	printf("请分别输入要相加的两个数\n");
	
	scanf ("%d%d",&n1,&n2);//scanf是输入函数//%d是十进制整数，&是取地址
	
	sum = n1 + n2;

	printf("SUM=%d\n", sum);


	extern int two;//extern--调用了源2.c的数据

	printf("%d\n", two);






	return 0;//返回 0（整数）
}