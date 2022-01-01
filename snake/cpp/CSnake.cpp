#include "CSnake.h"
#include <iostream>

/* gère le déplacement automatique du snake 
si l'utilisateur n'a pas changé la direction */

void CSnake::deplacer()
{
    if (_direction == 0)
        _x++;
    else if (_direction == 1)
        _x--;
    else if (_direction == 2)
        _y++;
    else if (_direction == 3)
        _y--;


}


/* change la direction du snake (dans le main l'int direction
recevra l'entier associé à la direction choisie par l'utilisateur) */


void CSnake::change_direction(int direction)
{
    _direction = direction;

}



/* ces méthodes permettent de récupérer les attributs private _x, _y
et _direction en-dehors de la classe CSnake */

int CSnake::get_x()
{
    return _x;

}

int CSnake::get_y()
{
    return _y;

}

int CSnake::get_direction()
{
    return _direction;

}

