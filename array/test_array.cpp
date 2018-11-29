#include "array.h"
#include <cstdio>
#include <iostream>
using namespace std;

// printf function for Array (overload of <<) 
ostream& operator<<(ostream& os, Array& y)  
{  
  os << "[";
  int i;
  for (i = 0;i < y.size() - 1;i++){
    os << y[i] << ", "; 
  }
  os << y[i] << "]" << endl;
  return os;
}  
  
  
int main(int argc, char* argv[])
{
  
  Array arr;
  arr.initialize(10, 5);

  Array rtoo;
  rtoo.initialize(0, 0);
  rtoo = arr;

  for(int i = 0; i < arr.size(); i++){
    arr[i] = i * 2;
  }


  for(int i = 0; i < arr.size(); i++)
    printf(" arr[%d] = %d\n", i, arr[i]);
  
  for(int i = 0; i < rtoo.size(); i++)
    printf(" rtoo[%d] = %d\n", i, rtoo[i]);

  
  Array newArray;
  newArray.initialize(2,-1);
 
  for(int i = 0; i < newArray.size(); i++){
    printf(" arr[%d] = %d\n", i, newArray[i]);
  }

  // append three integers to newArray whose initial size is 2
  newArray.append(1);
  cout << newArray;
  newArray.append(10);
  cout << newArray;

  // new Array is doublely expanded
  newArray.append(15);
  cout << "array size = " << newArray.size() << " and the array is "\
       << newArray;

  // copy constructor
  Array newArraytoo(newArray);
  cout << newArraytoo;
  newArraytoo[0] = -100;
  cout << "newArraytoo = " << newArraytoo;

  // index out-bound
  for(int i = -2; i < newArray.size(); i++){
    printf(" arr[%d] = %d\n", i, arr[i]);
  }
  
  return(0);
}

