#include <iostream>

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Run task-cli -h for help" << std::endl;
    return 1;
  }
  std::cout << "argc: " << argc << std::endl;
  std::cout << "argv: " << argv[0] << std::endl;
  return 0;
}
