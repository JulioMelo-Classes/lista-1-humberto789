#include "function.h"

/*ok*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    int soma; 
    int primeira_seq = 1, segunda_seq = 1; 
    std::vector<unsigned int> vetor;

    if(n>=2 && n!=1){
      vetor.push_back(1);
      vetor.push_back(1);
      if(n>=3){
        while(true){                          
          soma = primeira_seq + segunda_seq;//ao invés de usar assim vc poderia simplesmente usar os elementos do vetor
          primeira_seq = segunda_seq;                           
          segunda_seq = soma;
          if(segunda_seq<n){
            vetor.push_back(segunda_seq); 
          }else{
            break;
          }           
        }
      }
    }   
    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return vetor;
}
