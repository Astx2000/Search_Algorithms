#include <iostream>
#include <cmath>

int jumpSearch(int arr[], int x, int n) {
	int step = sqrt(n);
	int prev = 0;
	while (arr[std::min(step, n)-1] < x) {
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}
	while (arr[prev] < x) {
		++prev;
		if (prev == std::min(step, n))
			return -1;
	}
	if (arr[prev] == x)
		return prev;

	return -1;
}

int main()
{
	int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 610 };
	int x = 610;
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = jumpSearch(arr, x, n);
	std::cout << x << "'s Index =  " << index << std::endl;
	return 0;
}