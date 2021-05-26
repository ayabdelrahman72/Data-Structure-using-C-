#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H
struct nodeType{
   int entry;
   nodeType *next;

};

class linkedListIterator
{
    public:
        linkedListIterator();
        linkedListIterator(nodeType *ptr);
        //overload the dereferencing operator
        //postCondition:Returns the info contained in that node
        int operator *();
        //postCondition:The iterator is advanced to the next node
        linkedListIterator operator++();
        bool operator==(const linkedListIterator &) const;
        bool operator !=(const linkedListIterator & )const;


    protected:

    private:
        nodeType *current;
};

#endif // LINKEDLISTITERATOR_H
