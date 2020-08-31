#include <iostream>
#include <vector>

int FindDuplicates(std::vector<int> array) {
	int tortoise = array[0];
	int hare = array[0];
	while (true) {
		tortoise = array[tortoise];
		hare = array[array[hare]];
		if (tortoise == hare)
			break;
	}
	int ptr1 = array[0];
	int ptr2 = tortoise;
	while (ptr1 != ptr2) {
		ptr1 = array[ptr1];
		ptr2 = array[ptr2];
	}
	return ptr1;
}

int main() {
	std::vector<int> array{1,3,4,4,2};
	std::cout << FindDuplicates(array)<<'\n';
	return 0;
}