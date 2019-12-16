// 12/16, am 10:50, by Queenie
// Heaps definition

// define a Class of double-ended queue
// to insert ele X into heap H

template<class KT>
class QsHeap {
    public:
        virtual void insert(const Element<KT>&) = 0;
        virtual Element<KT>* deleteLarge(Element<KT>&) = 0;
        virtual Element<KT>* deleteSmall(Element<KT>&) = 0;
};
