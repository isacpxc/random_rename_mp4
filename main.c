#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <time.h>
#include <locale.h>
#include <errno.h>


int main ()
{
    setlocale(LC_ALL, "portuguese");
    DIR *d;
    int test = 0,j,h;
    struct dirent *dir;
    d = opendir(".");
    srand(time(NULL));
    int t = system("MKDIR new");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            for (j=0;j<strlen(dir->d_name);j++);
            char nome[j+1];
            strcpy(nome,dir->d_name);
            nome[j] = '\0';
            //printf("%s\n", nome);
            for (int i=0;i<j;i++){
                printf("%c ",nome[i]);
                if (nome[i] == '.' && nome[i+1] == 'm' && nome[i+2] == 'p' && nome[i+3] == '3'){
                    test = 1;
                    break;
                }

            }
            if (test) {
                test = 0;
                char newname[15];
                newname[0] = '.';
                newname[1] = '\\';
                newname[2] = 'n';
                newname[3] = 'e';
                newname[4] = 'w';
                newname[5] = '\\';
                h=rand()%127;
                h = 'A' + rand() % 26;
                newname[6] = h;
                h=rand()%127;
                h = 48 + rand() % 10;
                newname[7] = h;
                h=rand()%127;
                h = 'A' + rand() % 26;
                newname[8] = h;
                h=rand()%127;
                h = 48 + rand() % 10;
                newname[9] = h;
                h=rand()%127;
                h=0;
                newname[10] = '.';
                newname[11] = 'm';
                newname[12] = 'p';
                newname[13] = '3';
                newname[14] = '\0';

                int ret = rename(nome, newname);
                if (ret) perror("rename failed because");
                //fprintf(stderr, "renaming '%s' to '%s' failed\n", nome, newname);
                //printf("Value of errno: %d\n ", errno);

            }


        }
        closedir(d);
    }

   return(0);
}

