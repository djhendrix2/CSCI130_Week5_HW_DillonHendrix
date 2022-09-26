/*********************************************************************
  Programmer: Dillon Hendrix
  Discription: Use a wind chill display formula to determine wind chill indexes for both the U.S. and Canada
 Date: 09/24/2022
  *******************************************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // initialize variables
  int C; // Celsius
  double F;  // Fahrenheit
  int WS;  // Wind speed

  // Convert Fehrenheit Table with step variables
  //const int Max_Celcius = 10;
  //const int Min_Celsius = 2;
  //const int Step_Celsius = 4;

  // Wind Speed input variables
  const int Max_WS = 11;
  const int Min_WS = 5;
  const int Step_WS = 2;

  // Table of values setup
  cout << "Degrees    Degrees       Wind Speed\n"
       << "Celsius    Fahrenheit      (km/hr) \n"
       << "-------    ----------    ----------\n";

  // Set output formats for the float points
  cout << setiosflags(ios::showpoint) << setprecision(2);

  /*while (C <= Max_Celcius) {
    F = (9.0/5.0) * C + 32.0;
    cout << setw(4) << C << fixed << setw(13) << F << endl;
    C = C + Step_Celsius;

    while(WS <= Max_WS){
      cout << setw(4) << WS << endl;
    }
  }
  return 0; */

  for(C = 2; C <= 10; C = C + 4){
    F = (9.0/5.0) * C + 32.0;

    for(WS = 5; WS <= 11; WS = WS + 2){
      //cout << setw(4) << C << endl;

      
    cout << setw(4) << C << fixed << setw(13) << F << setw(13) << WS << endl;
    }

  }
  
    

}