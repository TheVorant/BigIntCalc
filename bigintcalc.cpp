#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "BigInt.h"

using namespace std;

int main()
{

    while(true)
    {
      string line;
      cout << "Please enter a valid equation for the RPN calculator (enter 'exit' to quit): " << "\n";
    
      getline(cin, line);
      if (line == "exit") 
      {
        cout << "Program Exited\n";
        break;
      }
    
      istringstream in(line); 
      string equat;
    
      while (true) 
      {
        try
        {
         rpn(in);
        }
        catch(exception e)
        {
          cout << "Something went scary";
        }
        break;
      }    
    }
}   
