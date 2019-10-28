#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nama[20];
    int status;
}inventory;

inventory item[];

int main()
{
    char x = 'y';
    int i=0;
    int j=0;
    int terlemah = 0;
    int terhebat = 0;
    while(x == 'y'){
        printf("\n|| ============================ ||\n");
        fflush(stdin);
        printf("Input nama item  : ",i+1);    gets(item[i].nama);
        printf("Input Status : ",i+1);         scanf("%d",&item[i].status);

        printf("Item anda : %s\n",item[i].nama);
        printf("Status %s : %d\n",item[i].nama,item[i].status);

        for(j=0;j<=i;j++)
            {
            if(item[j].status > item[terhebat].status){
                terhebat = j;
            }

            if(item[j].status < item[terlemah].status)
                {
                terlemah = j;
            }
        }

        if(i == 0)
            {
            printf("Item sebelumnya : Tidak ada\n");
            printf("Item terlemah : %s\n",item[0].nama);
            printf("Item terhebat : %s\n",item[0].nama);
        }
        else
        {
            printf("Item sebelumnya : %s\n",item[i-1].nama);
            printf("Item terlemah : %s\n",item[terlemah].nama);
            printf("Item terhebat : %s\n",item[terhebat].nama);
        }
        i++;
        fflush(stdin);
        printf("Input lagi ? (y/n) ");scanf(" %c",&x);
    }
    return 0;
}
