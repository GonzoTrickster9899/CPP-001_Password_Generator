// header file
#include <iostream>
#include <time.h>
using namespace std;

//main function
int main()
{
  srand(time(0));                                 // Seeding for random
  string pass;
  
  // All data
  string data = "abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "0987654321"
                "~'!@#$%^&*()-=_+[]|{};:,./<>";
  
  for(int i = 1; i <= 12; i++){
    pass = pass + data[rand() % 93];             // getting generated
  }
  
  cout<<"Your password: "<<pass;                 // displaying
  
  return 0;
}
