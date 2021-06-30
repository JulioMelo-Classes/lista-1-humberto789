 /*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


/*
faltou validar a entrada, vou considerar 80%
*/
int main(void)
{
    Ponto r1;
    Ponto r2;
    Ponto p;

    int x;

    while( cin >> std::ws >> r1.x && cin >> std::ws >> r1.y && cin >> std::ws >> r2.x && cin >> std::ws >> r2.y && cin >> std::ws >> p.x && cin >> std::ws >> p.y) {

      if(!(r1.x==r2.x && r1.y==r2.y)){
        location_t resultado = pt_in_rect(r1, r2, p);

        if(location_t::INSIDE == resultado){
          cout << "inside" << endl;
        }else if(location_t::BORDER == resultado){
          cout << "border" << endl;
        }else if(location_t::OUTSIDE == resultado){
          cout << "outside" << endl;
        }
      }
      
    }


    return 0;
}
