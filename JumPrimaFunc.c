/* Nama File    		: JumPrimaFunc.c */
/* Deskripsi    		: Menghitung dan menampilkan jumlah bilangan prima*/
/* Pembuat      		: 24060122130056 */
/*Tanggal Pembuatan		: 27 Maret 2023 */

#include <stdio.h>

int JumPrim (int a){

/*kamus lokal*/
    int faktor, jumlah = 0;
/*Algoritma*/
    for (int i = 1; i <= a & a > 0; i++) {
        faktor = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                faktor ++;
            }
        }
        if (faktor == 2){
            jumlah+=i;
        }
    }
    return jumlah;
}

int main(){
    int N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N < 0){
        printf("Input harus positif");
    }
    else{
        printf("Jumlah prima adalah ");
        printf("%d",JumPrim(N));
    }

return 0;
}

