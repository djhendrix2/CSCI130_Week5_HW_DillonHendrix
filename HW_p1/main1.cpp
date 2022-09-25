/*********************************************************************
  Programmer: Dillon Hendrix
  Discription: Test loading a *.dat file. Follows the handout
  EOF_While_FileImport.pdf. Date: 09/20/2022
  *******************************************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // Declare variables
  /* string firstname;
  string date;
  int TestResults; */
  string firstname;
  string date;
  int TestResults;
  int count = 0;
  double cumulative_cases = 0;

  // Declare stream variables
  ifstream inFile;  // needed to accec the file we want to load
  ofstream outFile; // needed to save the results of the analysis

  // Open the input file
  inFile.open("TestResultsData.dat");

  // Open the output file
  outFile.open("AnalyzedData.txt");

  // Read in the date - first line of file
  inFile >> date;
  cout << date << endl;
  // Add date to the output file as the first line
  outFile << date << endl;

  // Read in the 2 pieces of info on the second line
  inFile >> firstname;
  cout << firstname << ' ';
  inFile >> TestResults;
  cout << TestResults << endl;

  while (inFile) {
    // update number of cases & persons tested
    cumulative_cases = cumulative_cases + TestResults;
    count++; // increment the number of patients

    // read inthe next line
    inFile >> firstname;
    inFile >> TestResults;
  }

  // Read out the # of cases and # of persons tests
  outFile << " Number of case: " << cumulative_cases << endl;
  outFile << " Number of persons tested: " << count << endl;
  
  // repot prevalence as % with 2 decimals
  outFile << fixed << showpoint << setprecision(2);
  outFile << "The prevalence is ";
  outFile << ((static_cast<double>(cumulative_cases))/count)*100;
  outFile << "% " << endl;
  
  // Line to close the file
  inFile.close();

  // close the output file
  outFile.close();
}