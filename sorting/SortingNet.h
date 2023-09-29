class SortingNet{
private:
    int *arr;
    int size;
public:
    SortingNet(int size);
    //opcion 1: SortingNet(int size, int isRandom);
    ~SortingNet();
    void input(int *arr);
    //opcion 2: void input();
    void print();
    void swap(int i, int j);
    void sort();
    //opcion 3: void random();
};