#ifndef ARRAYLISTTYPE_H
#define ARRAYLISTTYPE_H


class arrayListType
{
    public:
        arrayListType(int size=100);
        arrayListType(const arrayListType & otherList );
        bool isEmpty() const;
        bool isFull() const;
        void removeAt(int);
        void printArray();
        void InsertEnd(int element);
        //Programming Exercise
        //Question number 1
        void removeAtAnotherTech(int ); // this technique is working by swapping the last element by the position that will be removed cause the array is already unordered and to reduce computer time
        //Question Number 2;
        void removeAll(int) ;// for removing all the occurrences of the value at specific location that was given by the user
        //Question Number 3:
        int minimum() const; //returning the smallest element in the array
        //Question Number 4:
        int maximum() const; //returning the largest element in the array

        int seqSearch(const int &item,int startPos)const;///NEW


      int *List;
        int length;
        int maxSize;


        virtual ~arrayListType();

    protected:
        //I made them protected to make the derived class able to access them

    private:


};

#endif // ARRAYLISTTYPE_H
