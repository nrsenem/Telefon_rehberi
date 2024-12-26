int telefonekle()
{
    int i=0,j=0,k=0;
    kayit yenikayit;
    FILE *fptr;
    fptr=fopen("C:\\Users\\nrsen\\Desktop\\telefon_rehberi\\telefon_rehberi\\data.txt","a");
    if(fptr==NULL)
    {
        return -1;
    }
    printf("\n\n");
    do{
        printf("Isim giriniz (max 20 karakter):");
        scanf("%s",yenikayit.isim);
        i=strlen(yenikayit.isim);
    }while(i > 20);
    do{
        printf("Soyisim giriniz (max 20 karakter):");
        scanf("%s",yenikayit.soyisim);
        j=strlen(yenikayit.soyisim);
    }while(j > 20);
    do{
        printf("Telefon numarasi giriniz (max 11 karakter):");
        scanf("%s",yenikayit.telenosu);
        k=strlen(yenikayit.telenosu);
    }while(i > 11);
    fprintf(fptr,"\n%s %s %s",yenikayit.isim,yenikayit.soyisim,yenikayit.telenosu);
   fclose(fptr);
return 0;

}
