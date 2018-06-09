/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:12:55 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:12:56 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "entity.hpp"
#include <cmath>

int     main(void){

    initscr();
    noecho();
    cbreak();
    curs_set(0);

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
     }

    // do{
    //     // printw("Hello World");
    //     player->ft_display();
    // }while ((c = getch()) != 27);

    endwin();
}
    
// int main(void){

//     //initialize screen
//     initscr();
//     noecho();

//     //movement
//     int c; 

//     //get screen size
//     int yMax, xMax;
//     getmaxyx(stdscr, yMax, xMax);

//     //window for the player
//     WINDOW *win = newwin(20, 100, (yMax/2) - 10, 10);
//     box(win, 0, 0);
//     refresh();
//     wrefresh(win);

//     Entity *player = new Entity(win, 1, 1, 'T');

//      while ((c = wgetch(win)) != 27){
//          player->ft_getMove(c);
//          player->ft_display();
//          wrefresh(win);

//      }

//     // attroff(COLOR_PAIR(1)); 
//     endwin();
// }
