#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";


  // Declare second integer, double, and String variables.
  int secondInteger;
  double secondDecimal = 0.0;
  string secondString;
  // Read and save an integer, double, and String to your variables.
  // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
  cin >> secondInteger;
  cin >> secondDecimal;
  //cin >> secondString;
  //getline(cin, secondString);
  //To consume the whitespace or newline between the end of a token and the beginning of the next line:
  getline(cin >> ws, secondString); //Para evitar que poner otra vez getline para que
  //se coma la cadena vacia

  // Print the sum of both integer variables on a new line.
  cout << i + secondInteger << endl;
  // Print the sum of the double variables on a new line.
  double sum = d + secondDecimal;
  //cout << fixed  << d + secondDecimal << endl;
  cout << fixed  << setprecision(1)<< sum << endl; //Sin el fixed te lo redondea a ocho
  // Concatenate and print the String variables on a new line
  // The 's' variable above should be printed first.
  cout << s + secondString << endl;
  return 0;
}
