#ifndef PERSON_H
#define PERSON_H
#include <Notion.h>

class Person
{
    public:
        Person();//ctor
        virtual ~Person();//dtor

        Person(bool sex, Notion notion);//ctor
        bool get_sex();
        void set_sex(bool sex);
        Notion get_notion();
        void set_notion(Notion notion);


    protected:
        bool sex;
        Notion notion;

    private:
};

#endif // PERSON_H
