#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{

  // declare variables
  string firstName;
  string date;
  int testResult;
  int count = 0;
  int cumulative_cases = 0;

  // declare stream variables
  ifstream inFile; // needed to access the file we want to load
  ofstream outFile; // needed to save the results of the analysis

  // open the input file
  inFile.open("TestResultsData.dat");

  // read in the date - first line of file
  inFile >> date;
  cout << date << endl;


  while(inFile)
  {
    // update number of cases & persons tested
    cumulative_cases = cumulative_cases + testResult;
    count++; // increment the number of patients

    // read in the next line
    inFile >> firstName;
    inFile >> testResult;  
  }

  cout << "Total number of cases: " << cumulative_cases << endl;
  cout << "Number of Persons Tested: " << count;

  inFile.close();
    
}