#include<iostream>

using namespace std;

// Creating class

class Message
{
  public:

    void display() {
      cout << "Hello World";
    }
};

int main()
{
    Message t;    // Creating an object
    t.display();  // Calling function

    return 0;
}
