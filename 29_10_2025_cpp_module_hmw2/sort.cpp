#include "sort.hpp"
#include <iostream>

void srt::sort::shellsort(int arr[], size_t size){
	for (int d = size / 2; d > 0; d = d / 2) {
        for (int i = d; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= d && arr[j - d] > temp; j = j - d) {
                arr[j] = arr[j - d];
            }
            arr[j] = temp;
        }
    }
}