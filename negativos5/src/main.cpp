#include <iostream>
using namespace std;

const int SIZE = 5; // input size.

int main(void)
{
  int numero;
  int qtd_negativos = 0;
  for(int i=0; i<5; i++){
    cin>>numero;

    if(numero < 0){
      qtd_negativos++;
    }
  }

  cout<<qtd_negativos;

  return 0;
}
