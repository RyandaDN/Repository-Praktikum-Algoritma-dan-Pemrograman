#include <stdio.h>
#include <string.h>
main()
{
  int nilai;
  char huruf[100];
  printf("Masukkan Nilai : "); scanf("%d",&nilai);
  
  if(nilai <= 100){
    if(nilai >= 81){
      strcpy(huruf, "A");
    }
    else if(nilai >= 71){
      strcpy(huruf, "B");
    }
    else if(nilai >= 61){
      strcpy(huruf, "C");
    }
    else if(nilai >= 51){
      strcpy(huruf, "D");
    }
    else{
      strcpy(huruf, "E");
    }
  }
  else{
    printf("Nilai tidak boleh lebih dari 100");
  }
  printf("Nilai Anda : %d\n", nilai);
  printf("huruf Anda : %s", huruf);

}
