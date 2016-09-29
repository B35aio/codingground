// exemplo da fração

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()

{
  int a, b;
  
  cout << "Entre com a fração" << endl;
  cin >> a >> b;  
    
  if (b != 0) cout << "A fração é: " << 1.0 * a/b << endl;  
  else cout << "Erro: denominador igual a 0." << endl;  
  
  }
