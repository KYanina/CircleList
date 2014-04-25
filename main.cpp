#include <iostream>
#include "circle.h"

using namespace std;
using namespace crcl;

void menu()
{
    Circle *circle=new Circle();
    int option,n,k,i;
    do

    {
        cout<<"   1 -Create & Show list\n";
        cout<<"   2 - Show top element\n";
        cout<<"   3 - Delete list\n";
        cout<<"   4- Check if list is empty\n";
        cout<<"   5 - Exit\n";
        cout<<endl;
        cin>>option;

        switch(option)
        {
        case 1:

             cout<<"Enter number of elements:\n";
            cin>>n;
            i=n;
            while (i!=0)
            {
                cout<<"Enter valus\n";
                cin>>k;
                circle -> push(k);
                i--;
            }
            cout<<endl;
            circle-> show();
            break;
        }
        {
        case 2:

            cout<<"Enter number of elements:\n";
            cin>>n;
            i=n;
            while (i!=0)
            {
                cout<<"Enter valus\n";
                cin>>k;
                 circle->push(k);
                i--;
            }
            cout<<circle->top();
            break;

        case 3:
            cout<<"Enter number of elements:\n";
            cin>>n;
            i=n;
            while (i!=0)
            {
                cout<<"Enter valus\n";
                cin>>k;
                circle-> push(k);
                i--;
            }
            cout<<endl;
           circle-> show();
            circle-> cleaning();
             circle-> show();
            break;

        case 4:
             if (circle->isEmpty())
            {
                cout<< "Stack is empty\n";
            }
            else
            {
                cout<<" Stack isn't empty, it will be showed next";
                circle->show();
            }
            break;

        case 5:
            break;

        default:
            cout<<"\n Enter number between 1 and 5\n";
            break;
        }
        cout<<endl;
    }
    while(option!=5);


    delete circle;
    return0;
}



int main()
{
    menu();
    return 0;
}
