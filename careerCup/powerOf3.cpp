#include<iostream>
#include<cmath>
#define N 1000000

bool
isPow2(int n) {
  if(0 == n) return false;

  if((n & n-1) == 0) {
    return true;
  }

  return false;
}

bool
isPow3_v2(int n) {
  if(0 == n) return false;

  while(n != 1) {
    int Q = n / 3;
    int R  = n%3;
    if(R != 0) {
      return false;
    }
    n = Q;
  }

  return true;
}

bool
isPow3(int n) {
  if(0 == n) return false;

  double y  = std::log(n)/std::log(3);
  int q = y;
  if(y - q != 0.0) {
    return false;
  }
  return true;
}

int main()
{
  for(int i = 0 ; i  < N ;i ++) {
    if(isPow2(i)) {
      std::cout << i << " "; 
    }
  }
      std::cout << " \n"; 

  for(int i = 0 ; i  < N ;i ++) {
    if(isPow3(i)) {
      std::cout << i << " "; 
    }
  }
}
