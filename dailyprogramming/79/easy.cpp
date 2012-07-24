// Copyright 2012 ILDesign Ltd.
// MIT License: do whatever at your own risk
// Author: Jonn Mostovoy
//
// Solution for /r/dailyprogrammer easy#79
// Implementing Google Inc. C++ Style Guide
// http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml

#include <iostream>
#include <vector>

using namespace std;

// Returns a vector of values from alpha up/down to beta
// equivalently distributed among n steps.
// alpha: starting value
// beta : ending value
// step : number of steps
//
// Delta for step is (beta-alpha) / (steps-1)
//
vector<float> StepCount(const float alpha, const float beta, const int steps) {
  vector<float> result;
  for (;(int)result.size() < steps;)
    result.push_back(alpha + (result.size() * ((beta-alpha)/(steps-1)) ));
  return result;
}

// Test function
int main() {
  vector<float> lol = StepCount(18.75, -22.0, 105);
  std::cout << "[ ";
  int i = 1;
  std::cout << lol[0];
  while(i < 105)
    std::cout << ", " << lol[i++];
  std::cout << " ]";
  
  return 0;
}
