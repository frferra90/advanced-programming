#include <iostream> 
#include <string> 
#include <math.h> 



int get_double()
{
  double result;
  bool flag; 
  
  flag=true;
  std::cout << "Give me a double, please" << std::endl;

  while(flag)
  {
    //Read the number: valid number
    if (std::cin >> result)
    {
      flag=false;
    }
    //Read the number: not a number
    else
    {
      std::cin.clear();
      std::cin.ignore(10000,'\n');
      std::cout << "Not a valid double! Retry!" << std::endl;
    }

  }

  return result;
}

int get_int()
{
  double readnum;
  bool flag; 
  
  flag=true;
  std::cout << "Give me an integer, please" << std::endl;

  while(flag)
  {
    //Read the number: valid number...but is it an int?
    if (std::cin >> readnum)
    {
      if (floor(readnum)==readnum)
      {
        flag=false;
      }
      else
      {
        std::cin.clear();
        std::cin.ignore(10000,'\n');               
        std::cout << "Not a valid integer! Retry!" << std::endl;
      }
    }
    //Read the number: not a number
    else
    {
      std::cin.clear();
      std::cin.ignore(10000,'\n');
      std::cout << "Not a valid integer! Retry!" << std::endl;
    }

  }

  return floor(readnum);
}

int main ()
{
  int xi;
  double xd;

  xi=get_int();
  std::cout << std::endl;  
  xd=get_double();

  std::cout << std::endl << "Integer: " << xi;
  std::cout << std::endl << "Double: " << xd;
  std::cout << std::endl;

  return 0;
}


