#include "sky.hpp"


using namespace std ;

// this is some information about this mini project :
// in this mini project we are have a empty space and we are want to fill it with stars 
// first of all we are should to add stars with their x , y and the brightness of them (we are can add how much we want)
// for seeing the stars we are should to write (draw) and we are will see them in the space
// and if you want to add more stars you should to close the space and repeat the process

int main() 
{
    Sky sky ;

    cout<< "add how mach star you want :\n" ;

    while(1)
    {
        string order ;

        cout<< '\n' << "enter yor order : " ;
        cin>> order ;

        if(order == "add") 
        {
            int x , y , brightness ;

            cout<< '\n' << "enter x : " ;
            cin>> x ;

            cout<< '\n' << "enter y : " ;
            cin>> y ;

            cout<< '\n' << "enter brightness : " ;
            cin>> brightness ;

            Star new_star(x , y , brightness) ;

            sky.add_star(new_star) ;
        }
        else if(order == "draw")
        {
            sky.draw() ;
        }
        else if(order == "exit")
        {
            break ;
        }
        else 
        {
            cout<< '\n' << "your order is not define" ;
        }
    }

    return 0 ;
}
    