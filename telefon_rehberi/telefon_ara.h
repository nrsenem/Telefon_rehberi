int telefonara(char* ptr)
{
    kayit mevcutkayit;
    FILE* fptr;
    int i=0;
    fptr=fopen("C:\\Users\\nrsen\\Desktop\\telefon_rehberi\\telefon_rehberi\\data.txt","r");
    if(fptr==NULL)
    {
        return -1;
    }
    while(!feof(fptr))
    {
        fscanf(fptr,"%s%s%s",mevcutkayit.isim,mevcutkayit.soyisim,mevcutkayit.telenosu);
       if(!strcmp(ptr,mevcutkayit.isim))
       {
           printf("%s\t",mevcutkayit.isim);
           printf("%s\t",mevcutkayit.soyisim);
           printf("%s\n",mevcutkayit.telenosu);
           i++;
       }
    }
    fclose(fptr);
    return i;
}
