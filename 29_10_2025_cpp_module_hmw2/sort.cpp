#include "sort.hpp"

void srt::shellsort(int arr[], const int size){
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