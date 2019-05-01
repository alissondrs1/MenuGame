//!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuGame/MenuGame.hpp"
#include <iostream>

using std::cout;
using std::endl;

//!
//! @brief  Main function of MenuGame.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuGame::MenuGame MenuA;

    // Aqui Modifiquei a descrição do Menu (questão 2)
    MenuA.Title = "\t\tNEVERWINTER NIGHTS SIMPLE MENU";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("> ");

    //Tamanho de CursorNumber (Questão 4)
    MenuA.setCursorNumber(MenuA.getCursor().length());

    // Aqui Adicionei novas opçoes para o Menu Principal "Video Options; Sound Options; Controls". (Questão 1)
    MenuA.addEntry("GAME_NEW"     ,  "New game");
    MenuA.addEntry("GAME_LOAD"    ,  "Load save state");
    MenuA.addEntry("GAME_EXIT"    ,  "Exit game");
    MenuA.addEntry("GAME_OPTIONS" ,  "Game options");
    MenuA.addEntry("GAME_VIDEO"   ,  "Video ");
    MenuA.addEntry("GAME_SOUND"   ,  "Sound ");
    MenuA.addEntry("GAME_CONTROLS",  "Controls");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);

    cout << MenuA.displayGetName() << endl;
    // Aqui Implementei a Chamada da rotina getCursor, a mesma ira exibir o Cursor associado.(Questão 3)
    cout << "Cursor : " << MenuA.getCursor() << endl;
    
    // O metodo getCursorNumber exibe o tamanho da string(Questão 4)
    cout << "Number of Characters:" << MenuA.getCursorNumber() << endl;
}
