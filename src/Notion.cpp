#include "Notion.h"

Notion::Notion(){}//ctor
Notion::~Notion(){}//dtor


Notion::Notion(int chance){ //ctor
    this->chance=chance;
    //...
}


int Notion::get_chance(){
    return this->chance;
}

void Notion::set_chance(int chance){
    this->chance=chance;
}
