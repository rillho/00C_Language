#include <stdio.h>
#include <string.h>
#include <unistd.h>

double pi = 3.141593;

void sleepFun(int second);
void globalVar();

int main(int argc, char **argv)
{
	return 0;
}
void sleepFun(int second)
{
	for (int i = 0; i < second; i++)
	{
		sleep(1);
		printf("\n--- 第%d秒 ---\n", i + 1);
	}
}
void globalVar()
{
	printf("\n\t--- 子函数内第一行代码 ---\n");
	printf("pi = %lf.\n", pi);
	pi = 3;
	printf("pi = %lf.\npi是全局变量，如果pi = 3，表明子函数对全局变量的修改生效！\n", pi);
	printf("\n\t--- 子函数内最后一行行代码 ---\n");
}
/*
	printf("开始调用sleepFun()函数...");
	sleepFun(10);
	printf("调用sleepFun()函数结束...");


	printf("pi = %lf.\n", pi);
	printf("\n\t--- 开始执行子函数 ---\n");
	globalVar();
	printf("\n\t--- 执行子函数结束 ---\n");
	printf("pi = %lf.\n", pi);


	printf("\n\t--- 主函数的第一行代码 ---\n");
	printf("全局变量pi = %lf\n", pi);
	{
		double pi;
		
		printf("\n\t--- 主函数语句块开始 ---\n");
		pi = 3;
		printf("pi = %lf。如果pi = 3，表明局部变量与全局变量冲突，暂时屏蔽全局变量，启用局部变量。", pi);
		printf("\n\t--- 主函数语句块结束 ---\n");
	}
	printf("全局变量pi = %lf。如果pi = 3.141593，局部变量被释放，启用全局变量。\n", pi);
*/