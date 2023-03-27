/* Nama File    		: JumPrimaProc.c */
/* Deskripsi    		: Menghitung dan menampilkan jumlah bilangan prima*/
/* Pembuat      		: 24060122130056 */
/*Tanggal Pembuatan		: 27 Maret 2023 */

#include <stdio.h>

void Jumprim (int jumlah, int N){
/*kamus lokal*/
    int faktor;
/*Algoritma*/

    printf("Jumlah prima adalah ");
    for (int i = 1; i <= N & N > 0; i++) {
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
    printf("%d",jumlah);
}

int main(){
    int N;
    int jumlah = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N < 0){
        printf("Input harus positif");
    }
    else{
        (Jumprim(jumlah,N));
    }

return 0;
}
