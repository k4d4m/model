#include "Person.h"

Person::Person(){} //ctor
Person::~Person(){} //dtor

Person::Person(bool sex) //ctor
{
    this->sex=sex;
    //...
}

bool Person::get_sex(){
    return this->sex;
}

void Person::set_sex(bool sex){
    this->sex=sex;
}
