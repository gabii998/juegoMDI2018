/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MenuPausa.h
 * Author: gabrielascurra
 *
 * Created on 9 de junio de 2018, 12:23
 */

#ifndef MENUPAUSA_H
#define MENUPAUSA_H

#include <vector>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

#include "Ship.h"
#include "Menu.h"


class MenuPausa : public Menu{
public:
    MenuPausa();
    int run(sf::RenderWindow &window,std::vector<sf::Sprite> sprites,bool &seguirJuego);
    void OpcionUno(sf::RenderWindow &App,bool &running);
    void OpcionTres();

private:
    bool running=true;

};

#endif /* MENUPAUSA_H */

