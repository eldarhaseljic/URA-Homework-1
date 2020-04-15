#include<stdexcept>
#include<iostream>
#include<vector>
#include<string>

void binarni(int n, std::vector<int>& v)
{ 
  if(n==1){ v.push_back(1); return; }
  if(n==0){ v.push_back(0); return; }
  
  int x;
  x=n/2;
  binarni(x,v);
  n=n%2;
  v.push_back(n);
  return;
}

unsigned int potenciraj (int baza, int eksponent)
{
  if(eksponent==0){ return 1;}
  return baza*potenciraj(baza, eksponent-1);
}

int decimalni(unsigned int broj, int vel)
{
  if(broj==0){return 0;}
  int temp=broj%10;
  return temp*potenciraj(2,vel)+decimalni(broj/10,vel+1);
}

int main(int argc, char *argv[])
{
  int n;
  std::vector<int> binarni_zapis;
  std::cout << std::string(50,'-') << std::endl;
  std::cout << "Unesite neki cijeli broj: ";
  std::cin >> n;
  binarni(n,binarni_zapis);
  std::cout << "Binarni zapis broja " << n << " je: " ;
  for(auto el : binarni_zapis)
  {
    std::cout << el;
  }
  std::cout << std::endl << std::string(50,'-')<< std::endl;
  
  std::cout << "Unesite neki binarni broj: ";
  unsigned int broj;
  std::cin >> broj;
  int i=0;
  std::cout << "Decimalni zapis broja "<< broj << " je: ";
  std::cout << decimalni(broj,i) << std::endl;
  std::cout << std::string(50,'-') << std::endl;
  return 0;
}
