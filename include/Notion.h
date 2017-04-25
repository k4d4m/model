#ifndef NOTION_H
#define NOTION_H


class Notion
{
    public:
        Notion();//ctor
        virtual ~Notion();//dtor
        Notion(int chance);//ctor
        void set_chance(int chance);
        int get_chance();

    protected:
        int chance;

    private:
};

#endif // NOTION_H
