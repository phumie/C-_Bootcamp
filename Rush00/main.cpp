
#include "entity.hpp"
#include "game.hpp"
#include <cmath>

int     main(void){

    Game    *game;
    int     c;

    initscr();
    noecho();
    cbreak();
    curs_set(0);
    keypad(stdscr, true);

    do{ 
        clear();
        game->launchGame();
        refresh();

        if ((c = getch()) == 's' || (c = getch()) == 'S'){
            while ((c = getch()) != 27){
                clear();
                game->rules();
                refresh(); 

                if ((c = getch()) == 's' || (c = getch()) == 'S'){
                    clear();
                    int c, yMax, xMax;
                    getmaxyx(stdscr, yMax, xMax);

                    WINDOW *win = newwin(20, 100, (yMax/2) - 10, 10);
                    box(win, 0, 0);
                    refresh();
                    wrefresh(win);

                    Entity *player = new Entity(win, yMax-2, round(xMax/5), 'T');
                    
                    while ((c = wgetch(win)) != 27){
                        player->ft_getMove(c);
                        player->ft_display();
                        wrefresh(win);
                        refresh(); 
                    } 
                }   
            }
        } 
    }while ((c = getch()) != 27);

    endwin();
}


// int     main(void){

//     initscr();
//     noecho();
//     cbreak();
//     curs_set(0);

//     int c, yMax, xMax;
//     getmaxyx(stdscr, yMax, xMax);

//     WINDOW *win = newwin(20, 100, (yMax/2) - 10, 10);
//     box(win, 0, 0);
//     refresh();
//     wrefresh(win);

//     Entity *player = new Entity(win, yMax-2, round(xMax/5), 'T');
    
//     while ((c = wgetch(win)) != 27){
//          player->ft_getMove(c);
//          player->ft_display();
//          wrefresh(win);
//      }

//     endwin();
// }
