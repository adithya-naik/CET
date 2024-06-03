#include <iostream>
using namespace std;
int main ()
{
  int num = 0, fact=1;
  std::cout << "Enter a Number : ";
  std::cin >> num;
  for(int i=1;i<=num;i++){
      fact*=i;
  }
  std::cout << "Factorial value : "<<fact;
}
