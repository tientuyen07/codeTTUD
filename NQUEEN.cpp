#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <dos.h> 
#define N  8 
#define D  (2*N-1) 
#define SG  (N-1) 
#define TRUE 1 
#define FALSE 0 
void hoanghau(int);
void inloigiai(int  loigiai[]); FILE *fp;
int  A[N], B[D], C[D], loigiai[N];
int soloigiai = 0;
void hoanghau(int i){
 int j;
 for (j = 0; j < N; j++){
  if (A[j] && B[i - j + SG] && C[i + j]) {
   loigiai[i] = j;
   A[j] = FALSE;
   B[i - j + SG] = FALSE;
   C[i + j] = FALSE;
   if (i == N - 1){
    soloigiai++;
    inloigiai(loigiai);
    delay(500);
   }
   else
    hoanghau(i + 1);
   A[j] = TRUE;
   B[i - j + SG] = TRUE;
   C[i + j] = TRUE;
  }
 }
}
void inloigiai(int *loigiai){
 int j;
 printf("\n Lời giải %3d:", soloigiai);
 fprintf(fp, "\n Lời giải %3d:", soloigiai);
 for (j = 0; j < N; j++){
  printf("%3d", loigiai[j]);
  fprintf(fp, "%3d", loigiai[j]);
 }
}
void main(void){
 int i; clrscr();
 fp = fopen("loigiai.txt", "w");
 for (i = 0; i < N; i++)
  A[i] = TRUE;
 for (i = 0; i < D; i++){
  B[i] = TRUE;
  C[i] = TRUE;
 }
 hoanghau(0);
 fclose(fp);
}

