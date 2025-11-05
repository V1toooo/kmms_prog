#include "output.hpp"
#include "sort.hpp"

int main(){
	int arr[]= {10,9,8,7,6,5,4,3,2,1,0};
	const int size = sizeof(arr) / sizeof(arr[0]);

	srt::shellsort(arr, size);
	srt::arr_output("Вывод", arr, size);

	return 0;
}
