#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int tebak(int rhs, int percobaan, int limit);


int main(void){
    int stat = 1;
    char ans[2];
    int limit = 3;


    printf("\n========================================================\n");
    printf("\tSelamat Datang Di Permainan Tebak Angka!\t");
    printf("\n========================================================\n");
    srand(time(NULL));

    printf("\nkami sudah memiliki angka rahasia!");
    printf("kamu punya %d percobaan!\n", limit);

    while(stat){
        int rahasia = (rand() %10) + 1;
        int limit = 3;
        int status = tebak(rahasia, 1, limit);
            printf("\n Ingin Bermain Lagi?\n");
            printf("jawab(y/n):");
            scanf("%c", &ans[0];

            if(ans[0] == 'y' || ans[0] == 'y'){
                stat = 1;
            }else{
                stat = 0;
                printf("\n\t===Terima Kasih Sudah Bermain===\t\n");
            }
    }
    return 0;
}

int tebak (int rhs, int percobaan, int limit){
    int angka;

    printf("\npercobaan %d dari %d", percobaan, limit);
    printf("\n======Silahkan Tebak Angka 1-10!=====\n");
    scanf(" %d", &angka);

    if(angka > rhs){
        printf("\n\tAngka %d Terlalu Besar! Coba lagi!\n", angka);
            if(percobaan == limit){
                printf("\n\t===\tGAME OVER\t===\t\n");
                printf("jawaban yang benar: %d\n",rhs);
                return 0;    
               }
        return tebak(rhs, percobaan + 1, limit);
    }else if(angka < rhs) {
        printf("\n\tAngka %d terlalu  kecil! Coba lagi!\n", angka);
            if(percobaan == limit){
                printf("\n\t===\tGAME OVER\t===\t\n");
                printf("jawaban yang benar: %d\n",rhs);
                return 0;    
               }
        return tebak(rhs, percobaan + 1, limit);
    }else if(angka == rhs) {
        printf("\t\t Selamat!! Angka %d Tebakan Anda Benar!!\n", angka);
    }
        return 1;
}
