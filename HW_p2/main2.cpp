/*********************************************************************
  Programmer: Dillon Hendrix
  Discription: break Practice
  Date: 09/20/2022
  *******************************************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  int dataTemp, sumData, counter;
  //int sumData = 0;
  //int counter = 0;

  // load input file
  ifstream inFile; // declare stream variable
  inFile.open("NumberData1.txt");

  // load all data in while loop
  // while(!inFile.eof())
  while (inFile >> dataTemp) {
    // inFile >> dataTemp;
    // cout << dataTemp << endl;
    // check to see if the data in valid
    if (dataTemp >= 0) 
    {
      // update cumulative value of all data and number of data points loaded
      sumData = sumData + dataTemp;
      counter++;
    } 
    else // The value is negative and we should exit
    {
      cout << "Negative value encountered of " << dataTemp << "." << endl;
      cout << "Will not use rest if the data... " << endl;
      break;
    }
  }
  cout << "The sum of the valid data in: " << sumData << endl;
  cout << "The number of valid data points is: " << counter << endl;
  return 0;
}