/*********************************************************************
  Programmer: Dillon Hendrix
  Discription:
 Date: 09/20/2022
  *******************************************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // Initialize variables
  double C; // Cost of feed per ft^2
  double wi, li; // width and length of lawn
  int L_min; // Min # of lawns needing seed
  int L; // # of lawns needing seed
  double yardsize;
  double total_cost;
  int i;

  // Prompt user to input cost of feed per ft^2
  cout << "Input cost of seed per squar ft: ";
  cin >> C;
  cout << endl;

  // Prompt user to input number of lawns to seed
  cout << " Input number of lawns to seed: ";
  cin >> L;
  cout << endl;
  
  for(L_min = 1; L_min <= L; L_min = L_min + 1){
    cout << " ";

    // for ( i = 0; i <= 100; i++) {
      cout << " Input yard width: ";
      cin >> wi;
      cout << endl;
      cout << " Input yard length: ";
      cin >> li;
      cout << endl;
     // }
    }
  
  yardsize = wi * li;
  total_cost = C * yardsize;
  cout << "Total cost is " << setprecision(6) << total_cost << endl;
  }
    
