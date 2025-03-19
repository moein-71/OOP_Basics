#include "sky.hpp"

using namespace std ;

Sky::Sky() 
{
    star_list.reserve(10) ;
}

void Sky::add_star(const Star &new_star) 
{
    star_list.push_back(new_star) ;
}

void Sky::draw() const
{
    const int screenWidth = 800  ;
    const int screenHeight = 600 ;

    InitWindow(screenWidth ,screenHeight , "Night_sky") ;

    SetTargetFPS(60) ;

    while(!WindowShouldClose()) 
    {
        BeginDrawing() ;

        ClearBackground(BLACK) ;

        for(const Star & temp_star : star_list) 
        {
            DrawCircle(temp_star.get_x() , temp_star.get_y() , temp_star.get_brightness() , WHITE) ;
        }

        EndDrawing() ;
    }
}