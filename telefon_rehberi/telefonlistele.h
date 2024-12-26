int telefonlistele()
{
    kayit mevcutkayit;
    FILE* fptr;
    fptr=fopen("C:\\Users\\nrsen\\Desktop\\telefon_rehberi\\telefon_rehberi\\data.txt","r");
    if(fptr==NULL)
    {
        return -1;
    }
        printf("\n\nIsim\t\t\tSoyisim\t\t\tNumara\n\n");
        printf("----\t\t\t-------\t\t\t-----\n");
    while(!feof(fptr))
    {
        fscanf(fptr,"%s%s%s",mevcutkayit.isim,mevcutkayit.soyisim,mevcutkayit.telenosu);
        printf("%s\t\t\t",mevcutkayit.isim);
        printf("%s\t\t\t",mevcutkayit.soyisim);
        printf("%s\n\n",mevcutkayit.telenosu);
    }
    fclose(fptr);
}
