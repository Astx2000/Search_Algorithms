#include <iostream>

int binarySearch (int* arr, int start, int end, int key) {

    if (end >= start) {
        int mid = start + (end - start)/2;
        if(arr[key] == mid) {
            return mid;
        }
        else if (arr[mid] > key) {
            return binarySearch(arr, start, mid - 1, key);
        }
            return binarySearch(arr, mid + 1, end, key);
    }
    return -1;
}

int main() {
    const int size = 8;
    int key = 19;
    int arr[size] {0, 2, 5, 7, 15, 19, 25, 99};
    std::cout << binarySearch(arr, 0, size - 1, key) << std::endl;
}