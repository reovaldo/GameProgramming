#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int batasan;
    srand(time(NULL));
    int nyawa = 5;
    int selisih;
    ulang:
    printf("Input Angka (10 - 100) : ");
    scanf("%d",&batasan);
    if(batasan > 100 || batasan < 10)
    {
        system("cls");
        printf("\nInput batasan (0 - 100)\n\n");
        goto ulang;
    }
    else
    {
        printf("Tebak antara 0 sampai %d !!\n",batasan);
        int cheat = rand() % batasan;
        printf("Bocoran, angka yang ditebak : %d\n",cheat);
        printf("Nyawamu tinggal : %d\n",nyawa);
        int tebak;
        while(nyawa != 0)
        {
            printf("\nInput tebakanmu: ");
            scanf("%d",&tebak);
                if(tebak > cheat)
                {
                    nyawa--;
                    selisih = tebak - cheat;
                    if(selisih < 2)
                    {
                        printf("Hampir sajaaaa.\n");
                        printf("Yaaahhh Salaahh, nyawamu tinggal : %d\n",nyawa);
                    }
                    else
                    {
                        printf("Kebesaran woy\n");
                        printf("Yaaahhh Salaahh, nyawamu tinggal : %d\n",nyawa);
                    }
                }
                    else if(tebak < cheat)
                    {
                    nyawa--;
                    selisih = cheat - tebak;
                    if(selisih < 2)
                    {
                        printf("Hamppiiirrrrr sajaaaa.\n");
                        printf("Yaaahhh Salaahh, nyawamu tinggal : %d\n",nyawa);

                    }
                    else
                    {
                        printf("Kekecilan woy.\n");
                        printf("Yaaahhh Salaahh, nyawamu tinggal : %d\n",nyawa);
                    }
                }
                else if(tebak == cheat)
                    {
                    printf("\nAKHIRNYAAAAAA BENAAAARRRRRRRR!!!\n");
                    return 0;
                }
        }
        if(nyawa == 0){
            printf("\nBUBAR !!!\n");
        }
    }

    return 0;
}
