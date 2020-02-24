// ID: 10665423
// NAME: Matthew Fiifi Hayford

#include <iostream> 
#include <time.h>
#include <chrono>

using namespace std; 
using namespace std::chrono;

//Merge Function that takes in two arrays 
void merge(int list[], int left, int mid, int right) 
{ 
	int i, j, k; 
	int temp1 = mid - left + 1; 
	int temp2 = right - mid; 

	//Create temporary arrays to hold the different arrays to be merged
	int L[temp1], R[temp2]; 

	// duplicate data into temporary arrays L[] and R[] 
	for (i = 0; i < temp1; i++) 
		L[i] = list[left + i]; 
	for (j = 0; j < temp2; j++) 
		R[j] = list[mid + 1 + j]; 

	// Merge the temporary arrays into list
	
	i = 0; 
	j = 0; 
	k = left;
	while (i < temp1 && j < temp2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			list[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			list[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	// Add the remaining elements of L[]
	while (i < temp1) 
	{ 
		list[k] = L[i]; 
		i++; 
		k++; 
	} 

	// Copy the remaining elements of R[]
	while (j < temp2) 
	{ 
		list[k] = R[j]; 
		j++; 
		k++; 
	} 
} 


void mergeSort(int list[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int mid = low+(high-low)/2; 

		// Sort both halves 
		mergeSort(list, low, mid); 
		mergeSort(list, mid + 1, high); 

		merge(list, low, mid, high); 
	} 
} 


// Print Array function
void displayArray(int A[], int size) 
{ 
	
	for (int i=0; i < size; i++) 
		cout<< A[i]<<"  "; 
	cout<<"\n";
} 

//Main function that runs the program
int main() 
{ 
    int size;
    cout<<"Enter size of array to be sorted\nArray of integers would be generated at random:\t";
    cin>>size;
    
    int arrToBeSorted[size];
    
    srand(time(0));
    cout<<"Random array of integers generated! (1-100)"<<endl;
    for (int i=0; i < size; i++){
        arrToBeSorted[i] = (rand() % 100) + 1;
    }

	cout<<"Given array is \n"; 
	displayArray(arrToBeSorted, size); 
	
	// Get starting timepoint 
    auto init = high_resolution_clock::now(); 

	mergeSort(arrToBeSorted, 0, size - 1); 
	
	// Get ending timepoint 
    auto end = high_resolution_clock::now();

	cout<<"\nSorted array is \n"; 
	displayArray(arrToBeSorted, size);
	
	//Print out execution time
	auto duration = duration_cast<microseconds>(end - init); 
    cout << "Time taken by function (Execution Time): "
         << duration.count() << " microseconds" << endl;
	
	return 0; 
} 
