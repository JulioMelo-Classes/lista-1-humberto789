/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

bool verificar_intervalo(int inicio, int fim, int numero){
  bool apareceu = false;
  for(int i=inicio; i<fim; i++){
    if(numero==i){
      apareceu = true;
    }
  }

  return apareceu;
}

double calcular_porcentagem(int numero_total, int numero_parcial ){
  double resultado = (100*(double)numero_parcial)/(double)numero_total;

  return resultado;
}

int main(void)
{
    int numero, qtd_numeros=0;
    int primeiro_intervalo = 0, segundo_intervalo = 0, terceiro_intervalo = 0, quarto_intervalo = 0, fora = 0;
    bool apareceu;

    while(cin >> std::ws >> numero){
      apareceu = false;

      if(verificar_intervalo(0,25, numero)){
        apareceu = true;
        primeiro_intervalo++;
      }
      else if(verificar_intervalo(25,50, numero)){
        apareceu = true;
        segundo_intervalo++;
      }
      else if(verificar_intervalo(50,75, numero)){
        apareceu = true;
        terceiro_intervalo++;
      }
      else if(verificar_intervalo(75,100, numero)){
        apareceu = true;
        quarto_intervalo++;
      }

      if(!apareceu){
        fora++;
      }
      qtd_numeros++;
    }

    std::cout<<std::setprecision(4)<<calcular_porcentagem(qtd_numeros, primeiro_intervalo)<<endl;

    std::cout<<std::setprecision(4)<<calcular_porcentagem(qtd_numeros, segundo_intervalo)<<endl;

    std::cout<<std::setprecision(4)<<calcular_porcentagem(qtd_numeros, terceiro_intervalo)<<endl;

    std::cout<<std::setprecision(4)<<calcular_porcentagem(qtd_numeros, quarto_intervalo)<<endl;
    
    std::cout<<std::setprecision(4)<<calcular_porcentagem(qtd_numeros, fora)<<endl;

    return 0;
}
