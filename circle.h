#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED


using namespace std;
namespace crcl
{
typedef int Data;
class Circle
{

public:
    Circle();
    ~Circle();
    void push(Data dt);
    void pop();
    void show();
    Data top();
    bool isEmpty() ;
    void cleaning() ;

private:
    struct Node
    {
        Data datum;
        Node *next;
    };
    *beg;
    *ending;
};

}
#endif // CIRCLE_H_INCLUDED
