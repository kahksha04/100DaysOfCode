// You are given an empty Binary Min Heap and some queries and your task is to implement the three methods insertKey,  deleteKey,  and extractMin on the Binary Min Heap and call them as per the query given below:
// 1) 1  x  (a query of this type means to insert an element in the min-heap with value x )
// 2) 2  x  (a query of this type means to remove an element at position x from the min-heap)
// 3) 3  (a query like this removes the min element from the min-heap and prints it ).

int MinHeap::extractMin() 
{
    // Your code here
    if(heap_size==0) return -1;
    if(heap_size==1){
        heap_size--;
        return harr[0];
    }
    swap(harr[0], harr[heap_size-1]);
    heap_size--;
    MinHeapify(0);
    return harr[heap_size];
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    // Your code here
    if(i>=heap_size) return;
    decreaseKey(i, INT_MIN);
    extractMin();
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
    // Your code here
    if(heap_size==capacity) return;
    heap_size++;
    harr[heap_size-1]=k;
    int i=heap_size-1;
    while(i!=0 && harr[parent(i)]>harr[i]){
        swap(harr[parent(i)], harr[i]);
        i=parent(i);
    }
}

//Function to change value at ith index and store that value at first index.
void MinHeap::decreaseKey(int i, int new_val) 
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

/* You may call below MinHeapify function in
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i) 
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}
