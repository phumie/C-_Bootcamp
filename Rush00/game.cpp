#include "game.hpp"

Game::Game(){
    return;
}

void    Game::launchGame(){

    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));

    printw("KKKKKKKKK    KKKKKKRRRRRRRRRRRRRRRRR       OOOOOOOOO    UUUUUUUU     UUUUUUUTTTTTTTTTTTTTTTTTTTTTTT        AAA\n");
    printw("K:::::::K    K:::::R::::::::::::::::R    OO:::::::::OO  U::::::U     U::::::T:::::::::::::::::::::T       A:::A\n");
    printw("K:::::::K    K:::::R::::::RRRRRR:::::R OO:::::::::::::OOU::::::U     U::::::T:::::::::::::::::::::T      A:::::A  \n");
    printw("K:::::::K   K::::::RR:::::R     R:::::O:::::::OOO:::::::UU:::::U     U:::::UT:::::TT:::::::TT:::::T     A:::::::A  \n");
    printw("KK::::::K  K:::::KKK R::::R     R:::::O::::::O   O::::::OU:::::U     U:::::UTTTTTT  T:::::T  TTTTTT    A:::::::::A  \n");
    printw("  K:::::K K:::::K    R::::R     R:::::O:::::O     O:::::OU:::::D     D:::::U        T:::::T           A:::::A:::::A  \n");
    printw("  K::::::K:::::K     R::::RRRRRR:::::RO:::::O     O:::::OU:::::D     D:::::U        T:::::T          A:::::A A:::::A  \n");
    printw("  K:::::::::::K      R:::::::::::::RR O:::::O     O:::::OU:::::D     D:::::U        T:::::T         A:::::A   A:::::A  \n");
    printw("  K:::::::::::K      R::::RRRRRR:::::RO:::::O     O:::::OU:::::D     D:::::U        T:::::T        A:::::A     A:::::A   \n");
    printw("  K::::::K:::::K     R::::R     R:::::O:::::O     O:::::OU:::::D     D:::::U        T:::::T       A:::::AAAAAAAAA:::::A  \n");
    printw("  K:::::K K:::::K    R::::R     R:::::O:::::O     O:::::OU:::::D     D:::::U        T:::::T      A:::::::::::::::::::::A  \n");
    printw("KK::::::K  K:::::KKK R::::R     R:::::O::::::O   O::::::OU::::::U   U::::::U        T:::::T     A:::::AAAAAAAAAAAAA:::::A   \n");
    printw("K:::::::K   K::::::RR:::::R     R:::::O:::::::OOO:::::::OU:::::::UUU:::::::U      TT:::::::TT  A:::::A             A:::::A \n");
    printw("K:::::::K    K:::::R::::::R     R:::::ROO:::::::::::::OO  UU:::::::::::::UU       T:::::::::T A:::::A               A:::::A  \n");
    printw("K:::::::K    K:::::R::::::R     R:::::R  OO:::::::::OO      UU:::::::::UU         T:::::::::TA:::::A                 A:::::A \n");
    printw("KKKKKKKKK    KKKKKKRRRRRRRR     RRRRRRR    OOOOOOOOO          UUUUUUUUU           TTTTTTTTTTAAAAAAA                   AAAAAAA \n");
    printw("\n\n\n\t\t\tPRESS 'S' TO PROCEED TO RULES.\n");

    attroff(COLOR_PAIR(1));

 return;
}

void    Game::rules(){

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));

    printw("oooooooooo ooooo  oooo ooooo       ooooooooooo  oooooooo8\n");
    printw(" 888    888 888    88   888         888    88  888  \n");
    printw(" 888oooo88  888    88   888         888ooo8     888oooooo  \n");
    printw(" 888  88o   888    88   888      o  888    oo          888  \n");
    printw("o888o  88o8  888oo88   o888ooooo88 o888ooo8888 o88oooo888   \n");
    printw("\n\n");
    printw("(1) USE UP, LEFT AND RIGHT KEYS TO NAVIGATE YOUR PLAYER SHIP.\n");
    printw("(2) USE THE SPACEBAR TO LAUNCH LAZER GUN AND SHOOT AT ENEMIES.\n");
    printw("(3) FOR EACH ENEMY YOU SHOOT, YOU SCORE A POITNT.\n");
    printw("(4) IF ENEMY LANDS ON THE GROUND BEFORE YOU SHOOT, YOU DIE.\n");
    printw("\n\n");
    printw("PRESS 'S' KEY TO START THE GAME. GOODLUCK!\n"); 

    attroff(COLOR_PAIR(1));                                                      
}