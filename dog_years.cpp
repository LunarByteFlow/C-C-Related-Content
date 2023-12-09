#include <iostream>

int main() {
  int pesos,reais,soles,dollars,conversion_rate1,conversion_rate2,conversion_rate3;
  std::cout<<"Enter number of Colombian Pesos:\n";
  std::cin>>pesos;

  std::cout<<"Enter number of Brazillian Reais:\n";
  std::cin>>reais;

  std::cout<<"Enter of Peruvian Soles:\n";
  std::cin>>soles;

  dollars = (conversion_rate1*pesos)+(conversion_rate2*reais)+(conversion_rate3*soles);

  std::cout<<"US Dollars = $"<<dollars<<"____________";
  
  
  
}
