// Hoppock, Zachary
// mathArray.cpp
// November 14, 2020
// Input values into an array and then determine the sum of the values, the minimum value, the maximum value, and the average of the values
// Version #1

#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 6;
  int values[SIZE];
  int value_input;

  for (int i = 0; i < SIZE; i++)
  {
    cout << "Please enter number  " << i + 1 << ":" << endl;
    cin >> value_input;
    values[i] = value_input;
  }
  int sum = 0;

  for (int i = 0; i < SIZE; i++)
  {
    sum = sum + values[i];
  }
  cout << "Total of Numbers =  " << sum << endl;

  int max_num = values[0];
  for (int i = 0; i < SIZE; i++)
  {
    if (values[i] >= max_num)
    {
      max_num = values[i];
    }
  }
  cout << "Largest = " << max_num << endl;

  int min_num = values[0];
  for (int i = 0; i < SIZE; i++)
  {
    if (values[i] <= min_num)
    {
      min_num = values[i];
    }
  }
  cout << "Smallest = " << min_num << endl;

  int average = sum / SIZE;
  cout << "Average of Numbers = " << average;

  return 0;
}