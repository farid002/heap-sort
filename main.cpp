/*
name:		Farid Huseynov
id:			150160904
course:		Analysis of Algorithms

		Project2
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <cmath>
#include "employee.h"
using namespace std;

void maxHeapify_numbers(int * num, int n, int i) {
	int largest = i; // Initialize largest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

					   // If left child is larger than root 
	if (l < n && num[l] > num[largest])
		largest = l;

	// If right child is larger than largest so far 

	if (r < n && num[r] > num[largest])
		largest = r;

	// If largest is not root 
	if (largest != i)
	{
		swap(num[i], num[largest]);

		// Recursively heapify the affected sub-tree 
		maxHeapify_numbers(num, n, largest);
	}
}
void buildMaxHeap_numbers(int * num, int n) {
	for (int i = floor(2000000 / 2 - 1); i >= 0; i--) {
		maxHeapify_numbers(num, n, i);
	}
}
int extractMax_numbers(int * num, int n) {
	if (n < 0) {
		cout << "HEAP UNDERFLOW" << endl;
	}
	int max = num[0];
	num[0] = num[n - 1];
	num[n - 1] = -2147483647; //the smallest number
	n = n - 1;
	maxHeapify_numbers(num, n, 0);
	return max;
}


int heapSize(Employee * emp) {
	int i = 0;
	while (!(emp[i].id == 0 && emp[i].total_calls == 0 && emp[i].neg_calls==0 && emp[i].pos_calls == 0)) {
		i++;
	}
	return i;
}
void minHeapify_ps(Employee * arr, int n, int i) {
	int smallest = i; // Initialize smallest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

					   // If left child is smaller than root 
	if (l < n && arr[l].ps < arr[smallest].ps)
		smallest = l;

	// If right child is smaller than smallest so far 

	if (r < n && arr[r].ps < arr[smallest].ps)
		smallest = r;

	// If smallest is not root 
	if (smallest != i)
	{
		swap(arr[i], arr[smallest]);

		// Recursively heapify the affected sub-tree 
		minHeapify_ps(arr, n, smallest);
	}
}
void minHeapify_calls(Employee * arr, int n, int i) {
	int smallest = i; // Initialize smallest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

					   // If left child is smaller than root 
	if (l < n && arr[l].total_calls < arr[smallest].total_calls)
		smallest = l;

	// If right child is smaller than smallest so far 

	if (r < n && arr[r].total_calls < arr[smallest].total_calls)
		smallest = r;

	// If smallest is not root 
	if (smallest != i)
	{
		swap(arr[i], arr[smallest]);

		// Recursively heapify the affected sub-tree 
		minHeapify_calls(arr, n, smallest);
	}
}
void maxHeapify_ps(Employee * arr, int n, int i) {
	int largest = i; // Initialize largest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

					   // If left child is larger than root 
	if (l < n && arr[l].ps > arr[largest].ps)
		largest = l;

	// If right child is larger than largest so far 
	
	if (r < n && arr[r].ps > arr[largest].ps)
		largest = r;

	// If largest is not root 
	if (largest != i)
	{
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree 
		maxHeapify_ps(arr, n, largest);
	}
}
void maxHeapify_calls(Employee * arr, int n, int i) {
	int largest = i; // Initialize largest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

					   // If left child is larger than root 
	if (l < n && arr[l].total_calls > arr[largest].total_calls)
		largest = l;

	// If right child is larger than largest so far 

	if (r < n && arr[r].total_calls > arr[largest].total_calls)
		largest = r;

	// If largest is not root 
	if (largest != i)
	{
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree 
		maxHeapify_calls(arr, n, largest);
	}
}
void buildMinHeap_ps(Employee * emp, int n) {
	for (int i = floor(heapSize(emp) / 2 - 1); i >= 0; i--) {
		minHeapify_ps(emp, n, i);
	}
}
void buildMinHeap_calls(Employee * emp, int n) {
	for (int i = floor(heapSize(emp) / 2 - 1); i >= 0; i--) {
		minHeapify_calls(emp, n, i);
	}
}
void buildMaxHeap_ps(Employee * emp, int n) {
	for (int i = floor(heapSize(emp) / 2 - 1); i >=0 ; i--) {
		maxHeapify_ps(emp, n, i);
	}
}
void buildMaxHeap_calls(Employee * emp, int n) {
	for (int i = floor(heapSize(emp) / 2 - 1); i >= 0; i--) {
		maxHeapify_calls(emp, n, i);
	}
}
Employee extractMin_ps(Employee * emp, int n) {
	if (n < 0) {
		cout << "HEAP UNDERFLOW" << endl;
	}
	Employee min = emp[0];
	emp[0] = emp[n - 1];
	emp[n - 1].id = 0;
	emp[n - 1].neg_calls = 0;
	emp[n - 1].pos_calls = 0;
	emp[n - 1].total_calls = 0;
	emp[n - 1].ps = 0;
	n = n - 1;
	minHeapify_ps(emp, n, 0);
	return min;
}
Employee extractMin_calls(Employee * emp, int n) {
	if (n < 0) {
		cout << "HEAP UNDERFLOW" << endl;
	}
	Employee min = emp[0];
	emp[0] = emp[n - 1];
	emp[n - 1].id = 0;
	emp[n - 1].neg_calls = 0;
	emp[n - 1].pos_calls = 0;
	emp[n - 1].total_calls = 0;
	emp[n - 1].ps = 0;
	n = n - 1;
	minHeapify_calls(emp, n, 0);
	return min;
}
Employee extractMax_ps(Employee * emp, int n) {
	if (n < 0) {
		cout << "HEAP UNDERFLOW" << endl;
	}
	Employee max = emp[0];
	emp[0] = emp[n-1];
	emp[n - 1].id = 0;
	emp[n - 1].neg_calls = 0;
	emp[n - 1].pos_calls = 0;
	emp[n - 1].total_calls = 0;
	emp[n - 1].ps = 0;
	n=n-1;
	maxHeapify_ps(emp, n, 0);
	return max;
}
Employee extractMax_calls(Employee * emp, int n) {
	if (n < 0) {
		cout << "HEAP UNDERFLOW" << endl;
	}
	Employee max = emp[0];
	emp[0] = emp[n - 1];
	emp[n - 1].id = 0;
	emp[n - 1].neg_calls = 0;
	emp[n - 1].pos_calls = 0;
	emp[n - 1].total_calls = 0;
	emp[n - 1].ps = 0;
	n = n - 1;
	maxHeapify_calls(emp, n, 0);
	return max;
}
void heapSort(Employee * emp, int n) {
	buildMaxHeap_ps(emp, n);
	for (int i = n - 1; i >= 0; i--) {
		swap(emp[0], emp[i]);
		maxHeapify_ps(emp, i, 0);
	}
}
void increaseKey(Employee * emp, int i, Employee key) {
	if (key.ps < emp[i].ps) {
		cout << "NEW KEY IS SMALLER THAN CURRENT KEY\n";
	}
	emp[i] = key;
	while (i > 0 && emp[(i - 1) / 2].ps < emp[i].ps) {
		swap(emp[i], emp[(i - 1) / 2]);
		i = (i - 1) / 2;
	}
}
void insert(Employee * emp, Employee key, int n) {
	++n;
	emp[n-1].id = -1;
	emp[n-1].ps = -1;
	increaseKey(emp, n-1, key);
}
void readDayOneAndConstructHeap(Employee * emp)
{
	int i = 0;
	ifstream in;
	in.open("dataset/day1.csv");
	if (!in.is_open()) cout << "Failed to read CSV file...\n";
	else {
		string line;
		while (getline(in, line))                   // read a whole line of the file
		{
			stringstream ss(line);                     // put it in a stringstream (internal stream)
			string data;

			getline(ss, data, ',');
			emp[i].id = stoi(data);              //id until first comma

			getline(ss, data, ',');
			emp[i].total_calls = stoi(data);		//total calls until the next comma

			getline(ss, data, ',');
			emp[i].pos_calls = stoi(data);			//positive calls until the next comma

			getline(ss, data);
			emp[i].neg_calls = stoi(data);			//negative calls until the end of line

			emp[i].ps = 2 * emp[i].total_calls + emp[i].pos_calls - emp[i].neg_calls;    //performance score

			++i;
		}
		int hSize = heapSize(emp);

		buildMaxHeap_ps(emp, heapSize(emp));
		Employee temp1 = extractMax_ps(emp, hSize);
		--hSize;
		Employee temp2 = extractMax_ps(emp, hSize);
		--hSize;
		Employee temp3 = extractMax_ps(emp, hSize);
		--hSize;
		cout << "AFTER DAY-1" << endl;
		cout << "BEST PERFORMANCE\t: " << temp1.id << ", " << temp2.id << ", " << temp3.id << endl;
		insert(emp, temp1, hSize);
		++hSize;
		insert(emp, temp2, hSize);
		++hSize;
		insert(emp, temp3, hSize);
		++hSize;

		buildMaxHeap_calls(emp, hSize);
		temp1 = extractMax_calls(emp, hSize);
		--hSize;
		temp2 = extractMax_calls(emp, hSize);
		--hSize;
		temp3 = extractMax_calls(emp, hSize);
		--hSize;
		cout << "MAXIMUM CALLS\t\t: " << temp1.id << ", " << temp2.id << ", " << temp3.id << endl;
		insert(emp, temp1, hSize);
		++hSize;
		insert(emp, temp2, hSize);
		++hSize;
		insert(emp, temp3, hSize);
		++hSize;

		//cout << endl;
	}

}
void updateTheList(Employee * emp, Employee curr_emp, int index) {

	curr_emp.total_calls += emp[index].total_calls ;
	curr_emp.pos_calls +=  emp[index].pos_calls  ;
	curr_emp.neg_calls += emp[index].neg_calls  ;
	curr_emp.ps = 2 * curr_emp.total_calls + curr_emp.pos_calls - curr_emp.neg_calls;


	increaseKey(emp, index, curr_emp);
}
int existanceOnList(Employee * emp, int id) {
	for (int i = 0; i < heapSize(emp); i++) {   //function return the index if that employee exists already
		if (emp[i].id == id) return i;
	}
	return -5;       //if employee does not exist it returns -5
}
void readOtherDaysAndUpdate(Employee * emp) {
	
	int index;
	Employee curr_emp;
	int hSize;
	for (int file_number = 2; file_number <= 10; file_number++) {
		clock_t start;double duration;
		start = std::clock();
		
		ifstream in;
		string file_name = "dataset/day" + to_string(file_number) + ".csv";
		in.open(file_name);

		if (!in.is_open()) {
			cout << "Failed to read CSV file...\n";
		}
		else {
			string line;

			while (getline(in, line))                   // read a whole line of the file
			{
				stringstream ss(line);                     // put it in a stringstream (internal stream)
				string data;

				getline(ss, data, ',');
				curr_emp.id = stoi(data);              //id until first comma

				getline(ss, data, ',');
				curr_emp.total_calls = stoi(data);		//total calls until the next comma

				getline(ss, data, ',');
				curr_emp.pos_calls = stoi(data);			//positive calls until the next comma

				getline(ss, data);
				curr_emp.neg_calls = stoi(data);			//negative calls until the end of line

				curr_emp.ps = 2 * curr_emp.total_calls + curr_emp.pos_calls - curr_emp.neg_calls;

				index = existanceOnList(emp, curr_emp.id);

				if (index != -5) {
					updateTheList(emp, curr_emp, index);
				}
				else {
					
					insert(emp, curr_emp, heapSize(emp));
				}
			}
			hSize = heapSize(emp);
			buildMaxHeap_ps(emp, hSize);
			Employee temp1 = extractMax_ps(emp, hSize);
			--hSize;
			Employee temp2 = extractMax_ps(emp, hSize);
			--hSize;
			Employee temp3 = extractMax_ps(emp, hSize);
			--hSize;
			cout << "AFTER DAY-" << file_number << endl;
			cout << "BEST PERFORMANCE\t: " << temp1.id << ", " << temp2.id << ", " << temp3.id << endl;
			insert(emp, temp1, hSize);
			++hSize;
			insert(emp, temp2, hSize);
			++hSize;
			insert(emp, temp3, hSize);
			++hSize;

			if (file_number == 10) {
				buildMinHeap_ps(emp, hSize);
				temp1 = extractMin_ps(emp, hSize);
				--hSize;
				temp2 = extractMin_ps(emp, hSize);
				--hSize;
				temp3 = extractMin_ps(emp, hSize);
				--hSize;
				cout << "WORST PERFORMANCE\t: " << temp1.id << ", " << temp2.id << ", " << temp3.id << endl;
				insert(emp, temp1, hSize);
				++hSize;
				insert(emp, temp2, hSize);
				++hSize;
				insert(emp, temp3, hSize);
				++hSize;
			}
			

			buildMaxHeap_calls(emp, hSize);
			temp1 = extractMax_calls(emp, hSize);
			--hSize;
			temp2 = extractMax_calls(emp, hSize);
			--hSize;
			temp3 = extractMax_calls(emp, hSize);
			--hSize;
			cout << "MAXIMUM CALLS\t\t: " << temp1.id << ", " << temp2.id << ", " << temp3.id << endl;
			insert(emp, temp1, hSize);
			++hSize;
			insert(emp, temp2, hSize);
			++hSize;
			insert(emp, temp3, hSize);
			++hSize;

			if (file_number == 10) {
				buildMinHeap_calls(emp, hSize);
				temp1 = extractMin_calls(emp, hSize);
				--hSize;
				temp2 = extractMin_calls(emp, hSize);
				--hSize;
				temp3 = extractMin_calls(emp, hSize);
				--hSize;
				cout << "MINIMUM CALLS\t\t: " << temp1.id << ", " << temp2.id << ", " << temp3.id << endl;
				insert(emp, temp1, hSize);
				++hSize;
				insert(emp, temp2, hSize);
				++hSize;
				insert(emp, temp3, hSize);
				++hSize;
			}
			
			
			duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
			//cout << duration << "  seconds" << endl;
			cout << endl;
		}
	}
	
}
void sortTheNumbers() {
	ifstream in;
	ofstream out;
	int numm;
	int num_size = 2000000;
	out.open("output.csv");
	in.open("dataset/numbers.csv");
	if (!in.is_open()) cout << "Failed to read CSV file...\n";
	else {
		string line;
		int i = 0;
		int * numbers = new int[2000000];
		while (getline(in, line)) {
			numbers[i] = stoi(line);
			i++;
		}
		buildMaxHeap_numbers(numbers, 2000000);
		//cout << i << "     " << numbers[i] << endl;
		int j = 0;
		clock_t start;
		double duration;
		start = std::clock();
		for (int i = 0; i < 2000000; i++) {
			
			 numm = extractMax_numbers(numbers, num_size);
			 out << numm << endl;
			 num_size--;
			 if (i == (200000 * j )) {
				 cout << "Height of the heap: " << floor(log2(num_size));
				 duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
				 cout << "      Executed in: "<<duration << "  seconds" << endl;
				 start = std::clock();
				 j++;
			 }
		}
	}

}
int main(){
	Employee * employees = new Employee[2000];

	clock_t start;
	double duration;
	start = std::clock();
	readDayOneAndConstructHeap(employees);
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
	//cout << duration << "  seconds"<<endl;
	cout << endl;

	readOtherDaysAndUpdate(employees);	
	sortTheNumbers();
	getchar();
	return 0;
}