#include<iostream>
#include<vector>
#include<stdexcept>

long sum(int* array, int n)
{

  if(n==0)
  {
    return array[0];
  }
  return array[n]+sum(array,n-1);
};

int main(int argc, char *argv[])
{
  std::cout << "Unesite broj elemenata u nizu: " ;
  int n;
  std::cin >> n;
  if(n<=0) throw std::invalid_argument ("Lose dimenzije niza");
  
  std::cout << "Unesite brojeve u niz: ";
  int brojevi[n];
  for(auto i=0; i<n;i++)
  {
    std::cin >> brojevi[i];
  }

  std::cout << std::string(50,'-') << std::endl;
  std::cout << "Brojevi u niz su: ";
  for(auto i=0; i<n ; i++)
  {
    std::cout << brojevi[i] << "  ";
  }
  std::cout << std::endl;
  std::cout << std::string(50,'-') << std::endl;

  std::cout << "Suma navedenih brojeva je: ";
  std::cout << sum(brojevi, n-1);
  std::cout << std::endl;
  std::cout << std::string(50,'-') << std::endl;
  return 0;
}
