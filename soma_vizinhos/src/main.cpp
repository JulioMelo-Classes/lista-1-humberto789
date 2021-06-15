/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int valor;
    int posicoes;

    while(true){

      cin>>valor;
      cin>>posicoes;
      int resultado = 0;

      if(posicoes>1000 | posicoes<-1000){
        return 0;
      }
      else if(posicoes > 0){
        for(int i = 0; i<posicoes; i++){
          resultado = resultado + valor + i;
        }
      }else if(posicoes < 0){
        for(int i = 0; i>posicoes; i--){
          resultado = resultado + valor + i;
        }
      }else if(posicoes == 0){
        resultado = valor;
      }

      posicoes=10000;

      cout<<resultado<<endl;

    }

    return 0;
}
