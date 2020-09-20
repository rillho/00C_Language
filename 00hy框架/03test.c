#include "__hy__.h"

int main(int argc, char *argv[])
{


    return 0;
}
/*
    // 生成五十二个随机数，存放在数组中，范围是1-52，不允许重复，最后在屏幕上显示出来。
    int array[52];

    srand(time(0));
    memset(array, 0, sizeof(array));
    for (int i = 0; i < 52; i++)
    {
A:
        array[i] = rand() % 52 + 1;
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                goto A;
            }
        }
    }


    // print array[52]
    for (int i = 0; i < 52; i++)
    {
        printf("%2d\n", array[i]);
    }

        // 编写一个扑克的发牌程序，一副牌除了大小王，还有52张牌，随机洗牌，再发给四个人。
    // （1）把一副牌的全部牌面可以用1-52的数值表示，数组是一个好选择；
    // （2）洗牌就是生成范围在1-52之间不重复的随机数。
    // （3）定义四个数组，代表四个人，把洗好的52个数按顺序赋给四个数组就行了。如果不想定义四个数组，用一个二维数组也行。
    // （4）把四个数组的值显示出来，就是每个人的牌面。
    int array[52];
    char player[4][32] = {"何红卫", "尚红星", "何  岩", "张家熙"};

    memset(array, 0, sizeof(array));

    createNoRepeatArray(1, 52, array);
    for (int i = 0; i < 52; i++)
    {
        printf("%2d\n", array[i]);
    }

    printf("\n\n\t\t\t--- 发牌结果 ---\n\n");
    int j = 0;
    for (int i = 1; i <= 52; i++)
    {
        if ((i - 1) % 13 == 0)
        {
            printf("玩家%s：", player[j++]);
        }
        printf("%2d   ", array[i - 1]);
        if (i % 13 == 0)
        {
            printf("\n");
        }
    }


    printf("=%c=\n", '\n');
    printf("=%c=\n", '\\');
    printf("=%c=\n", '\'');
    printf("=%c=\n", '\"');
    printf("=%c=\n", '\\');
    printf("='=\n");


    char b = 'b';

    printf("%d\n", -1 + b);


    printf("%d\n", ISALPHA('A'));   // 若ch是字母（'A'-'Z','a'-'z'）返回非0值，否则返回0。
    printf("%d\n", ISALNUM('0'));   // 若ch是字母（'A'-'Z','a'-'z'）或数字（'0'-'9'），返回非0值,否则返回0。
    printf("%d\n", ISDIGIT('0'));   // 若ch是数字（'0'-'9'）返回非0值，否则返回0。
    printf("%d\n", ISLOWER('a'));   // 若ch是小写字母（'a'-'z'）返回非0值，否则返回0。
    printf("%d\n", ISUPPER('A'));   // 若ch是大写字母（'A'-'Z'）返回非0值，否则返回0。
    printf("%c\n", TOLOWER('A'));   // 若ch是大写字母（'A'-'Z'）返回相应的小写字母（'a'-'z'）。
    printf("%c\n", TOUPPER('a'));   // 若ch是小写字母（'a'-'z'）返回相应的大写字母（'A'-'Z'）


    printf("%c--->>>%d\n", '0', c09toi09('0'));
    printf("%c--->>>%d\n", '1', c09toi09('1'));
    printf("%c--->>>%d\n", '2', c09toi09('2'));
    printf("%c--->>>%d\n", '3', c09toi09('3'));
    printf("%c--->>>%d\n", '4', c09toi09('4'));
    printf("%c--->>>%d\n", '5', c09toi09('5'));
    printf("%c--->>>%d\n", '6', c09toi09('6'));
    printf("%c--->>>%d\n", '7', c09toi09('7'));
    printf("%c--->>>%d\n", '8', c09toi09('8'));
    printf("%c--->>>%d\n", '9', c09toi09('9'));

    
    signed char sc = 0;
    unsigned char usc = 0;

    printf("\n\n\t--- signed char ---\n\n");
    printf("MAX->%d    MIN->%d\n", 127, -128);
    printf("错误：\nMAX->%d    MIN->%d", 128, -129);
    printf("\n\n\t--- unsigned char ---\n\n");
    printf("MAX->%u    MIN->%u\n", 255, 0);
    printf("错误：\nMAX->%u    MIN->%u", 256, -1);


    printf("=%cd=\n", '%');


    printf("=%%=\n");


    double a = 9.99;
    double b = 9.99999;
    double c = 9.99999999;
    double d = 9.99999999999;
    double e = 9.99999999999999;

    if (a == 9.99)
    {
        printf("a = 9.99\n");
    }
    else
    {
        printf("float测不准9.99！\n");
    }

    if (b == 9.99999)
    {
        printf("a = 9.99999\n");
    }
    else
    {
        printf("float测不准9.99999！\n");
    }

    if (c == 9.99999999)
    {
        printf("b = 9.99999999\n");
    }
    else
    {
        printf("float测不准9.99999999！\n");
    }

    if (d == 9.99999999999)
    {
        printf("d = 9.99999999999\n");
    }
    else
    {
        printf("float测不准9.99999999999！\n");
    }

    if (e == 9.99999999999999)
    {
        printf("e = 9.99999999999999\n");
    }
    else
    {
        printf("float测不准9.99999999999999！\n");
    }


    // 编写示例程序，测试浮点数赋值超过取值范围的后果。
    float fa = 12345.098;
    double db = 1234567890.098765;
    
    fa = db;

    printf("=fa=%f\n", fa);
    printf("=db=%lf\n", db);


    // 编写示例程序，测试把浮点数赋给整数变量的结果，并思考原因。
    int ii;
    double dj = 1234567890.098765;

    ii = dj;
    printf("ii=%d=gauss=1234567890=\n", ii);
    // printf("ii=%lf=gauss=1234567890.000000=\n", ii);
    printf("dj=%lf=gauss=1234567890.098765=\n", dj);


    double dd1 = 1234567890.098765;
    double dd2 = -1234567890.098765;

    // 求双精度实数x的绝对值
    // double FABS(const double x);
    printf("=%lf=绝对值=%lf=\n", dd1, FABS(dd1));
    printf("=%lf=绝对值=%lf=\n", dd2, FABS(dd2));
    // double舍小数，取整数
    // double RoundDecimal(const double x);
    printf("\n\n");
    printf("=%lf=舍小数，取整数=%lf=\n", dd1, RoundDecimal(dd1));
    printf("=%lf=舍小数，取整数=%lf=\n", dd2, RoundDecimal(dd2));
    // double四舍五入
    // double ROUND(const double x);
    printf("\n\n");
    printf("=%lf=四舍五入=%lf=\n", 1234567890.499999, ROUND(1234567890.499999));
    printf("=%lf=四舍五入=%lf=\n", 1234567890.500001, ROUND(1234567890.500001));
    // double向上取整数
    // double CEIL(const double x);
    printf("\n\n");
    printf("=%lf=向上取整数=%lf=\n", dd1, CEIL(dd1));
    printf("=%lf=向上取整数=%lf=\n", dd2, CEIL(dd2));
    // double向下取整数
    // double FLOOR(const double x);
    printf("\n\n");
    printf("=%lf=向下取整数=%lf=\n", dd1, FLOOR(dd1));
    printf("=%lf=向下取整数=%lf=\n", dd2, FLOOR(dd2));
    // 把双精度val分解成整数部分和小数部分，整数部分存放在ip所指的变量中，返回小数部分。
    // double MODF(double val,double *ip);
    printf("\n\n");
    double dd3 = 0;
    double dd4 = 0;
    double dd5 = MODF(dd1, &dd3);   // 小数部分
    double dd6 = MODF(dd2, &dd4);   // 小数部分
    printf("=%lf=整数%lf=小数%lf=\n", dd1, dd3, dd5);
    printf("=%lf=整数%lf=小数%lf=\n", dd2, dd4, dd6);


    printf("=%lf=四舍五入=%lf=\n", 1234567890.499999, ROUND(1234567890.499999));
    printf("=%lf=四舍五入=%lf=\n", 1234567890.500001, ROUND(1234567890.500001));
    printf("=%lf=四舍五入=%lf=\n", -1234567890.499999, ROUND(-1234567890.499999));
    printf("=%lf=四舍五入=%lf=\n", -1234567890.500001, ROUND(-1234567890.500001));
*/