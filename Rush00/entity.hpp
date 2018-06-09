#ifndef ENTITY_HPP
# define ENTITY_HPP

#include <iostream>
#include <string>
#include <ncurses.h>

class Entity{

    private:
        int     maxXPos;
        int     maxYPos;
        int     xPos;
        int     yPos;
        char    body;
        WINDOW  *curwin;

    public:
        Entity( WINDOW *win, int y, int x, char bod);
        Entity( Entity const &src );
        ~Entity( void );

        Entity  &operator=(Entity const &rhs);

        // void    ft_shoot();
        void    ft_moveDown();
        void    ft_moveUp();
        void    ft_moveLeft();
        void    ft_moveRight();
        int     ft_getMove(int c);
        void    ft_display();
};

#endif 
