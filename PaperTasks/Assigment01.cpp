#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

pair<vector<int>, long long> bubbleSort(vector<int> arr) {
	long long comparison_count = 0;
	size_t n = arr.size();
	for (size_t i = 0; i + 1 < n; ++i) {
		for (size_t j = 0; j + 1 < n - i; ++j) {
			++comparison_count; // comparing arr[j] and arr[j+1]
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	return {arr, comparison_count};
}

pair<vector<int>, long long> selectionSort(vector<int> arr) {
	long long comparison_count = 0;
	size_t n = arr.size();
	for (size_t i = 0; i + 1 < n; ++i) {
		size_t min_idx = i;
		for (size_t j = i + 1; j < n; ++j) {
			++comparison_count; // comparing arr[j] and arr[min_idx]
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		if (min_idx != i) swap(arr[i], arr[min_idx]);
	}
	return {arr, comparison_count};
}

int main() {
	cout << "Enter numbers separated by spaces (press Enter when done):\n";
	string line;
	if (!std::getline(cin, line)) return 0;
	istringstream iss(line);
	vector<int> data;
	int x;
	while (iss >> x) data.push_back(x);

	if (data.empty()) {
		cout << "No numbers entered. Example input: 5 3 8 1 2\n";
		return 0;
	}

	// Run Bubble Sort on a copy
	auto bubble_input = data;
	auto bubble_result = bubbleSort(bubble_input);
	cout << "Bubble Sort - Sorted list: ";
	for (size_t i = 0; i < bubble_result.first.size(); ++i) {
		if (i) cout << ' ';
		cout << bubble_result.first[i];
	}
	cout << "\nBubble Sort - Total comparisons: " << bubble_result.second << "\n\n";

	// Run Selection Sort on a copy
	auto selection_input = data;
	auto selection_result = selectionSort(selection_input);
	cout << "Selection Sort - Sorted list: ";
	for (size_t i = 0; i < selection_result.first.size(); ++i) {
		if (i) cout << ' ';
		cout << selection_result.first[i];
	}
	cout << "\nSelection Sort - Total comparisons: " << selection_result.second << "\n";

	return 0;
}
)
