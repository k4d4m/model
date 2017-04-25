#include "Person.h"
//#include "Notion.h"

Person::Person(){} //empty ctor
Person::~Person(){} //dtor

Person::Person(bool sex, Notion notion) //ctor
{
    this->sex=sex;
    this->notion=notion;
    //...
}


bool Person::get_sex(){
    return this->sex;
}

void Person::set_sex(bool sex){
    this->sex=sex;
}


Notion Person::get_notion(){
    return this->notion;
}

void Person::set_notion(Notion notion){
    this->notion=notion;
}

