#include "linkedListIterator.h"
#include <stddef.h>
linkedListIterator::linkedListIterator()
{
   current=NULL;
}

linkedListIterator::linkedListIterator(nodeType *ptr){

 current=ptr;
}

int linkedListIterator:: operator *(){
    return current ->entry;

}
linkedListIterator linkedListIterator::operator++(){
        current=current->next;
        return *this;
        }
bool linkedListIterator::operator==(const linkedListIterator &right) const{
      return (current==right.current);
}
bool linkedListIterator::operator !=(const linkedListIterator &right )const{
    return (current!=right.current);
}

