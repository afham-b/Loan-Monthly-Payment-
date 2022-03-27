#include <iostream> 
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


double payment(double amount_brwd, double interest_rate, int months){
  double interest = (interest_rate/ 100)/12; 
  return ((amount_brwd*interest)/(1-pow(1+interest, -months) )); 
}

int main (){ 
  double amount_brwd, interest_rate;
  int months; 
  cout << "Enter amount borrowed: "; 
  cin >> amount_brwd; 
  cout << "Enter interest_rate as percent: ";     
  cin >> interest_rate;
  cout << "Enter the number of months the loan is for: ";
  cin >> months;  
  cout << "You monthly payment is " << payment(amount_brwd, interest_rate, months) <<endl; 
  return 0;
}

// warning: program will currently take negative values 
// can be further improved using input validation