#include "sky.hpp"


using namespace std ;

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
    