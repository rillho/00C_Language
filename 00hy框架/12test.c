#include "__hy__.h"

#define CR printf("\n");

static int s_g_file_num = 0;
char all_files[301][301];

int GetAllFiles(char *pathname);
int main(int argc, char *argv[], char *envp[])
{
    return 0;
}
int GetAllFiles(char *pathname)
{
    if (pathname == 0)
    {
        return -1;;
    }

    DIR *dp;
    dp = 0;
    if (0 == (dp = opendir(pathname)))
    {
        printf("open %s failed!\n", pathname);
        return -1;
    }
    // struct dirent *readdir(DIR *dirp);
        // On  success,  readdir() returns a pointer to a dirent structure.
    struct dirent *dir;
    dir = 0;
    while (0 != (dir = readdir(dp)))
    {
        if (0 == strcmp(dir->d_name, "."))
        {
            continue;
        }
        if (0 == strcmp(dir->d_name, ".."))
        {
            continue;
        }
        if (4 == dir->d_type)
        {
            ;
        }
        else
        {
            // printf("type: file   name: %s\n", new_path_name2);
            if (0 == strcmp(dir->d_name + strlen(dir->d_name) - 2, ".c") && 0 != strcmp(dir->d_name, "__hy__.c"))
            {
                DeleteRChar(dir->d_name, 'c');
                DeleteRChar(dir->d_name, '.');
                strcpy(all_files[s_g_file_num], dir->d_name);
                s_g_file_num++;
            }
        }
    }
    // int closedir(DIR *dirp);
        // The closedir() function returns 0 on success.
        // On  error,  -1  is  returned, and errno is set appropriately.
    closedir(dp);

    return 0;
}
/*
    char dir[301];

    bzero(dir, sizeof(dir));
    getcwd(dir, 300);
    printf("%s", dir);
    CR

    if (0 != chdir("/root/"))
    {
        // 切换工作目录失败
        printf("切换工作目录失败！错误代码：%d，%s。\n", errno, strerror(errno));
        printf("%s", dir);
        CR
    }
    else
    {
        // 切换工作目录成功
        chdir("/root/");
        printf("切换工作目录成功！\n");
        bzero(dir, sizeof(dir));
        getcwd(dir, 300);
        printf("%s", dir);
        CR
    }


    char pathname[301];

    memset(pathname, 0, sizeof(pathname));
    if (0 == getcwd(pathname, 300))
    {
        printf("获取当前工作目录失败！\n");
    }
    else
    {
        printf("当前工作目录：");
        printf("%s", pathname);
        CR
    }

    // 切换工作目录
    int ii;
    ii = chdir("/root/tmp/");
    if (ii == 0)
    {
        printf("切换工作目录成功！\n");
        memset(pathname, 0, sizeof(pathname));
        getcwd(pathname, 300);
        printf("当前工作目录：");
        printf("%s", pathname);
        CR
    }
    else
    {
        printf("切换工作目录失败！\n");
        printf("错误代码：%d，%s。\n", errno, strerror(errno));
        printf("当前工作目录：");
        printf("%s", pathname);
        CR
    }


    if (0 == mkdir("/root/tmp/aaa/bbb", 0755))
    {
        printf("\"/root/tmp/aaa/bbb\" established successfully!\n");
    }
    else
    {
        printf("\"/root/tmp/aaa/bbb\" establish feiled!\n");
        printf("%d %s\n", errno, strerror(errno));
    }


    char pathname[301];
    char option[301];
    bzero(pathname, sizeof(pathname));

    printf("input a directory: ");
    scanf("%s", pathname);

    if (0 == mkdir(pathname, 0755))
    {
        printf("%s established successfully!\n", pathname);
    }
    else
    {
        printf("%s establish failed!   %d   %s\n", pathname, errno, strerror(errno));
        return 0;
    }

A:
    bzero(option, sizeof(option));

    printf("delete this directory?[Y/n]: ");
    scanf("%s", option);

    if (0 == strcmp(option, "Y"))
    {
        if (0 == rmdir(pathname))
        {
            printf("%s removed successfully!\n", pathname);
        }
        else
        {
            printf("%s remove failed!   %d   %s\n", pathname, errno, strerror(errno));
        }
    }
    else if (0 == strcmp(option, "n"))
    {
        return 0;
    }
    else
    {
        goto A;
    }


    char pathname[301];
    bzero(pathname, sizeof(pathname));
    if (0 != getcwd(pathname, 300))
    {
        // DIR *opendir(const char *name);
        DIR *dp;
        dp = 0;
        if(0 == (dp = opendir(pathname)))
        {
            printf("open %s failed!\n", pathname);
            return -1;
        }
        else
        {
           return -1;
    }
         // struct dirent *readdir(DIR *dirp);
            struct dirent *dir;
            dir = 0;
            while (0 != (dir = readdir(dp)))
            {
                printf("type = %d\tname = %s\n", dir->d_type, dir->d_name);
            }
            closedir(dp);
        }
    }
    else
    {
        printf("get current working directory failed!\n");
        return -1;
    }


    if (argc != 2)
    {
        printf("12test: Missing directory\n");
        return -1;
    }

    char pathname[301];
    memset(pathname, 0, sizeof(pathname));
    strcpy(pathname, argv[1]);

    // DIR *opendir(const char *name);
    DIR *dp;
    dp = 0;
    if (0 == (dp = opendir(pathname)))
    {
        printf("open %s failed!\n", pathname);
    }
    else
    {
        // struct dirent *readdir(DIR *dirp);
        struct dirent *dir;
        dir = 0;
        while (0 != (dir = readdir(dp)))
        {
            printf("type: %d    name: %s\n", dir->d_type, dir->d_name);
        }
        // int closedir(DIR *dirp);
        closedir(dp);
    }


    char pathname[301];
    memset(pathname, 0, sizeof(pathname));

    printf("input directory: ");
    scanf("%s", pathname);

    GetAllFiles(pathname);


    if (argc != 2)
    {
        printf("12test: missing file operands\n");
        return -1;
    }

    if (0 != access(argv[1], 0))
    {
        printf("%s no found!\n", argv[1]);
        return -1;
    }

    struct stat info;
    bzero(&info, sizeof(struct stat));

    // int stat(const char *pathname, struct stat *statbuf);
        // On success, zero is returned.  On error, -1 is returned, and errno is set appropriately.
    if (0 != stat(argv[1], &info))
    {
        printf("%d   ", errno);
        printf("%s\n", strerror(errno));
        return -1;
    }
    if (S_ISREG(info.st_mode))
    {
        printf("%s is a file.\n", argv[1]);
    }
    if (S_ISDIR(info.st_mode))
    {
        printf("%s is a directory.\n", argv[1]);
    }


    if (argc != 2)
    {
        printf("12test: missing file operands\n");
        return -1;
    }

    if (0 != access(argv[1], 0))
    {
        printf("No %s file!\n", argv[1]);
        return -1;
    }

    struct stat info;
    bzero(&info, sizeof(info));

    if (0 != stat(argv[1], &info))
    {
        return -1;
    }

    if (S_ISREG(info.st_mode))
    {
        printf("%s is a file.\n", argv[1]);
        // int timetostr(const time_t ti, char *strtime);
        char strtime[301];
        bzero(strtime, sizeof(strtime));
        timetostr(info.st_mtime, strtime);
        char strtime1[301];
        bzero(strtime1, sizeof(strtime1));
        timetostr(info.st_atime, strtime1);
        printf("size: %ld   atime: %s   mtime: %s\n", info.st_size, strtime1, strtime);
    }
    if (S_ISDIR(info.st_mode))
    {
        printf("%s is a directory.\n", argv[1]);
    }

    printf("\n\n\t... modified ...\n\n");

    // int utime(const char *filename, const struct utimbuf *times);
        // On success, zero is returned.  On error, -1 is returned, and  errno  is set appropriately.
    struct utimbuf buf;
    bzero(&buf, sizeof(buf));
    if (0 == utime(argv[1], &buf))
    {
        info.st_atime = buf.actime = time(0);
        info.st_mtime = buf.modtime = time(0);
        char strtime2[301];
        bzero(strtime2, sizeof(strtime2));
        timetostr(info.st_mtime, strtime2);
        char strtime3[301];
        bzero(strtime3, sizeof(strtime3));
        timetostr(info.st_atime, strtime3);
        printf("size: %ld   atime: %s   mtime: %s\n", info.st_size, strtime3, strtime2);
    }


    // 个别用到_public.h和_public.c的程序例外用手工处理。顺便看看C++编译器和C有什么不同
    char pathname[301];
    bzero(pathname, sizeof(pathname));
    printf("input directory: ");
    scanf("%s", pathname);
    bzero(all_files, sizeof(all_files));
    // DIR *opendir(const char *name);
        // The opendir() and fdopendir() functions return a pointer to the  directory  stream.
        // On  error, NULL is returned, and errno is set appropriately.
    if (-1 != GetAllFiles(pathname))
    {
        printf("即：\n");
        for (int i = 0; i < s_g_file_num; i++)
        {
            printf("File%-3d   Name: %s\n", i, all_files[i]);
        }
    }
    else
    {
        return -1;
    }

    // 生成一个makefile文件，把您在学习C语言基础时写的源代码用C++来编译
    printf("creating MakeFile...\n");
    FILE *fp;
    fp = 0;
    if (0 == (fp = fopen("MakeFile", "w")))
    {
        printf("creating MakeFile failed!\n");
    }
    fprintf(fp, "all: ");
    for (int i = 0; i < s_g_file_num; i++)
    {
        // void DeleteRChar(char *str,const char in_char);
        fprintf(fp, "%s ", all_files[i]);
    }
    fprintf(fp, "\n\n\n");
    for (int i = 0; i < s_g_file_num; i++)
    {
        // void DeleteRChar(char *str,const char in_char);
        fprintf(fp, "%s: %s.c __hy__.c\n\tgcc -o %s %s.c __hy__.c -lm",\
                    all_files[i],\
                         all_files[i],\
                                               all_files[i],\
                                                  all_files[i]);
        fprintf(fp, "\n\n");
    }
    fprintf(fp, "\n\n\n");
    fprintf(fp, "clean:\n\t rm -rf ");
    for (int i = 0; i < s_g_file_num; i++)
    {
        // void DeleteRChar(char *str,const char in_char);
        fprintf(fp, "%s ", all_files[i]);
    }

    fclose(fp);
*/