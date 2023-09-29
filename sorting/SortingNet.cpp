SortingNet::SortingNet(int numel){
    size = numel;
    arr = new int[size];
    //opción (C) 
    //arr = malloc(size*sizeof(int));
}

SortingNet::~SortingNet(){
    delete[] arr;
}

SortingNet::SortingNet(int numel, int isRandom) {
    size = numel;
    this->arr = new int a[size];
    if(isRandom){
        srand(time(NULL));
        for(int i=0; i<size; i++){
            arr[i] = rand() % 100;
        }
    }
}

void SortingNet::input(int *arr){
    for(int i=0; i<size; i++){
        this->arr[i] = arr[i];
    }
}

void SortingNet::print(){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout <<  endl;
}

void SortingNet::swap(int i, int j){
    if(arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }   
}

void SortingNet::sort(){
    swap(0,1);
    swap(2,3);
    swap(0,2);
    swap(1,3);
    swap(1,2);
}
