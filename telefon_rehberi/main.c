#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include "menu.h"
#include "telefon_ara.h"
#include "telefonekle.h"
#include "telefonlistele.h"
int main()
{
    int choice=0;
    char searchName[20];
    int searchResult=0;
    menu();
    do{
        printf("1-4 arasi bir sayi giriniz:  ");
        scanf("%d",&choice);
        int i,j,k;

        switch(choice)
        {
            case 1:
                if(telefonekle()==0)
                  printf("\ntelefon basarili bir sekilde eklendi.\n");
                else
                  printf("\ntelefon eklenirken bir hata oluþtu.\n");
                break;
            case 2:
                if(telefonlistele()==0)
                    printf("Numaralar basarili bir sekilde listelendi.\n");
                else
                    printf("\nNumaralar listelenirken hata oluþtu.\n");
                break;
            case 3:
                printf("Aranacak ismi giriniz: ");
                scanf("%s",&searchName);
                searchResult=telefonara(searchName);
                if(searchResult==0)
                  printf("\naradiginiz telefon numarasi mevcut degil.\n");
                else
                  printf("%d tane telefon numarasi bulundu.\n",searchResult);
                break;
            case 4:printf("Cikis yapiyorsunuz.\n");
                break;
            default:printf("Lutfen 1 ile 4 arasi bir sayi giriniz.\n");
        }
    }while(choice != 4);
    return 0;
}


