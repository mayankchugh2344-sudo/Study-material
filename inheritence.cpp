#include <iostream>
using namespace std;

class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class Child1 : public Parent
{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};
class Child2: private Parent
{
    // x will become private
    // y will become private
    // z will not be inaccessible
};  

class Child3: protected Parent
{
    // x will become protected
    // y will become protected
    // z will not be accessible
};  

int main()
{
  

    return 0;
}