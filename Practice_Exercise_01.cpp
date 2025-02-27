#include <iostream>
using namespace std;
class Rectangle
{
  // Private Members
  double len;
  double wid;

// Public Memeber and function
public:
  void calculation(double l, double w)
  {
    len = l;
    wid = w;
    // Calculate the area and perimeter
    cout << "The area of the rectangle is " << len * wid << endl;
    cout << "The perimeter of the rectangle is " << 2 * (len + wid) << endl;
  }
};

int main()
{
  // Creating an object
  Rectangle REC1;

  // Calling public function with private member
  REC1.calculation(45.5, 30.0);

  return 0;
}