#include <iostream>

int main() {
    int size = 20;
    int arr[size];
    
    std::cout << "изначальный массив: ";
    for(int i = 0; i < 20; i++) {
        arr[i] = rand() % 20;
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    for(int i = 0; i < 10; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    std::cout << "перевернутый массив: ";
    for(int i = 0; i < 20; i++) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}
