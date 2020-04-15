#include<iostream>
#include<string>

bool provjera(std::string rijec)
{ 
  int duzina=rijec.size()-1;
  int i = 0;
  if(i>=duzina){return true;}
  if(rijec.at(i)==rijec.at(duzina)){
    rijec=rijec.substr(1,duzina-1);
    provjera(rijec);
    return true;
  }
  return false;
}



int main(int argc, char *argv[])
{
  std::cout << "Vasa rijec moze da sadrzi " << std::endl;
  std::cout << "*NIZ BROJEVA*";
  std::cout << "\t" << "*NIZ KARAKTRERA*";
  std::cout << "\t" << "*NIZ SIMBOLA*" << std::endl;
  std::cout << "Unesite vasu rijec: ";
  std::string rijec;
  std::cin >> rijec;
  std::cout << std::string(50,'-') << std::endl; 
  if(provjera(rijec))
  { 
    std::cout << "Vasa rijec \" "<< rijec << " \" ";
    std::cout << "jeste palindrom." << std::endl;
    std::cout << std::string(50,'-') << std::endl;
  }
  else
  {
    std::cout << "Vasa rijec \" "<< rijec << " \" ";
    std::cout << "nije palindrom." << std::endl;
    std::cout << std::string(50,'-') << std::endl;
  }
  return 0;
}

