#include "__hy__.h"

typedef struct GIRL_STRU
{
    char name[50];         /* 超女的姓名 */
    int age;               /* 超女的年龄 */
    int height;            /* 超女的身高，单位：厘米cm */
    char stature[30];      /* 超女的身材 */
    /* 火辣 普通 飞机场 */
    char facescore[30];    /* 超女的颜值 */
    /* 漂亮；一般；歪瓜裂枣 */
} GIRL;                    /* 120 Bytes */

int main(int argc, char *argv[], char *envp[])
{
    return 0;
}
/*
    GIRL girl[5];

    // 从界面上输入五名超女的数据，存放在struct st_girl结构体数组中
    printf("inputting datas...\n");
    bzero(girl, sizeof(girl));
    for (unsigned long ul = 0; ul < 4; ul++)
    {
        printf("name: ");
        scanf("%s", girl[ul].name);
        printf("age: ");
        scanf("%d", &girl[ul].age);
        printf("height: ");
        scanf("%d", &girl[ul].height);
        printf("stature: ");
        scanf("%s", girl[ul].stature);
        printf("facescore: ");
        scanf("%s", girl[ul].facescore);
        printf("datas writed successfully!\n");
    }
    sleep(1);
    printf("4 women's datas writed successfully!\n");

    // 然后把结构体数组以二进制的方式写入文件
    FILE *stream;
    stream = 0;
    if (0 == (stream = fopen("09test.c_data", "w")))
    {
        printf("\"09test.c_data\" open failed!\n");
        return -1;
    }
    else
    {
        printf("loading datas into \"09test.c_data\"...\n");
        for (unsigned long ul = 0; ul < 4; ul++)
        {
            // size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
            fwrite(&girl[ul], 1, sizeof(struct GIRL_STRU), stream);
        }
        sleep(3);
        printf("\"09test.c_data\" saved successfully!\n");
        fclose(stream);
        bzero(girl, sizeof(girl));
    }

    // 把上一题写入的数据从二进制文件中读取出来，存入struct st_girl结构体中
    FILE *fp;
    fp = 0;
    if (0 == (fp = fopen("09test.c_data", "r")))
    {
        printf("\"09test.c_data\" not exist!\n");
        return -1;
    }
    else
    {
        printf("importing \"09test.c_data\"...\n");
        for (unsigned long ul = 0; ul < 4; ul++)
        {
            // size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
            fread(&girl[ul], 1, sizeof(struct GIRL_STRU), fp);
        }
        sleep(3);
        printf("\"09test.c_data\" imported successfully!\n");
        fclose(stream);
    }

    // 然后在界面上显示出来
    for (unsigned long ul = 0; ul < 4; ul++)
    {
        printf("姓名：%s（%d岁）\n", girl[ul].name, girl[ul].age);
        printf("身高：%dcm\n", girl[ul].height);
        printf("身材：%s   颜值：%s\n", girl[ul].stature, girl[ul].facescore);
        sleep(3);
    }
    printf("loading successfully!\n");


    GIRL girl[5];

    // 从界面上输入五名超女的数据，存放在struct st_girl结构体数组中
    printf("inputting datas...\n");
    bzero(girl, sizeof(girl));
    for (unsigned long ul = 0; ul < 4; ul++)
    {
        printf("name: ");
        scanf("%s", girl[ul].name);
        printf("age: ");
        scanf("%d", &girl[ul].age);
        printf("height: ");
        scanf("%d", &girl[ul].height);
        printf("stature: ");
        scanf("%s", girl[ul].stature);
        printf("facescore: ");
        scanf("%s", girl[ul].facescore);
        printf("datas writed successfully!\n");
    }
    sleep(1);
    printf("4 women's datas writed successfully!\n");
    // 然后把结构体数组以xml字符串的方式写入文本文件
    FILE *stream;
    stream = 0;
    if (0 == (stream = fopen("09test.c_data_xml", "w")))
    {
        printf("\"09test.c_data_xml\" open failed!\n");
        return -1;
    }
    else
    {
        printf("loading datas into \"09test.c_data_xml\"...\n");
        for (unsigned long ul = 0; ul < 4; ul++)
        {
            // int fprintf(FILE *stream, const char *format, ...);
            fprintf(stream, "<name>%s</name><age>%d</age><height>%d</height><sc>%s</sc><yz>%s</yz>\n", \
                        girl[ul].name, \
                        girl[ul].age, \
                        girl[ul].height, \
                        girl[ul].stature, \
                        girl[ul].facescore);
        }
        sleep(3);
        printf("\"09test.c_data\" saved successfully!\n");
        fclose(stream);
        bzero(girl, sizeof(girl));
    }


    // 把上一题写入的数据从文本文件中读取出来
    GIRL girl[4];
    bzero(girl, sizeof(girl));
    FILE *fp;
    fp = 0;
    char str[4][301];
    bzero(str, sizeof(str));
    if (0 == (fp = fopen("09test.c_data_xml", "r")))
    {
        printf("\"09test.c_data_xml\" not exist!\n");
        return -1;
    }
    else
    {
        printf("loading \"09test.c_data_xml\"...\n");
        for (unsigned long ul = 0; ul < 4; ul++)
        {
            // char *fgets(char *s, int size, FILE *stream);
            fgets(str[ul], 1024, fp);
        }
        sleep(3);
        fclose(fp);
    }

    // 然后在界面上显示出来
    printf("\"09test.c_data_xml\":\n");
    for (unsigned long ul = 0; ul < 4; ul++)
    {
        printf("%s", str[ul]);
    }

    // 解析xml并存入struct st_girl结构体中
    for (unsigned long ul = 0; ul < 4; ul++)
    {
        // int GetXMLBuffer_Int(const char *in_XMLBuffer,const char *in_FieldName,int *out_Value);
        // int GetXMLBuffer_Str(const char *in_XMLBuffer, const char *in_FieldName, char *out_Value);
        GetXMLBuffer_Str(str[ul], "name", girl[ul].name);
        GetXMLBuffer_Int(str[ul], "age", &girl[ul].age);
        GetXMLBuffer_Int(str[ul], "height", &girl[ul].height);
        GetXMLBuffer_Str(str[ul], "sc", girl[ul].stature);
        GetXMLBuffer_Str(str[ul], "yz", girl[ul].facescore);
    }

    // 然后在界面上显示出来
    for (unsigned long ul = 0; ul < 4; ul++)
    {
        printf("姓名：%s（%d岁）\n", girl[ul].name, girl[ul].age);
        printf("身高：%dcm\n", girl[ul].height);
        printf("身材：%s   颜值：%s\n", girl[ul].stature, girl[ul].facescore);
        sleep(3);
    }
    printf("loading successfully!\n");


    FILE *fp1;
    FILE *fp2;
    fp1 = 0;
    fp2 = 0;

    if (0 == (fp1 = fopen("1", "r")))
    {
        return -1;
    }
    else
    {
        if (0 == (fp2 = fopen("2", "w")))
        {
            return -1;
        }
        else
        {
            CopyTextFile(fp1, fp2);
            fclose(fp1);
            fclose(fp2);
        }
    }


    GIRL girl[4];
    bzero(girl, sizeof(girl));
    strcpy(girl[0].name, "西施");
    girl[0].age = 20;
    girl[0].height = 166;
    strcpy(girl[0].stature, "一般");
    strcpy(girl[0].facescore, "漂亮");
    strcpy(girl[1].name, "王昭君");
    girl[1].age = 18;
    girl[1].height = 160;
    strcpy(girl[1].stature, "火辣");
    strcpy(girl[1].facescore, "一般");
    strcpy(girl[2].name, "杨玉环");
    girl[2].age = 22;
    girl[2].height = 177;
    strcpy(girl[2].stature, "一般");
    strcpy(girl[2].facescore, "漂亮");
    strcpy(girl[3].name, "陈圆圆");
    girl[3].age = 26;
    girl[3].height = 159;
    strcpy(girl[3].stature, "火辣");
    strcpy(girl[3].facescore, "不行");

    FILE *stream;
    stream = 0;
    if (0 == (stream = fopen("1", "w")))
    {
        printf("\"1\" open failed!\n");
        return -1;
    }
    else
    {
        printf("loading datas into \"1\"...\n");
        for (unsigned long ul = 0; ul < 4; ul++)
        {
            // size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
            fwrite(&girl[ul], 1, sizeof(struct GIRL_STRU), stream);
        }
        sleep(3);
        printf("\"1\" saved successfully!\n");
        fclose(stream);
        bzero(girl, sizeof(girl));
    }

    FILE *fp1;
    FILE *fp2;
    fp1 = 0;
    fp2 = 0;

    if (0 == (fp1 = fopen("1", "r")))
    {
        return -1;
     }
    else
    {
        if (0 == (fp2 = fopen("2", "w")))
        {
            return -1;
        }
        else
        {
            // size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
            while (1)
            {
                GIRL tmp;
                bzero(&tmp, sizeof(tmp));
                if (0 == fread(&tmp, 1, sizeof(struct GIRL_STRU), fp1))
                {
                    break;
                }
                else
                {
                    // size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
                    fwrite(&tmp, 1, sizeof(struct GIRL_STRU), fp2);
                }
            }
        }
    }


    char strpwd[301];

    bzero(strpwd, sizeof(strpwd));

    getcwd(strpwd, 300);

    printf("当前目录是：%s\n", strpwd);

    mkdir("/home/heyan/文档/2Working_Files/00CS/00C\C++/00hy框架/C语言创建目录", 0755);


    long now;

    now = 0;

    printf("time(0) = %ld.\n", time(0));
    printf("time(&now) = %ld.\n", time(&now));
    printf("now = %ld.\n", now);


    char str[301];

    if (0 == timetostr(time(0), str))
    {
        printf("北京时间：%s\n", str);
    }


    char str[301];
    char str1[301];
    char str2[301];

    bzero(str, sizeof(str));
    bzero(str1, sizeof(str1));
    bzero(str2, sizeof(str2));

    if ((0 == timetostr(time(0), str)) &&
        (0 == timetostr1(time(0), str1)) &&
        (0 == timetostr2(time(0), str2)))
    {
        printf("北京时间：%s\n", str);
        printf("北京时间：%s\n", str1);
        printf("北京时间：%s\n", str2);
    }


    // struct tm *localtime(const time_t *timep);
    struct tm *now;

    now = 0;

    time_t long_time;
    long_time = time(0);

    now = localtime(&long_time);
    // time_t mktime(struct tm *tm);
    time_t up_to_now = mktime(now);

    printf("time(0): %ld.\n", long_time);
    printf("Up to now: %ld.\n", up_to_now);


    printf("程序开始运行！\n");

    for (unsigned long ul = 0; ul < 300; ul++)
    {
        sleep(1);
        printf("已经过去%lu秒...\n", ul + 1);
    }


    // int gettimeofday(struct timeval *tv, struct timezone *tz);
    struct timeval t1;
    struct timeval t2;

    bzero(&t1, sizeof(struct timeval));
    bzero(&t2, sizeof(struct timeval));

    gettimeofday(&t1, 0);
    for (unsigned long ul = 0; ul < 10000; ul++)
    {
        printf("%lu\n", ul + 1);
    }
    gettimeofday(&t2, 0);

    printf("程序总共运行%luus.\n", t2.tv_sec * 1000000 + t2.tv_usec - t1.tv_sec * 1000000 - t1.tv_usec);


    time_t ti;
    ti = 0;

    if (0 == strtotime("2019-02-08 12:05:08", &ti))
    {
        printf("\"2019-02-08 12:05:08\"已过去%ld秒。\n", ti);
    }

    printf("\n\n\t--- test ---\n");
    char str[31];
    bzero(str, sizeof(str));
    if (0 == timetostr(1549598708, str))
    {
        printf("%s\n", str);
    }
*/