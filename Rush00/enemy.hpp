#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Entity.hpp"

class Enemy : public Entity{

    private:

    public:
        Enemy( void );
        Enemy( int h, int w, int maxh, int maxy, char body );
        Enemy( Enemy const &src );
        ~Enemy( void );

        Enemy  &operator=( Enemy const &rhs );

        void    displayEnemy( void );
        int     getXPos( void );
        int     getYPos( void );
        char    getBody( void );
        void    ft_moveDown( void );
        void    ft_moveUp( void );
};

#endif