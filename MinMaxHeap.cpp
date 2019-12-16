// 12/16, am 11:30, by Queenie
// minmax heap

template<class KT>
class MinMaxHeap: public QsHeap<KT> {

    private:
        Element<KT>* h;
        int n; // current size of the minmax heap
        int maxSize; // max allowable size of minmax heap
    // public:
    //     virtual void insert(const Element<KT>&) = 0;
    //     virtual Element<KT>* deleteLarge(Element<KT>&) = 0;
    //     virtual Element<KT>* deleteSmall(Element<KT>&) = 0;

    public:
        MinMaxHeap(const int);
        ~MinMaxHeap();
        void insert(const Element<KT>&);
        Element<KT>* deleteLarge(Element<KT>&);
        Element<KT>* deleteSmall(Element<KT>&);
};

template<class KT>
MinMaxHeap<KT>::MinMaxHeap(const int sz = DefaultHeapSize): maxSize(sz), n(0)
{
    h = new Element<KT>[maxSize + 1]; //h[0] is not used
}
