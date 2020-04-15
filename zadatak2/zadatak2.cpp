#include<iostream>
#include<string>

bool prost(int n)
{
  if(n<2) return false;
  int br=0;
  for(auto i=1;i<=n;i++){
  if(n%i==0){br++;}
  }
  if(br<=2) return true;
  else return false;
}

void funkcija(int n,int m)
{ 
  if(m>n){return;}
  int br=0;
  int x=1;
  if(prost(n) && prost(m))
  {
    std::cout << n+m << " = " << n << " + " << m << std::endl;
  }
    funkcija(n-1,m+1);
    return;

}

int main(int argc, char *argv[])
{
  std::cout << "Unesite neki broj: ";
  int n;
  std::cin >> n;
  int m=0;
  std::cout << std::string(50,'-') << std::endl;
  funkcija(n,m);

  return 0;
}
