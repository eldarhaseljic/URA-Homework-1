#include<iostream>
#include<vector>
#include<string>

double proizvod(int n)
{
  if(n<2){ return 1; }
  if(n%2==1)
  {
    n=n-1;
    return n*proizvod(n-2);
  }
  else
  {
    return n*proizvod(n-2);
  }
}

int main(int argc, char *argv[])
{
  std::cout << "Unesite neki proizvoljan broj: ";
  int n;
  std::cin >> n;
  std::cout << std::string(50,'-') << std::endl;
  std::cout << "Proizvod svih parnih brojeva manjih i jednakih od ";
  std::cout << n << " je: " << proizvod(n) << std::endl;
  std::cout << std::string(50,'-') << std::endl;
  return 0;
}
