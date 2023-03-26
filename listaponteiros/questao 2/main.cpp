#include <iostream>
using namespace std;
int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    
    /*Saida sera:
    ...4094 7 7 15 9
     
    --p-- exibe o endereco apontado (i) ...4094
    
    --*p+2-- exibe o conteudo apontado de p somado 2 (i+2== 7)
    
    --**&p--
     exibe o endereco de p (&p)
     exibe o conteudo de p (no caso e o endereco de i == *&p)
     exibe o conteudo do endereco resgatado em p (conteudo de i == **&p)
    
    
    --3**p-- exibe o conteudo apontado por p (i==*p) e multiplica por 3 (3**p == 15)
    
    --**&p+4--
     exibe o conteudo do endereco armazenado em p (**&p) e soma 4 (**&p+4==9)
    */

    return 0;
}
