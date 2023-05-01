#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
      printf("\ni = %d",i);
      //APRESENTA O CONTADOR (VAI DE 0 A 4)
      printf(" vet[%d] = %.1f",i, vet[i]);
      /*
      %d APRESENTARA O CONTADOR
      %.1f VALOR FLOAT ARMAZENADO EM vet NA POSICAO i COM 1 CASA DESCIMAL
      */
      printf("*(f + %d) = %.1ftt",i, *(f+i));
      /*
      *(f+%d) APRESENTA O PONTEIRO f SOMADO COM O CONTADOR
      %.1f O PONTEIRO AO SER SOMADO COM UM INTEIRO ELE "PULA" PARA A PROXIMA "VAGA" NA MEMORIA, COMO f APONTA vet SOMAR ZERO E IGUAL A vet[0]. SOMAR 3 E IGUAL A vet[3]. NO CASO SERA ACESSADO O VALOR NESSE ENDERECO DE MEMORIA *(f+i) 
      */
      printf(" &vet[%d] = %X",i, &vet[i]);
      /*
      %d APRESENTA O CONTADOR
      %X APRESENTA O ENDERECO NA MEMORIA DO VALOR vet EM i
      */
      printf("(f + %d) = %X",i, f+i);
      /*
      %d APRESENTA O CONTADOR
      %X APRESENTA O ENDERECO APONTADO PELO PONTEIRO, COM ESTA SOMADO COM i ELE VAI i POSICOES SEGUINTES NA MEMORIA
      */
  }
}
