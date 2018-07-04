#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define BOYUT 10000
#define RULE_1F 1
#define RULE_20 2
int etiket_bul(int);
int tag_len1f(int,int,int*);
void tmp_1f(int);
int tag_len20(int,int *);
void tmp_20();
int fonk_1f(int [],int);
int fonk_20(int [],int);
int reverse_number(char);
void your_type(int);
void fonk_space();
int fonk_yazdir(int*,int);

int *global_point;
int *ptr_katman1,*ptr_katman1_uz,*deger_1;
int *ptr_katman2,*ptr_katman2_uz,*deger_2;
int *ptr_katman3,*ptr_katman3_uz,*deger_3;
int *ptr_katman4,*ptr_katman4_uz,*deger_4;
int *sayac2_ad,*dizi_ad,*y1;
//int *tutan_0x20;
//int *degree;

//#define CALIS
#define DOSYA
#define CONTENT

int main(){
#ifdef CALIS
int y;
#endif
    int a,sayac=0, point,katman1=0,katman2=0,katman3=0,katman4=0;//,tutan=0,degree_1f=0;
    int katman1_uz=0,katman2_uz=0,katman3_uz=0,katman4_uz=0,deger1_v=0,deger2_v=0,deger3_v=0,deger4_v=0;
    #ifndef CALIS
    int dizi[BOYUT];
    #endif
    //degree=&degree_1f;
    //tutan_0x20=&tutan;
    ptr_katman1=&katman1;
    ptr_katman2=&katman2;
    ptr_katman3=&katman3;
    ptr_katman4=&katman4;
    deger_1=&deger1_v;
    deger_2=&deger2_v;
    deger_3=&deger3_v;
    deger_4=&deger4_v;
    ptr_katman1_uz=&katman1_uz;
    ptr_katman2_uz=&katman2_uz;
    ptr_katman3_uz=&katman3_uz;
    ptr_katman4_uz=&katman4_uz;
    global_point=&point;
#ifndef CALIS
    printf("\t\t\t#TLV Parser#\n1) Manuel Giriş\n2) Dosyadan çek\n");
    int y;
    scanf("%d",&y);
    if(y==2){
    #ifndef CALIS
    FILE *file;
    char input_txt[BOYUT];
    int sayac2;
    sayac2_ad=&sayac2;
    file=fopen("tlv.txt","r");
    int h;
    for(h=0;!feof(file);h++){
        input_txt[h]=fgetc(file);
        sayac2=h;
    }
    printf("Karakter diziniz: ");
    for(h=0;sayac2!=h;h++){
        printf("%c",input_txt[h]);
    }
    fclose(file);

    int c,b,toplam=0;

    for(c=0,b=0;(sayac2+1)!=b;b+=2,c++){
    dizi[c]=((reverse_number(input_txt[b]))<<4)+(reverse_number(input_txt[b+1]));
    }
    dizi_ad=dizi;
    /*for(h=0;(sayac2-1)/2!=h;h++){
        printf("%.2x",dizi[h]);
    }*/

    /*
    for(b=0;sayac2!=b;b++){
        if((reverse_number(input_txt[b]))==444){
            printf("Lütfen Hexadecimal sayı giriniz!");
            return 0;
        }else if ((sayac2+1)%2==1){
            printf("Girişte hata var > Tek sayı girdiniz..");
            return 0;
        }
    }
    if ((sayac2+1)<6){
            printf("Girişte hata var > Girdiğiniz sayı çok kısa.");
            return 0;
        }
    printf("\nKarakter diziniz: ");
    for(b=0;sayac2!=b;b++){
        if(b%2==0){
            printf(" ");
        }
    printf("%x",input_txt_hex[b]);
    }
    printf("\n");*/
    #endif
    }else if (y==1){

    #ifndef CALIS
    printf("\t\t\t##TLV Parser##\n");
    printf("Çevirmek istediğiniz değer: ");
    char input[BOYUT];
    gets(input);
    gets(input);
    int c,b,toplam=0;
    for(c=0,b=0;input[b]!='\0';b+=2,c++){
    dizi[c]=((reverse_number(input[b]))<<4)+(reverse_number(input[b+1]));
    }
    dizi_ad=dizi;
    for(b=0;input[b]!='\0';b++){
        if((reverse_number(input[b]))==444){
            printf("Lütfen Hexadecimal sayı giriniz!");
            return 0;
        }else if (strlen(input)%2==1){
            printf("Girişte hata var > Tek sayı girdiniz..");
            return 0;
        }
    }
    if (strlen(input)<6){
            printf("Girişte hata var > Girdiğiniz sayı çok kısa.");
            return 0;
        }
    printf("\nKarakter diziniz: ");
    for(b=0;strlen(input)!=b;b++){
        if(b%2==0){
            printf(" ");
        }
    printf("%c",input[b]);
    }
    printf("\n");
    sayac=(strlen(input))/2;
    y1=&sayac; //for oto log onssssssssssssssssssssssssssssssssssssss
    #endif

    }else{
    printf("Yanlış seçim.");
    }
#endif
    //for oto log on >> /*

    //for oto log on >> */
    //int dizi[BOYUT]={0x1f,0x01,0x02,0x65,0x66,0x6f,0x07,0x9f,0x04,0x01,0x66,0x16,0x01,0x67,0x1c,0x01,0x68};
    //for oto log off >> /*
    #ifdef CALIS
    int dizi[BOYUT]={0x23,0x2d,0x09,0x08,0x56,0x65,0x72,0x69,0x73,0x6f,0x66,0x74,0xA8,0x27,0xD1,0x0D,0x43,0x61,0x6e,0x65,0x72,
                     0x20,0x44,0x65,0x6d,0x69,0x72,0x63,0x69,0xD2,0x05,0x54,0x6f,0x6c,0x67,0x61,0xD3,0x06,0x47,0xc3,
                     0xb6,0x7A,0x64,0x65,0xD4,0x07,0x45,0x6d,0x69,0x72,0x68,0x61,0x6e,0x14,0x13,0x44,0x69,0xc4,0x9f,0x65,
                     0x72,0x20,0xc5,0x9f,0x69,0x72,0x6b,0x65,0x74,0x6c,0x65,0x72,0x2e,0x2e};
    for (a=0;dizi[a]!=NULL;a++){
        sayac++;
    }
    #endif
    //For oto log off >> */
    fonk_space();
    if(y==2){
    sayac=(*sayac2_ad-1)/2;
    }else if (y==1){
    sayac=(*y1);
    }
    for(point=0;(point<sayac);){
        printf("\n");
        int i;

        if((*ptr_katman1)!=0){
            printf("\t");
        }
        if((*ptr_katman2)!=0){
            printf("\t");
        }
        if((*ptr_katman3)!=0){
            printf("\t");
        }
        if ((*ptr_katman4)!=0){
            printf("\t");
        }


        if(etiket_bul(dizi[point])==RULE_1F){//1F kuralı
        tag_len1f(dizi[point],dizi[point+1],&dizi[point+2]);
        fonk_space();
        tmp_1f(dizi[point]);
        fonk_1f(&dizi[point+3],dizi[point+2]);
        }
        else if(etiket_bul(dizi[point])==RULE_20){//20 kuralı
        tag_len20(dizi[point],&dizi[point+1]);
        fonk_space();
        tmp_1f(dizi[point]);
        fonk_space();
        tmp_20();
        fonk_20(&dizi[point+2],dizi[point+1]);
        }
        else{//Diğerleri
        tag_len20(dizi[point],&dizi[point+1]);
        fonk_space();
        tmp_1f(dizi[point]);
        fonk_yazdir(&dizi[point+2],dizi[point+1]);
        }
    }
    //printf("%d",sayac);
    return 0;
}

