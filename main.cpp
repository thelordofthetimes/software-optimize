#include <iostream>

#include "memory-aligment.h"
#include "vector.h"

using namespace std;

int main(int argc, char** argv)
{
  cout<<"none_ordering_data: "<<sizeof(none_ordering_data)<<endl;
  cout<<"ordering_data: "<<sizeof(ordering_data)<<endl;
  cout<<"none_ordering_class: "<<sizeof(none_ordering_class)<<endl;

  u x;
  x.f = 2.0f;
  x.i |= 0x80000000;
  cout<<"x.f: "<<x.f<<endl;

  vector_2d v1(1, 2), v2(3, 4), v3(5, 6), v4(7, 8);
  v1 = v2 + v3 + v4;
  cout<<"vector_2d: "<<v1.x<<":"<<v1.y<<endl;
}
