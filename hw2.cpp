// Programmer: Devin Thomeczek
// MST Username: djtpfr
// Section: 101
// Date: 2/7/2020
// File: hw2.cpp
// Purpose: To determine which pitchfork Groundskeeper Willie should use.

#include <iostream>
using namespace std;

int main()
{
  const float IDIOTS=8;   // Constant value of the International Dead Infectious
			  // Opossum Threshold Score (IDIOTS)
  const float LENMULT=3;  // Assigning a constant for length multiplier
  const float SFBPMULT=30;// Assigning a constant for multiplication with
  			  // (stink_factor / baro_press)
  const float DIVISOR=10; // Assigning a constant as a divisor for integer
			  // division

  int stink_fact;         // Stink factor variable
  float baro_press;       // Barometric pressure variable
  float tail_len;         // Length of the 'possum's tail variable
  float possum_wt;        // Weight of 'possum variable
  float fork_len;         // Pitchfork handle length variable
  int fork_num;           // Pitchfork number variable 


  // Brief introductory message
  cout << "Welcome to the Pitchfork Calculator!" << endl;

  // Prompt the user to input the stink factor
  cout << "First, what is the stink factor of the 'possum (1-10)?" << endl;
  cin >> stink_fact;

  // Prompt the user to input the barometric pressure
  cout << "Next, what is the barometric pressure?" << endl;
  cin >> baro_press;

  // Prompt the user to input the 'possum's tail length
  cout << "Next, what is the 'possum's tail length (4.5-15)?" << endl;
  cin >> tail_len;

  // Prompt the user to input the 'possum's weight
  cout << "Finally, what is the 'possum's weight (2.7-45.5)?" << endl;
  cin >> possum_wt;

  // Repeat input values to the user
  cout << "For the given inputs:" << endl;
  cout << "Weight: " << possum_wt << endl;
  cout << "Barometric Pressure: " << baro_press << endl;
  cout << "Stink Factor: " << stink_fact << endl;
  cout << "Tail Length: " << tail_len << endl;

  // Line of space between repeated inputs and output values
  cout << "" << endl;

  // Calculate the handle length based on given inputs and the formula
  // length = (sf/IDIOTS)*(3(L)+wt)+30(sf/bp)
  fork_len = (stink_fact / IDIOTS) * (3 * tail_len + possum_wt);
  fork_len +=  30 * (stink_fact / baro_press);

  // Output the fork length
  cout << "The length of the handle is: " << fork_len << endl;

  // Determine which pitchfork should be used by dividing by 10 to yield the
  // 10's place number correlating to the number of pitchfork necessary
  fork_num = (static_cast<int>(fork_len)) / 10;

  // Output which number pitchfork should be used
  cout << "The ideal pitchfork to use for this 'possum is: Pitchfork #" <<
  fork_num << endl;

  // Brief conclusory message
  cout << "Good luck dealing with this 'possum!" << endl;
}