int fonk_1f(int dizi[],int uzunluk){

    if(uzunluk==0x81){
        uzunluk=dizi[0];
        (*global_point)+=uzunluk+3+1;
        dizi=&dizi[1];
    }else if (uzunluk==0x82){
        uzunluk=((dizi[0]<<2)+dizi[1]);
        (*global_point)+=uzunluk+3+2;
        dizi=&dizi[2];
    }else if (uzunluk==0x83){
        uzunluk=((dizi[0]<<4)+(dizi[1]<<2)+dizi[2]);
        (*global_point)+=uzunluk+3+3;
        dizi=&dizi[3];
    }else if(uzunluk>0x83){
        printf("Hata! Uzunluk çok fazla.");
        return 0;
    }else{
        (*global_point)+=uzunluk+3;
    }

        int i,say=0,kes=0,kont=0;
        fonk_space();
        printf("Hex:  ");
        for(i=0;i!=uzunluk;i++){
            printf("%.2X ",dizi[i]);
            if(kes%12==0 && kont==0 && kes!=0){
                if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
                say=0;
                kont=1;
            }
            if(say%15==0 && say!=0){
            if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
            }
            say++;
            kes++;
        }
        printf("\n");
        fonk_space();
        printf("Content: ");
        //printf("\n");
        //fonk_space();
        say=0;
        kes=0;
        kont=0;
        #ifdef CONTENT
        for(i=0;i!=uzunluk;i++){
        if(dizi[i]<0x7F &&dizi[i]>0x1F){
            printf("%c",dizi[i]);
        }else{
            printf("%s",".");
        }
        if(kes%20==0 && kont==0 && kes!=0){
                if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
                say=0;
                kont=1;
            }
            if(say%44==0 && say!=0){
            if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
            }
            say++;
            kes++;
        }
        #endif
        printf("\n");

        if((*ptr_katman4)!=0){
            (*deger_4)+=uzunluk+3;
            if((*ptr_katman4_uz)==(*deger_4)){
                (*ptr_katman4)=0;
                (*deger_4)=0;
            }
        }else
        if((*ptr_katman3)!=0){
            (*deger_3)+=uzunluk+3;
            if((*ptr_katman3_uz)==(*deger_3)){
                (*ptr_katman3)=0;
                (*deger_3)=0;
            }
        }else
        if((*ptr_katman2)!=0){
            (*deger_2)+=uzunluk+3;
            if((*ptr_katman2_uz)==(*deger_2)){
                (*ptr_katman2)=0;
                (*deger_2)=0;
            }
        }else
        if((*ptr_katman1)!=0){
            (*deger_1)+=uzunluk+3;
            if((*ptr_katman1_uz)==(*deger_1)){
                (*ptr_katman1)=0;
                (*deger_1)=0;
            }
        }


}

