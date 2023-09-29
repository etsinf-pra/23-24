#include <iostream>
use namespace std;

class Sequential{
private:
    int *arr;
    int size;
public:
    Sequential(int size);
    ~Sequential();
    void SequentialSearch(int key);
    friend ostream& operator<<(ostream&, const Sequential&);
};

Sequential::Sequential(int size){
    this->size = size;
    arr = new int[size];
    srand(time(NULL));
    for(int i=0; i<size; i++){
        arr[i] = rand() % 100;
    }
} 

Sequential::~Sequential(){
    delete[] arr; 
} 


ostream& operator<<(ostream &pepe, const Sequential &gertrudis){
    for(int i=0; i<gertrudis.size; i++){
        pepe << gertrudis.arr[i] << " ";
    }
    return pepe;
}


void Sequential::SequentialSearch(int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}



int main(){
    Sequential s(10);
    cout << s << endl;
    cout << s.SequentialSearch(5) << endl;
    return 0;
}
