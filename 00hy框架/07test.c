#include "__hy__.h"

typedef struct STUDENT_STRU
{
    unsigned char name[32];     /* student's name */
    unsigned char age;          /* student's age */
    unsigned char sex;          /* student's sex, as follows */
    /* 0 - FEMALE; 1 - MALE */
    unsigned int teacher_ind;   /* his teacher index */
} STUDENT;

struct st_girl
{
  char name[51];   // 姓名
  int  age;        // 年龄
  int  height;     // 身高，单位：cm
  double weight;     // 体重，单位：kg
  char sc[31];     // 身材，火辣；普通；飞机场
  char yz[31];     // 颜值，漂亮；一般；歪瓜裂枣
};

int main(int argc, char *argv[])
{
    return 0;
}
/*
    char str[301] = "1234567890";

    RPad(str, 'a', 25);

    printf("=%s=\n", str);


    char str[301] = "12345678900987654321";

    LPad(str, 'a', 25);

    printf("=%s=\n", str);


    har str[301] = "12345678900987654321";

    DeleteMStr(str, "1234567890");

    printf("=%s=\n", str);


    char str[301] = "q";

    printf("\n\n\t---测试ToUpper()函数---\n");
    printf("=%s=--->>>", str);
    ToUpper(str);
    printf("=%s=\n", str);

    printf("\n\n\t---测试ToLower()函数---\n");
    printf("=%s=--->>>", str);
    ToLower(str);
    printf("=%s=\n", str);

    printf("\n\n\t---测试IsDigit()函数---\n");
    printf("=%s=--->>>%d", str, IsDigit(str));

    printf("\n\n\t---测试IsUpper()函数---\n");
    printf("=%s=--->>>%d", str, IsUpper(str));

    printf("\n\n\t---测试IsLower()函数---\n");
    printf("=%s=--->>>%d", str, IsLower(str));

    printf("\n\n\t---测试IsASCII()函数---\n");
    printf("=%s=--->>>%d", str, IsASCII(str));


    int a[10];
    int b[10];

    memset(a, 0, sizeof(a));
    memset(b, 15, sizeof(b));

    printf("=%d=\n", a[0]);
    printf("=%d=\n", a[9]);
    printf("=%d=\n", b[0]);
    printf("=%d=\n", b[9]);


    char str[10];

    memset(str, 0, sizeof(str));
    printf("=%s=\n", str);

    memset(str, 'a', sizeof(str));
    printf("=%s=\n", str);


    printf("=%020d=\n", 1234567890);
    printf("=%020s=\n", "1234567890");
    printf("=%020lf=\n", 1234567890.0);


    printf("=%012.2lf=", 123.5);


    char str[301];

    sprintf(str, "%d%c%s", 1, '2', "34567890");

    printf("=%s=\n", str);

    snprintf(str, 07, "%d%c%s", 1, '2', "34567890");

    printf("=%s=\n", str);


    char str[301];

    bzero(str, sizeof(str));

    strcpy(str, "=我是第一行，\
                  我也是第一行，中间有空格。=");

    printf("=%s=\n", str);


    char str[302];

    bzero(str, sizeof(str));

    strcpy(str, "不消"\
                "计较"\
                "与安排");

    printf("=%s=\n", str);


    // 编写一个程序，把超女结构体数据拼成一个XML字符串
    struct st_girl xishi;
    
    printf("\n\n--------------------------- 初始化 ---------------------------\n\n");
    bzero(&xishi, sizeof(xishi));
    printf("姓名：%-22s\t年龄：%-22d\n\
身高：%-22dcm\t体重：%-22.1lfkg\n\
身材：%-22s\t颜值：%-22s\n", xishi.name,
                       xishi.age,
                       xishi.height,
                       xishi.weight,
                       xishi.sc,
                       xishi.yz);

    printf("\n\n-------------------------- 载入数据 --------------------------\n\n");
    strcpy(xishi.name, "西施");
    xishi.age = 18;
    xishi.height = 168;
    xishi.weight = 48.5;
    strcpy(xishi.sc, "火辣");
    strcpy(xishi.yz, "漂亮");
    printf("姓名：%-22s\t年龄：%-22d\n\
身高：%-22dcm\t体重：%-22.1lfkg\n\
身材：%-22s\t颜值：%-22s\n", xishi.name,
                       xishi.age,
                       xishi.height,
                       xishi.weight,
                       xishi.sc,
                       xishi.yz);

    printf("\n\n------------------------- 生成XML字符串 -------------------------\n\n");
    char xml[301];
    bzero(xml, sizeof(xml));
    sprintf(xml, "<name>%s</name>"
                 "<age>%d</age>"
                 "<height>%d</height>"
                 "<weight>%.1lf</weight>"
                 "<sc>%s</sc>"
                 "<yz>%s</yz>",
                 xishi.name,
                 xishi.age,
                 xishi.height,
                 xishi.weight,
                 xishi.sc,
                 xishi.yz);
    printf("=%s=\n", xml);


    int integer;
    int height;
    double weight;
    char xml[301];
    char name[301];
    char sc[301];
    char yz[301];
    
    integer = -1;
    height = -1;
    weight = -1;
    strcpy(xml, "<name>西施</name><age>18</age><height>168</height><weight>48.5</weight><sc>火辣</sc><yz>漂亮</yz>");
    memset(name, 0, sizeof(name));
    memset(sc, 0, sizeof(sc));
    memset(yz, 0, sizeof(yz));

    // age
    if (0 == GetXMLBuffer_Int(xml, "age", &integer))
    {
        printf("age = %d\n", integer);
    }
    else
    {
        printf("age no found\n");
    }
    // height
    if (0 == GetXMLBuffer_Int(xml, "height", &height))
    {
        printf("height = %d\n", height);
    }
    else
    {
        printf("height no found\n");
    }
    // string
    if (0 == GetXMLBuffer_Str(xml, "name", name))
    {
        printf("name = %s\n", name);
    }
    else
    {
        printf("name no found\n");
    }
    if (0 == GetXMLBuffer_Str(xml, "sc", sc))
    {
        printf("sc = %s\n", sc);
    }
    else
    {
        printf("sc no found\n");
    }
    if (0 == GetXMLBuffer_Str(xml, "yz", yz))
    {
        printf("yz = %s\n", yz);
    }
    else
    {
        printf("yz no found\n");
    }
    // weight
    if (0 == GetXMLBuffer_Double(xml, "weight", &weight))
    {
        printf("weight = %.1lf\n", weight);
    }
    else
    {
        printf("weight no found\n");
    }
*/