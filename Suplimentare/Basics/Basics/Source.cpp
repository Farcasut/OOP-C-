#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid_fiu;
    pid_t pid1, pid2;
    int cod_fiu;
    int nr = 1;
    for (int i = 1; i <= 2; i++)
    {
        if (-1 == (pid2 = fork()))
        {
            perror("Eroare la fork"); exit(1);
        }
        if (0 == pid2)
        {
            if (i == 2)
            {
                sleep(4);
            }
            for (int j = 1; j <= 3; j++)
            {
                if (-1 == (pid1 = fork()))
                {
                    perror("Eroare la fork"); exit(1);
                }

                if (0 == pid1)
                {
                    nr = j + ((i - 1) * 3);
                    printf("Sunt procesul fiu la fiu cu numarul de ordine (3,%d), avand PID-ul: %d, iar parintele meu este procesul cu PID-ul: %d.\n", nr, getpid(), getppid());
                    sleep(1);
                    return nr;
                }
            }
            for (int h = 1; h <= 3; h++)
            {
                pid_fiu = wait(&cod_fiu);
                if (h == 1)
                {
                    printf("Sunt procesul fiu cu numarul de ordine (2,%d), avand PID-ul: %d, iar parintele meu este procesul cu PID-ul: %d.\n", i, getpid(), getppid());
                    printf("Pentru fii mei: \n");
                }
                printf("Sunt fiul %d si am PID-ul: %d si codul de terminare: %d\n", h, pid_fiu, cod_fiu);
            }
            printf("\n");
            return i;
        }
    }
    sleep(8);
    for (int i = 1; i <= 2; i++)
    {
        pid_fiu = wait(&cod_fiu);
        if (i == 1)
        {
            printf("Sunt procesul tata cu numarul de ordine (1,1), avand PID-ul: %d, iar parintele meu este procesul cu PID-ul: %d.\n", getpid(), getppid());
            printf("Pentru fii tatalui:\n");
        }
        printf("Sunt fiul tatalui, avand ordinul %d si am PID-ul: %d si codul de terminare: %d\n", i, pid_fiu, cod_fiu);
    }
    return 0;
}