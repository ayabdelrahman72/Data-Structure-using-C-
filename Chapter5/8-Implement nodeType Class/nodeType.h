#ifndef NODETYPE_H
#define NODETYPE_H


class nodeType
{
    public:
        const nodeType &operator=(const nodeType &other);
        void setEntry(const int&elem);
        int getEntry() const;
        void setNext(nodeType *link);
        nodeType* getNext()const;
        nodeType(const int &info,nodeType *link);
        nodeType(const nodeType &other);
        nodeType();
        ~nodeType();

    protected:

    private:
        int entry;
        nodeType *next;
};

#endif // NODETYPE_H
