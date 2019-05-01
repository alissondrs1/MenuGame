//!
//! @file       Entry.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Source file of subclass Entry.
//!


#include "MenuGame.hpp"
#include <iostream>

using std::cout;
using std::endl;


namespace MenuGame {

MenuGame::Entry::Entry(const string &Name, const string &Text) : Name(Name), Text(Text) { }

MenuGame::Entry::~Entry() { }

void MenuGame::Entry::setName(const string &Name) {
    this->Name = Name;
}

void MenuGame::Entry::setText(const string &Text) {
    this->Text = Text;
}

string MenuGame::Entry::getName() {
    return Name;
}

string MenuGame::Entry::getText() {
    return Text;
}
} // end namespace
