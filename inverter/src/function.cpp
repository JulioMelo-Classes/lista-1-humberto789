#include "function.h"

#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr ){
  std::string aux;
  int i = 0, j = (int) SIZE - 1;

  while(i < j){
    aux = arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
    i++;
    j--;

  }
}

