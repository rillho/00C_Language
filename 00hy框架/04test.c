#include "__hy__.h"

int main(int argc, char *argv[])
{
    return 0;
}
/*
    char str[5];

    str[0] = 'a';
    str[1] = 'b';
    str[2] =  0;
    str[3] = 'd';
    str[4] = '\0';

    int jj = 12345;

    printf("=%s=", str);


    printf("=%5s=\n", "123456789");
    printf("=%-5s=\n", "123456789");


    char str[5];
    int jj = 12345;

    memset(str, 0, sizeof(str));
    strcpy(str, "heyanheyanheyan");
    printf("heyanheyanheyan--->%lu(4)\n", strlen(str));

    char str2[301];

    memset(str2, 0, sizeof(str2));
    strcpy(str2, "中国");
    printf("中国--->%lu(6)\n", strlen(str2));


    char str[301];

    printf("=%s=--->>>%lu\n", str, strlen(str));


    char str1[301];

    memset(str1, 0, sizeof(str1));

    char *str2 = "中华人民共和国";  // len = 21

    printf("str1的地址应该是%p，strcpy返回%p。\n", str1, strncpy(str1, str2));
    printf("str1的长度应该是：21，实际是%lu。\n", strlen(str1));


    // printf("\n\n\t--- strlen()测试 ---\n\n");
    // printf("strlen(\"0\")：%lu", strlen("0"));
    // printf("\n\n\t--- STRLEN()测试 ---\n\n");
    // printf("STRLEN(\"0\")：%lu", STRLEN("0"));

    // char str1[10] = "abcdef";
    // char str2[6] = "abc";

    // printf("str1=\"123456789\"\n");
    // printf("str2=\"12345\"\n");
    // printf("\n\n\t--- strcpy()测试 ---\n\n");
    // printf("=str2=<<<---=str1=");
    // printf("%p\n", strcpy(str2, str1));
    // printf("str2=%s=", str2);
    // printf("\n\n\t--- STRCPY()测试 ---\n\n");
    // printf("=str2=<<<---=str1=");
    // printf("%p\n", STRCPY(str2, str1));
    // printf("str2=%s=", str2);

    // char str1[301] = "abcde";
    // char str2[301] = "123456789";

    // printf("\n\n\t--- strncpy()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // printf("%p\n", strncpy(str1, str2, 9 - 1));
    // printf("str1=%s=", str1);
    // printf("\n\n\t--- STRNCPY()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // printf("%p\n", STRNCPY(str1, str2, 9 - 1));
    // printf("str1=%s=", str1);

    // char str1[301] = "123456789";
    // char str2[302] = "abcde";

    // printf("\n\n\t--- strcat()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // strcat(str1, str2);
    // printf("str1=%s=", str1);

    // printf("\n\n\t--- STRCAT()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // STRCAT(str1, str2);

    // printf("\n\n\t--- strncat()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // strncat(str1, str2, 1);
    // printf("str1=%s=", str1);

    // char str3[301] = "123456789";
    // char str4[302] = "abcde";
    
    // printf("\n\n\t--- STRNCAT()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // STRNCAT(str3, str4, 1);
    // printf("str1=%s=", str3);

    // char str[301] = "123456789987654321";
    // char c = '2';

    // printf("\n\n\t--- strrchr()测试 ---\n\n");
    // printf("=%c=find among=%s=\n", c, str);
    // printf("%p", strrchr(str, c));
    
    // printf("\n\n\t--- STRRCHR()测试 ---\n\n");
    // printf("=%c=find among=%s=\n", c, str);
    // printf("%p", STRRCHR(str, c));

    // char str1[301] = "123456789";
    // char str2[302] = "abcde";

    // printf("\n\n\t--- strncat()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // strncat(str1, str2, 1);
    // printf("str1=%s=", str1);

    // char str3[301] = "123456789";
    // char str4[302] = "abcde";
    
    // printf("\n\n\t--- STRNCAT()测试 ---\n\n");
    // printf("=str1=<<<---=str2=");
    // STRNCAT(str3, str4, 1);
    // printf("str1=%s=", str3);

    // char str[301] = "123456789987654321";
    // char c = '2';

    // printf("\n\n\t--- strrchr()测试 ---\n\n");
    // printf("=%c=find among=%s=\n", c, str);
    // printf("%p", strrchr(str, c));
    
    // printf("\n\n\t--- STRRCHR()测试 ---\n\n");
    // printf("=%c=find among=%s=\n", c, str);
    // printf("%p", STRRCHR(str, c));


    printf("\n\n\t--- 测试strcmp()函数 ---\n\n");
    printf("0strcmp(\"abcd\", \"abcd\") = %d。\n", strcmp("abcd", "abcd"));
    printf("-1strcmp(\"abcd\", \"abcde\") = %d。\n", strcmp("abcd", "abcde"));
    printf("1strcmp(\"abcde\", \"abcd\") = %d。\n", strcmp("abcde", "abcd"));
    
    printf("-1strcmp(\"abcde\", \"fghi\") = %d。\n", strcmp("abcde", "fghi"));
    printf("1strcmp(\"fghi\", \"abcde\") = %d。\n", strcmp("fghi", "abcde"));

    printf("\n\n\t--- 测试STRCMP()函数 ---\n\n");
    printf("0STRCMP(\"abcd\", \"abcd\") = %d。\n", STRCMP("abcd", "abcd"));
    printf("-1STRCMP(\"abcd\", \"abcde\") = %d。\n", STRCMP("abcd", "abcde"));
    printf("1STRCMP(\"abcde\", \"abcd\") = %d。\n", STRCMP("abcde", "abcd"));

    printf("-1STRCMP(\"abcde\", \"fghi\") = %d。\n", STRCMP("abcde", "fghi"));
    printf("1STRCMP(\"fghi\", \"abcde\") = %d。\n", STRCMP("fghi", "abcde"));


    printf("\n\n\t--- 测试strncmp()函数 ---\n\n");
    printf("0strncmp(\"abcd\", \"abcd\", 0) = %d。\n", strncmp("abcd", "abcd", 0));
    printf("0strncmp(\"abcd\", \"ABCD\", 0) = %d。\n", strncmp("abcd", "ABCD", 0));
    printf("0strncmp(\"abcd\", \"abcd\", 4) = %d。\n", strncmp("abcd", "abcd", 4));
    printf("0strncmp(\"abcd\", \"abcd\", 5) = %d。\n", strncmp("abcd", "abcd", 5));
    printf("0strncmp(\"abcd\", \"abcde\", 4) = %d。\n", strncmp("abcd", "abcde", 4));
    printf("-101strncmp(\"abcd\", \"abcde\", 5) = %d。\n", strncmp("abcd", "abcde", 5));
    printf("-5strncmp(\"abcde\", \"fghi\",5) = %d。\n", strncmp("abcde", "fghi", 5));
    printf("5strncmp(\"fghi\", \"abcde\", 4) = %d。\n", strncmp("fghi", "abcde", 4));

    printf("\n\n\t--- 测试STRNCMP()函数 ---\n\n");
    printf("0STRNCMP(\"abcd\", \"abcd\", 0) = %d。\n", STRNCMP("abcd", "abcd", 0));
    printf("0STRNCMP(\"abcd\", \"ABCD\", 0) = %d。\n", STRNCMP("abcd", "ABCD", 0));
    printf("0STRNCMP(\"abcd\", \"abcd\", 4) = %d。\n", STRNCMP("abcd", "abcd", 4));
    printf("0STRNCMP(\"abcd\", \"abcd\", 5) = %d。\n", STRNCMP("abcd", "abcd", 5));
    printf("0STRNCMP(\"abcd\", \"abcde\", 4) = %d。\n", STRNCMP("abcd", "abcde", 4));
    printf("-101STRNCMP(\"abcd\", \"abcde\", 5) = %d。\n", STRNCMP("abcd", "abcde", 5));
    printf("-5STRNCMP(\"abcde\", \"fghi\",5) = %d。\n", STRNCMP("abcde", "fghi", 5));
    printf("5STRNCMP(\"fghi\", \"abcde\", 4) = %d。\n", STRNCMP("fghi", "abcde", 4));


    printf(" \n\n\t--- 测试strstr()函数 ---\n\n");
    printf("\n   1234567890找1   =%p=   \n", strstr("1234567890", "1"));
    printf("\n   1234567890找12   =%p=   \n", strstr("1234567890", "12"));
    printf("\n   1234567890找13   =%p=   \n", strstr("1234567890", "13"));
    printf("\n   1234567890找1234567890   =%p=   \n", strstr("1234567890", "1234567890"));
    printf("\n   1234567890找12345678909   =%p=   \n", strstr("1234567890", "12345678909"));

    printf(" \n\n\t--- 测试STRSTR()函数 ---\n\n");
    printf("\n   1234567890找1   =%p=   \n", STRSTR("1234567890", "1"));
    printf("\n   1234567890找12   =%p=   \n", STRSTR("1234567890", "12"));
    printf("\n   1234567890找13   =%p=   \n", STRSTR("1234567890", "13"));
    printf("\n   1234567890找1234567890   =%p=   \n", STRSTR("1234567890", "1234567890"));
    printf("\n   1234567890找12345678909   =%p=   \n", STRSTR("1234567890", "12345678909"));
*/