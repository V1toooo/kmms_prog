#include "output.hpp"
#include <iostream>
#include <string>

void srt::arr_output(const std::string& comment, const int arr[], size_t size){
	std::cout << comment << ' ';
	for(size_t i = 0; i < size; i++){
		std::cout << arr[i] << ' ';
	}
}