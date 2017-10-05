#include <iostream>
#include <string>

int main ()
{
  /*Declaration of variables*/
  std::string read_line, prev_line;
  int count;

  /*Read first line*/
  std::getline(std::cin,prev_line);
  count=1;
  /*Read following lines*/
  while(std::getline(std::cin,read_line))
  {
    if(read_line==prev_line)
    {
      count=count+1;
    }
    else
    {
      std::cout << prev_line << "\t" << count << "\n";
      prev_line=read_line;
      count=1;
    }

  }
  std::cout << prev_line << "\t" << count << "\n";
  
}

