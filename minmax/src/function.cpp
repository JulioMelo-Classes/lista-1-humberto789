#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.

    int maior = -1;
    int menor = -1;
    int valor_maior=V[0];
    int valor_menor=V[0];
    std::pair<int, int> resultado;

    for(int i = 0; i < (int) n; i++){
      if(V[i] >= valor_maior){
        maior = i;
        valor_maior = V[i];
      }
    }

    for(int i = n-1; i>=0; i--){
      if(V[i] <= valor_menor){
        menor = i;
        valor_menor = V[i];
      }
    }

    resultado = {menor, maior};

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return resultado;
}
