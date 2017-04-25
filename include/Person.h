#ifndef PERSON_H
#define PERSON_H

class Person
{
    public:
        Person();
        virtual ~Person();

        Person(bool sex);
        bool get_sex();
        void set_sex(bool sex);


    protected:
        bool sex;

    private:
};

#endif // PERSON_H
