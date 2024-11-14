// Calculating Population
#include <iostream>
using namespace std;
int main() 
{
  int startingPopulation, daysToMultiply;
  double dailyIncreasePercentage;

  do {
    cout << "Enter the starting number of organisms (must be at least 2): ";
    cin >> startingPopulation;
    if (startingPopulation < 2) {
      cout << "Invalid input. Starting population must be at least 2.\n";
    }
  } while (startingPopulation < 2);

  do {
    cout << "Enter the average daily population increase (as a percentage, cant be negative): ";
    cin >> dailyIncreasePercentage;
    if (dailyIncreasePercentage < 0) {
      cout << "Invalid input. Daily population increase cant be negative.\n";
    }
  } while (dailyIncreasePercentage < 0);
 
  do {
    cout << "Enter the number of days they will multiply (must be at least 1): ";
    cin >> daysToMultiply;
    if (daysToMultiply < 1) {
      cout << "Invalid input. Number of days must be at least 1.\n";
    }
  } while (daysToMultiply < 1);
  
  cout << "\nDay\tPopulation\n";
  for (int day = 1; day <= daysToMultiply; day++) {
    cout << day << "\t" << startingPopulation << endl;
    
    startingPopulation += startingPopulation * (dailyIncreasePercentage / 100);
  }
  return 0;
}