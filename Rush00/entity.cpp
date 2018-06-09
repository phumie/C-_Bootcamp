#include "entity.hpp"

Entity::Entity( WINDOW *win, int y, int x, char bod){
    curwin = win;
    yPos = y;
    xPos = x;
    body = bod;
    getmaxyx(curwin, maxYPos, maxXPos);
    keypad(curwin, true);

    return;
}

Entity  Entity::Entity(Entity const &src) {
    *this = src;
    return *this;
}

Entity::~Entity ( void ){
    return;
}

Entity     &Entity::operator=( Entity const &rhs)
{
    this->maxXPos = rhs.maxXPos;
    this->maxYPos = rhs.maxYPos;
    this->xPos = rhs.xPos;
    this->yPos = rhs.yPos;
    this->body = rhs.body;

    return *this;
}


void    Entity::ft_moveUp() {
    mvwaddch(curwin, yPos, xPos, ' ');
    yPos--;
    if (this->yPos < 1)
        this->yPos = 1;

}

void    Entity::ft_moveDown() {
    mvwaddch(curwin, this->yPos, this->xPos, ' ');
    this->yPos++;
    if (this->yPos > this->maxYPos - 2)
        this->yPos = this->maxYPos - 2;
}

void    Entity::ft_moveRight() {
    mvwaddch(curwin, this->yPos, this->xPos, ' ');
    this->xPos++;
    if (this->xPos > this->maxXPos - 2)
        this->xPos = this->maxXPos - 2;
}

void    Entity::ft_moveLeft() {
    mvwaddch(curwin, this->yPos, this->xPos, ' ');
    this->xPos--;
    if (this->xPos < 1)
        this->xPos = 1;
}

int     Entity::ft_getMove(int c) {
    int move = c;

    switch(move){
		case KEY_UP:
			ft_moveUp();
			break;
		case KEY_DOWN:
			ft_moveDown();
			break;
		case KEY_LEFT:
			ft_moveLeft();
			break;
		case KEY_RIGHT:
			ft_moveRight();
			break;
        default:
            break;
	}
    return move;
}

void    Entity::ft_display(){
    mvwaddch(curwin, this->yPos, this->xPos, body);
}
