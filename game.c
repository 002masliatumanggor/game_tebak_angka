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

    printf("\n kami sudah memiliki angka rahasia!");
    printf("kamu punya %d percobaan!\n", limit);

    while(stat){
        int rahasia = (rand() %10) + 1;
        int limit = 3;
        int status = tebak(rahasia, 1, limit);
 }
