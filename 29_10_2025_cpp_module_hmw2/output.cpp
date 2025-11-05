#include "output.hpp"

#include <iostream>

void srt::arr_output(const char* comment, const int arr[], const int size){
	std::cout << comment << ' ';
	for(size_t i = 0; i < size; i++){
		std::cout << arr[i] << ' ';
	}
}