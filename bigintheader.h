#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

typedef unsigned char digit;

class BigInt 
{
  protected:

      int cap, num_dig;
      bool isNeg;
      digit * array;

  public:

      BigInt();

      void RemZeros();
  
      BigInt(const string & s);
      BigInt(const BigInt & other);
      
      BigInt & operator=(const BigInt & other);
      BigInt & operator=(const string & s);
      ~BigInt();

      void print(ostream & out);
      void NicePrint(ostream & out);
      
      void size_up();
      int get(const int i);
      void set(const int index, const char value);
      void clearbig();
      
      int compare(BigInt & a, BigInt & b);      
      void uadd(BigInt a, BigInt b, BigInt& r);
      void usub(BigInt a, BigInt b, BigInt& r);
      
      BigInt operator+(BigInt& b);
      BigInt operator-(BigInt& b);     
      BigInt operator*(BigInt& b);
      BigInt operator*(int b);
      BigInt factorial(); 
	  BigInt operator+=(BigInt& b)
	  BigInt BigInt::operator-=(BigInt& b)
	  BigInt BigInt::operator*=(BigInt& b)
	  BigInt BigInt::operator/=(BigInt& b)
	  BigInt BigInt::operator%=(BigInt& b) 

	  void BigInt::plusplus()
	  void BigInt::div(int o, BigInt& res, BigInt& re)
	  BigInt BigInt::divideByInt(int i, string m)
	  BigInt BigInt::multi10(int power, BigInt& div)
	  BigInt BigInt::divide(BigInt& divisor, string m) 
      
};


ostream & operator<<(ostream & out, BigInt & value);
istream& operator>>(istream& in, BigInt& b);

void rpn(istream& in);

