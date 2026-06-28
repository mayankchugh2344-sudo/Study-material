#include <iostream>
#include<algorithm>
using namespace std;
//making of class
class Fruit{
    public://access specifier
    string name;
   string colour;
    

};


int main(){// This is how I create an object
    Fruit apple;//object
    apple.name="Apple";
    apple.colour="Red"; 
cout<<apple.name<<" "<<apple.colour<<endl;

// Pointer variable that are pointing to object. 
Fruit*mango=new Fruit();//object
mango->name="Mango";
mango->colour="Yellow";
cout<<mango->name<<" "<<mango->colour<<endl;
    return 0;
}