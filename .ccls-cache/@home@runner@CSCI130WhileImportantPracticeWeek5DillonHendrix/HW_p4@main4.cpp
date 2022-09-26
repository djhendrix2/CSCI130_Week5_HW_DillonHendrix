/*********************************************************************
Programmer: Dillon Hendrix
Discription: Modular Kattis remainder output not a combo or difference in remainders look for simularities. 
Date: 09/20/2022
  *******************************************************************/

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // values and mods
  int v0, v1, v2, v3, v4, v5, v6, v7, v8 , v9; 
  int m0, m1, m2, m3, m4, m5, m6, m7, m8, m9;
  int count = 0;

  //read in values
  cin >> v0;
  m0 = v0 % 42;
  cin >> v1;
  m1 = v1 % 42;
  cin >> v2;
  m2 = v2 % 42;
  cin >> v3;
  m3 = v3 % 42;
  cin >> v4;
  m4 = v4 % 42;
  cin >> v5;
  m5= v5 % 42;
  cin >> v6;
  m6 = v6 % 42;
  cin >> v7;
  m7 = v7 % 42;
  cin >> v8;
  m8 = v8 % 42;
  cin >> v9;
  m9 = v9 % 42;

  // Make sure come comparisons
  for(int i = 0; i < 42; i++)
    {
      if((m0 == i) || (m1 == i)|| (m2 == i)|| (m3 == i)|| (m4 == i)|| (m5 == i)|| (m6 == i)|| (m7 == i)|| (m8 == i)|| (m9 == i))
        count ++;
    // else -- do nothing
    }
  cout << count;
}