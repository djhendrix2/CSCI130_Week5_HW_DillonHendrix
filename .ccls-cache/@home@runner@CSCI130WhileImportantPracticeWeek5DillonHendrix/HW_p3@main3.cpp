/*********************************************************************
  Programmer: Dillon Hendrix
  Discription: Use a wind chill display formula to determine wind chill indexes
 for both the U.S. and Canada Date: 09/24/2022
  *******************************************************************/

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // initialize variables
  int C;         // Celsius
  double F;      // Fahrenheit
  int WS_kmhr;   // Wind speed in km/hr
  double WS_mph; // Wind speed in mph
  double k1, k2, k3;
  double WCI; // wind chill index
  // Convert Fehrenheit Table with step variables
  // const int Max_Celcius = 10;
  // const int Min_Celsius = 2;
  // const int Step_Celsius = 4;

  // Wind Speed input variables
  // const int Max_WS = 11;
  // const int Min_WS = 5;
  // const int Step_WS = 2;

  // Conversion factors
  k1 = 13.12;
  k2 = 11.37;
  k3 = 0.3965;

  // Table of values setup
  cout << "Degrees    Degrees       Wind Speed    Wind Speed    Wind Chill\n"
       << "Celsius    Fahrenheit      (km/hr)        (mph)                \n"
       << "-------    ----------    ----------    ----------    ----------\n";

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

  for (C = 2; C <= 10; C = C + 4) {
    F = (9.0 / 5.0) * C + 32.0;

    for (WS_kmhr = 5; WS_kmhr <= 11; WS_kmhr = WS_kmhr + 2) {
      WS_mph = (WS_kmhr * 0.62137119);
      // cout << setw(4) << C << endl;
      WCI = k1 + 0.6125 * (C)-k2 * pow(WS_kmhr, 0.16) +
            k3 * C * pow(WS_kmhr, 0.16);
      cout << setw(4) << C << fixed << setw(13) << F << setw(14) << WS_kmhr
           << setw(15) << WS_mph << setw(14) << WCI << endl;
    }
  }
}