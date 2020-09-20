#include "__hy__.h"

int main(int argc, char *argv[])
{
	return 0;
}
/*
	char *str = "中华人民共和国";
	char str2[15] = "中华人民共和国";

	printf("=%s=\n", str);
	strcpy(str2, "杨玉环");
	printf("=%s=\n", str2);


	printf("sizeof(int) = %d(Bytes)\n", sizeof(int));	// 4
	printf("sizeof(long) = %d(Bytes)\n", sizeof(long));	// 8
	printf("sizeof(short) = %d(Bytes)\n", sizeof(short));	// 2


	int a = 0B0;
	int b = 0b1;
	int c = 0B10;
	int d = 0b11;
	int e = 0B100;
	int f = 0b101;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	printf("e = %d\n", e);
	printf("f = %d\n", f);


	int a = 1;
	short b = 2;
	long c = 3;
	unsigned int d = 4;
	unsigned short e = 5;
	unsigned long f = 6;

	printf("%d\n", a);
	printf("%hd\n", b);
	printf("%ld\n", c);
	printf("%u\n", d);
	printf("%hu\n", e);
	printf("%lu\n", f);


	char *str = "4294967295";			// test atoi()
	char *str2 = "18446744073709551615";// test atol()

	printf("%u\n", atoi(str));
	printf("%lu\n", atol(str2));


	// printf("time(0) returns %d。", time(0));
	srand(1596612891);
	
	for (int i = 0; i < 10; i++)
	{
		sleep(1);
		printf("\n\t--- 第%d秒 ---\n", i + 1);
		printf("随机数：%d", rand());
	}


	// 编写示例程序，判断short、unsigned short、int、unsigned int、long、unsigned long占用内存的字节数。
	printf("%d %d %d %d %d %d", sizeof(short),			// 2
		                        sizeof(unsigned short),	// 2
		                        sizeof(int),			// 4
		                        sizeof(unsigned int),	// 4
		                        sizeof(long),			// 8
		                        sizeof(unsigned long));	// 8


	// 编写示例程序，从界面上输入数字的字符串，存放在字符串变量中，然后用atoi函数转换为整数，加上100后再输出到屏幕。
	// int --->>> 2147483647
	// unsigned int --->>> 4294967295
	char str[12];

	printf("请输入数字的字符串：");
	scanf("%s", str);

	printf("Converted to %d.\n", atoi(str));
	printf("Adding up 100 reaches %d.\n", atoi(str) + 100);


	printf("size of \"long long int\" is %d\n.", sizeof(long long int));
	
	printf("\n\t--- MAX ---\n");
	printf("%lld\n", 9223372036854775807);
	printf("%lld", 9223372036854775808);

	printf("\n\t--- MIN ---\n");
	printf("%lld\n",-9223372036854775808);
	printf("%lld",-9223372036854775809);


	// 编写示例程序，测试short、unsigned short、int、unsigned、long、unsigned long赋值超出了取值范围的后果。
	printf("\n\n\t--- short ---\t\n\n");
	printf("MAX:%-20hd    MIN:%hd\n", 32767, -32768);
	printf("MAX:%-20hd    MIN:%hd", 32768, -32769);
	
	printf("\n\n\t--- unsigned short ---\t\n\n");
	printf("MAX:%-20hu    MIN:%hu\n", 65535, 0);
	printf("MAX:%-20hu    MIN:%hu", 65536, -1);
	
	printf("\n\n\t--- int ---\t\n\n");
	printf("MAX:%-20d    MIN:%d\n", 2147483647, -2147483648);
	printf("MAX:%-20d    MIN:%d", 2147483648, -2147483649);
	
	printf("\n\n\t--- unsigned ---\t\n\n");
	printf("MAX:%-20u    MIN:%u\n", 4294967295, 0);
	printf("MAX:%-20u    MIN:%u", 4294967296, -1);
	
	printf("\n\n\t--- long ---\t\n\n");
	printf("MAX:%-20ld    MIN:%ld\n", 9223372036854775807, -9223372036854775808);
	printf("MAX:%-20ld    MIN:%ld", 9223372036854775808, -9223372036854775809);
	
	printf("\n\n\t--- unsigned long ---\t\n\n");
	printf("MAX:%-20lu    MIN:%lu\n", 18446744073709551615, 0);
	printf("MAX:%-20lu    MIN:%lu", 18446744073709551616, -1);


	printf("%d\n", ABS(-2147483648));
	printf("%ld\n", LABS(-9223372036854775808));
	printf("%ld\n", labs(-9223372036854775808));


	char chr;

	scanf("%c", &chr);
	printf("%c--->>>%d\n", chr, ctoi(chr));


	printf("2 ^ 3 = %lu\n", POW(2, 3));
	printf("10 ^ 3 = %lu\n", POW(10, 3));


	// 编写示例程序，把字符串里的数字全部加起来，例如字符串是"90576483975423"，全部加起来结果是72。
	int sum;
	int tmp;
	char str[52];

	sum = 0;
	tmp = 0;
	memset(str, 0, sizeof(str));

	printf("请输入字符串：");
	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)
	{
		if ((tmp = ctoi(str[i])) != -1)
		{
			sum += tmp;
		}
	}

	printf("%s--->>>%d", str, sum);


	char nptr[52];

	memset(nptr, 0, sizeof(nptr));

	printf("请输入字符串：");
	scanf("%s", nptr);

	printf("\n\t--- ATOI()函数 ---\n");
	printf("%s\n%d\n", nptr, ATOI(nptr));
	
	printf("\n\t--- ATOL()函数 ---\n");
	printf("%s\n%ld\n", nptr, ATOL(nptr));
*/