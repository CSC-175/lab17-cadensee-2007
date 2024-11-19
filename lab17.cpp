// Definition of findHigh function goes here
template <typename A, typename C>
    void findHigh(A arr[], int size, int &index , C &highnum) {
    highnum = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > highnum) {
            index = i;
            highnum = arr[i];
        }
    }
}