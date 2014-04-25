#include <iostream>
#include "circle.h"
using namespace std;
using namespace crcl;

Circle::Circle():

{
    beg=0;
    ending=0;
}

Circle::~Circle()
{
    cleaning();
}
void Circle::push(Data dt)
{
    Circle *tmp=new Circle;
    tmp->datum=dt;
    tmp->next=0;
    if(isEmpty())
    {
        beg=tmp;
        ending=tmp;
    }
    else
    {
        tmp->next=beg;
        beg=tmp;
        ending->next=beg;
    }
}
void Circle::show()
{
    Circle *print=beg;
    while(print!=ending)
    {
        cout<<print->datum<<"  ";
        print=print->next;
    }
    cout<<endl;
}

void Circle::pop()
{
    Data *q=beg;
    if(beg==0)
    {
        return;
    }
    beg=q->next;
    delete q;
}



bool Circle::isEmpty()
{

    {
        if  ( beg && ending )
        {
            return 0;
        }
        return 1;
    }

}
Data Circle::top() const
{
    if (nullptr==beg)
        throw -1;
    return beg->datum;
}
void Circle::cleaning()
{
    while (!isEmpty())
    {
        pop();
    }
}
