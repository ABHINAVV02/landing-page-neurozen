#include <iostream>
using namespace std;

template <typename T>
T swap(T a, T b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
}
template <typename x>
class hello {
    x a =13;
    x b = 45;
  public:
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
}
int main(){
    int x=5,y=6;
     swap(5,6);  
    cout << "After swap in main: x = " << x << ", y = " << y << endl;
hello <int> world1
 }