int fonk_20(int dizi[],int uzunluk){

    if(uzunluk==0x81){
        uzunluk=dizi[0];
        dizi=&dizi[1];
        (*global_point)+=2+1;
    }else if (uzunluk==0x82){
        uzunluk=((dizi[0]<<2)+dizi[1]);
        dizi=&dizi[2];
        (*global_point)+=2+2;
    }else if (uzunluk==0x83){
        uzunluk=((dizi[0]<<4)+(dizi[1]<<2)+dizi[2]);
        dizi=&dizi[3];
        (*global_point)+=2+3;
    }else if(uzunluk>0x83){
        printf("Hata! Uzunluk çok fazla.");
        return 0;
    }else{
        (*global_point)+=2;
    }


    if((*ptr_katman1)==0){
        (*ptr_katman1)++;
        (*ptr_katman1_uz)=uzunluk;
    }
    else if((*ptr_katman2)==0){
        (*ptr_katman2)++;
        (*ptr_katman2_uz)=uzunluk;
    }
    else if((*ptr_katman3)==0){
        (*ptr_katman3)++;
        (*ptr_katman3_uz)=uzunluk;
    }
    else if((*ptr_katman3)==0){
        (*ptr_katman3)++;
        (*ptr_katman4_uz)=uzunluk;
    }



    //(*global_point)+=2;
    //(*tutan_0x20)=(*global_point);
    //(*tutan_0x20)+=uzunluk;

}

