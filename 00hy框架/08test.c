#include "__hy__.h"

typedef struct GIRL_STRU
{
  char name[51];    // 姓名
  int  age;         // 年龄
  int  height;      // 身高，单位：cm
  char sc[31];      // 身材，火辣；普通；飞机场
  char yz[31];      // 颜值，漂亮；一般；歪瓜裂枣
} GIRL;             // sizeof(struct GIRL_STRU) = 136

int main(int argc, char *argv[], char *envp[])
{
    //  编写示例程序，从界面上输入五名超女的数据，存放在struct st_girl结构体数组中，然后把结构体数组以二进制的方式写入文件
    return 0;
}
/*
    printf("argc = %d\n", argc);

    for (unsigned long ul = 0; ul < argc; ul++)
    {
        printf("argv[%lu]：=%s=\n", ul, argv[ul]);
    }


    for (unsigned long ul = 0; envp[ul] != 0; ul++)
    {
        printf("%s\n", envp[ul]);
    }
    int ii = 0;
    while (envp[ii] != 0)
    {
        printf("%s\n", envp[ii]);
        ii++;
    }


    FILE *fp = 0;

    if (0 == (fp = fopen("__hy__.h", "r")))
    {
        printf("打开文件失败！\n");
    }
    else
    {
        printf("打开文件成功！\n");
    }

    fclose(fp);


    FILE *fp = 0;

    if (0 == (fp = fopen("08test_file.txt", "w")))
    {
        printf("08test_file.txt open failed.\n");

        return 0;
    }
    else
    {
        for (unsigned long ul = 1; ul <= 3; ul++)
        {
            fprintf(fp, "=%lu=\n", ul);
        }

        fclose(fp);
    }


    FILE *fp = 0;
    char str[301];

    if (0 == (fp = fopen("08test.c_file.txt", "r")))
    {
        printf("\"08test.c_file.txt\" open failed.\n");
    }
    else
    {
        memset(str, 0, sizeof(str));    // 格式化str
        while (0 != fgets(str, 3, fp))
        {
            printf("=%s=", str);
        }
    }

    fclose(fp);


    FILE *fp = 0;
    char str[301];

    // printf("=%p\n=", fp);
    // fclose(fp);
    // return 0;

    if (0 == (fp = fopen("08test.c_file1", "r")))
    {
        printf("\"08test.c_file1\" open failed.\n");
    }
    else
    {
        printf("\"08test.c_file1\" open succeeded.\n");

        // memset(str, 0, sizeof(301));

        // printf("请输入您想要告诉何岩的话：");
        // scanf("%s", str);
        // fprintf(fp, "=%s=", str);
        printf("fp=%p=\n", fp = fopen("08test.c_file1", "r"));
        printf("fp=%p=\n", fp);

        fclose(fp);
        printf("关闭后：\n");
        printf("fp=%p=\n", fp);
    }


    FILE *fp;
    char str[302];

    fp = 0;
    if (0 == (fp = fopen("08test.c_file2", "w")))
    {
        printf("\"08test.c_file2\" open failed.\n");
    }
    else
    {
        printf("\"08test.c_file2\" open succeeded.\n");
        for (unsigned long ul = 0; ul < 3; ul++)
        {
            fprintf(fp, "123456789\n");
        }

        fclose(fp);
    }

    FILE *stream;

    stream = 0;
    if (0 == (stream = fopen("08test.c_file2", "r")))
    {
        printf("loading \"08test.c_file2\" failed.\n");
    }
    printf("preparing \"08test.c_file2\" ...\n");
    while (1)
    {
        bzero(str, sizeof(str));
        if (0 == fgets(str, 3, fp))
        {
            break;
        }
        printf("=%s=", str);
    }

    fclose(stream);


    FILE *stream;

    stream = 0;
    if (0 == (stream = fopen("08test.c_file3", "w")))
    {
        printf("\"08test.c_file3\" open failed!\n");

        return -1;
    }
    else
    {
        printf("\"08test.c_file3\" open succeeded!\n");
        printf("writing into \"08test.c_file3\" ...\n");

        GIRL xishi;
        memset(&xishi, 0, sizeof(struct GIRL_STRU));
        strcpy(xishi.name, "西施");
        xishi.age = 18;
        xishi.height = 170;
        strcpy(xishi.sc, "火辣");
        strcpy(xishi.yz, "漂亮");
        sleep(3);
        fwrite(&xishi, 1, sizeof(struct GIRL_STRU), stream);
        printf("\"西施\" writed!\n");

        GIRL furongmeimei;
        memset(&furongmeimei, 0, sizeof(struct GIRL_STRU));
        strcpy(furongmeimei.name, "芙蓉妹妹");
        furongmeimei.age = 38;
        furongmeimei.height = 166;
        strcpy(furongmeimei.sc, "膘肥体壮");
        strcpy(furongmeimei.yz, "让人终生不忘");
        sleep(3);
        fwrite(&furongmeimei, 1, sizeof(struct GIRL_STRU), stream);
        printf("\"芙蓉妹妹\" writed!\n");

        fclose(stream);
    }

A:
    printf("Load \"08test.c_file3\"?");
    char ch;
    bzero(&ch, sizeof(ch));
    ch = getchar();
    while (ch != 'y' && ch != 'n')
    {
        goto A;
    }
    if (ch == 'y')
    {
        FILE *fp;

        fp = 0;
        if (0 == (fp = fopen("08test.c_file3", "r")))
        {
            printf("\"08test.c_file3\" open failed!\n");
        }
        else
        {
            printf("\"08test.c_file3\" open succeeded!\n");
            printf("loading \"08test.c_file3\" ...\n");

            GIRL xishi;
            memset(&xishi, 0, sizeof(struct GIRL_STRU));
            if (0 == fread(&xishi, 1, sizeof(struct GIRL_STRU), fp))
            {
                printf("loading \"西施\" failed!\n");
            }
            else
            {
                sleep(3);
                printf("loading \"西施\" succeeded!\n");
                printf("姓名：%s   年龄：%-3d岁\n", xishi.name, xishi.age);
                printf("身高：%-3dcm   身材：%s\n", xishi.height, xishi.sc);
                printf("颜值：%s\n", xishi.yz);
            }

            GIRL furongmeimei;
            memset(&furongmeimei, 0, sizeof(struct GIRL_STRU));
            if (0 == fread(&furongmeimei, 1, sizeof(struct GIRL_STRU), fp))
            {
                printf("loading \"芙蓉妹妹\" failed!\n");
            }
            else
            {
                sleep(3);
                printf("loading \"芙蓉妹妹\" succeeded!\n");
                printf("姓名：%s   年龄：%-3d岁\n", furongmeimei.name, furongmeimei.age);
                printf("身高：%-3dcm   身材：%s\n", furongmeimei.height, furongmeimei.sc);
                printf("颜值：%s\n", furongmeimei.yz);
            }

        fclose(fp);
        }
    }
    else
    {
        return 0;
    }


    FILE *stream;

    stream = 0;
    if (0 == (stream = fopen("08test.c_file2", "w")))
    {
        return -1;
    }
    else
    {
        for (unsigned long ul = 0; ul < 3; ul++)
        {
            for (unsigned long ull = 1; ull < 10; ull++)
            {
                fprintf(stream, "%lu", ull);
            }

            fprintf(stream, "\n");
        }

        fclose(stream);
    }

    FILE *fp;
        return -1;
    }
    else
    {
        printf("=%ld=\n", ftell(fp));   // 30

        rewind(fp);

        printf("=%ld=\n", ftell(fp));   // 0

        fseek(fp, 5, 0);

        printf("=%ld=\n", ftell(fp));   // 5

        fseek(fp, 5, 1);

        printf("=%ld=\n", ftell(fp));   // 10

        fseek(fp, 100000, 2);

        printf("ret=%d=\n", fseek);
        

        fclose(stream);
    }    fp = 0;
    if (0 == (fp = fopen("08test.c_file2", "a")))
    {
        return -1;
    }
    else
    {
        printf("=%ld=\n", ftell(fp));   // 30

        rewind(fp);

        printf("=%ld=\n", ftell(fp));   // 0

        fseek(fp, 5, 0);

        printf("=%ld=\n", ftell(fp));   // 5

        fseek(fp, 5, 1);

        printf("=%ld=\n", ftell(fp));   // 10

        fseek(fp, 100000, 2);

        printf("ret=%d=\n", fseek);
        

        fclose(stream);
    }


    FILE *fp;
    char str[1024];

    fp = 0;
    if (0 == (fp = fopen("log", "w")))
    {
        return -1;
    }
    else
    {
        bzero(str, sizeof(str));
        strcpy(str, "1111111111111111111111111111111111111111111111111111"\
                    "2222222222222222222222222222222222222222222222222222"\
                    "3333333333333333333333333333333333333333333333333333"\
                    "4444444444444444444444444444444444444444444444444444"\
                    "5555555555555555555555555555555555555555555555555555"\
                    "6666666666666666666666666666666666666666666666666666"\
                    "7777777777777777777777777777777777777777777777777777"\
                    "8888888888888888888888888888888888888888888888888888");
        // printf("=%s=", str);

        // return 0;

        for (unsigned long ul = 0; ul < 300; ul++)
        {
            fprintf(fp, "%s\n", str);

            sleep(1);
        }
    }
*/