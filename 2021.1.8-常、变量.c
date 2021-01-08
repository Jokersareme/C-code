
//几种常、变量
#include <stdio.h>
#include <string.h>
//enum:枚举常量---一一列举。//比如：颜色、性别。
	enum Sex {
		Male,
		Female,
		Secret
		};	//枚举常量不能改

int main()
{
	const int num = 10;
	//const--constant--常属性--修饰的常变量
	//前面加了const，之后就不能更改num的值了
	//此时num是变量，又有常属性，所以我们说num是常变量，在需要常量的位置不能用
	printf("%d\n", num);
	//num = 18;//此时会报错，因为之前定义num为常变量
	//printf("%d\n", num);

	#define MAX 10//#define语法定义的常量，此时Max就被定义为常量
	int arr[MAX] = { 0 }; //定义一个int(整形)类变量，变量名为arr
	printf("%d\n", MAX);


	enum Sex Bob = Male;//枚举方式定义Bob是Male
	//Bob可以改，Male不能改
	printf("%d\n", Bob);//显示枚举常量
	
	//arr--数组
	char arr1[] = "bit";//字符串放入“”中
	char arr2[] = { 'b', 'i', 't' };//单字符放入‘’中
	char arr3[] = { 'b', 'i', 't','\0' };//  '\0'是字符串的结束标志，直接写0也可以，\0的内容就是0
	printf("%s\n", arr1);//%s是字符串类型
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));//strlen--string length--字符串长度，头文件（string）
	printf("%d\n", strlen(arr2));//arr2没有结束标志“\0”，所以是随机长度
	printf("%d\n", strlen(arr3));//实验证明，'\0'只是结束标志，不算内容，不占据字符长度

	// \0是转义字符--转变原来的意思
	printf("abcn");
	printf("abc\n");//  \n 把原来n的意思转变了。

	printf("c:\code\test.c\n");//此时打印会缺少c和t，被\转义了
	//要运用\的转义
	printf("c:\\code\\test.c\n");//在\前加\，对后面的\进行转义，此时就可以正常打印了

	//问题1：在屏幕上打印一个单引号'，怎么做？
	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
	printf("%c\n", '\'');//%c是字符型格式
	printf("%s\n", "\"");//%s是字符串型格式

	return 0;
}