int fonk_yazdir(int dizi[],int uzunluk){

    if(uzunluk==0x81){
        uzunluk=dizi[0];
        dizi=&dizi[1];
        (*global_point)+=uzunluk+2+1;
    }else if (uzunluk==0x82){
        uzunluk=((dizi[0]<<2)+dizi[1]);
        dizi=&dizi[2];
        (*global_point)+=uzunluk+2+2;
    }else if (uzunluk==0x83){
        uzunluk=((dizi[0]<<4)+(dizi[1]<<2)+dizi[3]);
        dizi=&dizi[3];
        (*global_point)+=uzunluk+2+3;
    }else if(uzunluk>0x83){
        printf("Hata! Uzunluk çok fazla.");
        return 0;
    }else{
        (*global_point)+=uzunluk+2;
    }

    //(*global_point)+=uzunluk+2;
    int i,say2=0,kes=0,kont=0;
        fonk_space();
        printf("Hex:  ");
        for(i=0;i!=uzunluk;i++){
            printf("%.2X ",dizi[i]);
            if(kes%12==0 && kont==0 && kes!=0){
            if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
            say2=0;
            kont=1;
            }
            if(say2%15==0 && say2!=0){
            if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
            }
            say2++;
            kes++;
        }
        printf("\n");
        fonk_space();
        printf("Content: ");
        //printf("\n");
        //fonk_space();
        say2=0;
        kes=0;
        kont=0;
        #ifdef CONTENT
        for(i=0;i!=uzunluk;i++){
        if(dizi[i]<0x7F && dizi[i]>0x1F){
            printf("%c",dizi[i]);
        }else{
            printf("%s",".");
        }
            if(kes%34==0 && kont==0 && kes!=0){
                if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
                say2=0;
                kont=1;
            }
            if(say2%44==0 && say2!=0){
            if(i!=uzunluk){
            printf("\n");
            fonk_space();
            }
            }
            say2++;
            kes++;
        }
        #endif
        printf("\n");


        if((*ptr_katman4)!=0){
            (*deger_4)+=uzunluk+2;
            if((*deger_4)==(*ptr_katman4_uz)){
                (*ptr_katman4)=0;
                (*deger_4)=0;
            }
    }else if((*ptr_katman3)!=0){
            (*deger_3)+=uzunluk+2;
            if((*deger_3)==(*ptr_katman3_uz)){
                (*ptr_katman3)=0;
                (*deger_3)=0;
            }
    }else if((*ptr_katman2)!=0){
            (*deger_2)+=uzunluk+2;
            if((*deger_2)==(*ptr_katman2_uz)){
                (*ptr_katman2)=0;
                (*deger_2)=0;
            }
    }else if((*ptr_katman1)!=0){
            (*deger_1)+=uzunluk+2;
            if((*deger_1)==(*ptr_katman1_uz)){
                (*ptr_katman1)=0;
                (*deger_1)=0;
            }
    }

}

int etiket_bul(int deger){
    if((deger&0x1f)==0x1f){
        return RULE_1F;
    }
    else if((deger&0x20)==0x20){
        return RULE_20;
    }
}

int tag_len1f(int index1,int index2,int index3[]){

    if(index3[0]==0x81){
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==((index1<<8)+index2)){
            break;
        }
    }
    if(sayi!=((index1<<8)+index2)){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }
printf("%.4X - %s",((index1<<8)+index2),birkelime);
fonk_space();
printf("Len: (%.2x)-0x%.2x - ",index3[0],index3[1]);
fclose(dosi);
    }else if (index3[0]==0x82){
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==((index1<<8)+index2)){
            break;
        }
    }
    if(sayi!=((index1<<8)+index2)){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }
printf("%.4X - %s",((index1<<8)+index2),birkelime);
fonk_space();
printf("Len: (%.2x)-0x%.2x%.2x - ",index3[0],index3[1],index3[2]);
fclose(dosi);
//printf("Tag: %.4X -- Len: (%.2x)%d \n",((index1<<8)+index2),index3[0],((index3[1]<<2)+index3[2]));
    }else if (index3[0]==0x83){
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==((index1<<8)+index2)){
            break;
        }
    }
    if(sayi!=((index1<<8)+index2)){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
        return 0;
    }
printf("%.4X - %s",((index1<<8)+index2),birkelime);
fonk_space();
printf("Len: (%.2x)-0x%.2x%.2x%.2x - ",index3[0],index3[1],index3[2],index3[3]);
fclose(dosi);
//printf("Tag: %.4X -- Len: (%.2x)%d \n",((index1<<8)+index2),index3[0],((index3[1]<<4)+(index3[2]<<2)+index3[3]));
    }else if(index3[0]>0x83){
        printf("Hata! Uzunluk çok fazla.");
        return 0;
    }else{
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==((index1<<8)+index2)){
            break;
        }
    }
    if(sayi!=((index1<<8)+index2)){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }
printf("%.4X - %s",((index1<<8)+index2),birkelime);
fonk_space();
printf("Len: 0x%.2x - ",index3[0]);
fclose(dosi);
//printf("Tag: %.2X%.2X -- Len: %d \n",index1,index2,index3[0]);
    }
    //printf("Type: %s -- Degree = %d \n",your_type(index1),*degree);
}
void tmp_1f(int index1){
    printf("Type: ");
    your_type(index1);
}
int tag_len20(int index1,int index2[]){
    if(index2[0]==0x81){
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==index1){
            break;
        }
    }
    if(sayi!=index1){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }
