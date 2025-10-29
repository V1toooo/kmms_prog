#include "sort.hpp"
#include "output.hpp"

int main(){
	int arr[]= {10,9,8,7,6,5,4,3,2,1,0};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	srt::sort::shellsort(arr, size);
	srt::arr_output("Вывод", arr, size);

}
