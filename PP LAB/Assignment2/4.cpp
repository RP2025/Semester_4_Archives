#include <iostream>

template <typename T>
void BubbleSort(T arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        T temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

template <typename T>
void printArray(T arr[], int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int intArr[] = {5, 3, 0, 1, 4};
    BubbleSort(intArr, 5);
    printArray(intArr, 5);

    short shortArr[] = {5, 3, 2, 1, -1};
    BubbleSort(shortArr, 5);
    printArray(shortArr, 5);

    float floatArr[] = {5.5, -3.3, 2.2, 1.1, 4.4};
    BubbleSort(floatArr, 5);
    printArray(floatArr, 5);

    double doubleArr[] = {5.5, 3.3, 2.2, -1.1, 4.4};
    BubbleSort(doubleArr, 5);
    printArray(doubleArr, 5);
}