printf("%.2X - %s",index1,birkelime);
fonk_space();
printf("Len: (%.2x)-0x%.2x - ",index2[0],index2[1]);
fclose(dosi);
//printf("Tag: %.2X -- Len: (%.2x)%d \n",index1,index2[0],index2[1]);
    }else if (index2[0]==0x82){
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==index1){
            break;
        }
    }
    if(sayi!=index1){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }
printf("%.2X - %s",index1,birkelime);
fonk_space();
printf("Len: (%.2x)-0x%.2x%.2x - ",index2[0],index2[1],index2[2]);
fclose(dosi);
//printf("Tag: %.2X -- Len: (%.2x)%d \n",index1,index2[0],((index2[1]<<2)+index2[2]));
    }else if (index2[0]==0x83){
   FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==index1){
            break;
        }
    }
    if(sayi!=index1){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }
printf("%.2X - %s",index1,birkelime);
fonk_space();
printf("Len: (%.2x)-0x%.2x%.2x - ",index2[0],index2[1],index2[2],index2[3]);
fclose(dosi);
//printf("Tag: %.2X -- Len: (%.2x)%d \n",index1,index2[0],((index2[1]<<4)+(index2[2]<<2)+index2[3]));
    }else if(index2[0]>0x83){
        printf("Hata! Uzunluk çok fazla.");
        return 0;
    }else{
    FILE *dosi;
    int tag;
    char *value;
    char birkelime[100];
    int sayi,i;
    dosi=fopen("code.txt","r");
    while(!feof(dosi)){
    tag=fscanf(dosi,"%x",&sayi);
    for(i=0;i!=2;i++){
    value=fgets(birkelime,100,dosi);
    }
        if(sayi==index1){
            break;
        }
    }
    /*if(sayi!=index1){
        //birkelime = "Geçersiz Tag!";
        printf("\n\n**Geçersiz Tag!");
    }*/
printf("%.2X - %s",index1,birkelime);
fonk_space();
printf("Len: 0x%.2x - ",index2[0]);
fclose(dosi);
//printf("Tag: %.2X -- Len: %d \n",index1,index2[0]);
    }


}
void tmp_20(){
    printf("This is a 'Template'.\n");
    //printf("This tag is 'Template'. -- Degree %d\n",*degree);
}
void your_type(int ty){
    if((ty>>6)==0){
        printf("'Universal'.\n");
    }else if((ty>>6)==1){
        printf("'Application'.\n");
    }else if((ty>>6)==3){
        printf("'Private'.\n") ;
    }else if((ty>>6)==2){
        printf("'Context spesific'.\n") ;
    }
}

void fonk_space(){
    if((*ptr_katman1)!=0){
            printf("\t");
        }
        if((*ptr_katman2)!=0){
            printf("\t");
        }
        if((*ptr_katman3)!=0){
            printf("\t");
        }
        if ((*ptr_katman4)!=0){
            printf("\t");
        }
}

int reverse_number(char x){
    int value;
    switch(x){
        case '0':
            value=0x0;
        break;
        case '1':
            value=0x1;
        break;
        case '2':
            value=0x2;
        break;
        case '3':
            value=0x3;
        break;
        case '4':
            value=0x4;
        break;
        case '5':
            value=0x5;
        break;
        case '6':
            value=0x6;
        break;
        case '7':
            value=0x7;
        break;
        case '8':
            value=0x8;
        break;
        case '9':
            value=0x9;
        break;
        case 'A':
            value=0xA;
        break;
        case 'a':
            value=0xA;
        break;
        case 'B':
            value=0xB;
        break;
        case 'b':
            value=0xB;
        break;
        case 'C':
            value=0xC;
        break;
        case 'c':
            value=0xC;
        break;
        case 'D':
            value=0xD;
        break;
        case 'd':
            value=0xD;
        break;
        case 'E':
            value=0xE;
        break;
        case 'e':
            value=0xE;
        break;
        case 'F':
            value=0xF;
        break;
        case 'f':
            value=0xF;
        break;
        default:
            value=444;
        break;
    }
    return value;
}

