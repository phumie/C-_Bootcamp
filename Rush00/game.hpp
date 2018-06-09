#ifndef GAME_HPP
# define GAME_HPP

#include "entity.hpp"

class Game{
    public:
        Game();
        ~Game();

        void    launchGame();
        char    *getPlayerName();
        void    keepScore();
        void    displayTime();
        void    displayCoord(int y, int x);
        void    rules();

    private:
        char    *name;
        int     score;
        int     yPos;
        int     xPos;   
};

#endif