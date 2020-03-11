#include <iostream>
#include <time.h>

using namespace std;

void swapMethod(int *left, int *right)  
{  
    int temp = *left;  
    *left = *right;  
    *right = temp;  
}  
  
void selectionSort(int A[], int size)  
{  
    int i, j, min;  
  
    // Step through the unsorted array  
    for (i = 0; i < size-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min = i;  
        for (j = i+1; j < size; j++)  
        if (A[j] < A[min])  
            min = j;  
  
        // Swap if the condition is fulfilled  
        swapMethod(&A[min], &A[i]);  
    }  
}   

int main(int argc, char **argv){
    srand(time(0));
    int sizeOfArray;
    
    cout<<"Enter size of Array to be sorted:\t";
    cin>>sizeOfArray;
    
    int A[sizeOfArray];

    for (int i = 0; i<sizeOfArray; i++){
        A[i] = (rand() % 100) + 1;
    }

    //Random array of numbers  1-100
    cout<< "Random unsorted Array (1-100)\n";
    for (int i = 0; i<sizeOfArray; i++){
        cout<< A[i] <<" ";
    }
    
    //Call selection sort and sort array here
    selectionSort(A, sizeOfArray);

     cout<< "\n Sorted Array:\n";
    for (int i = 0; i<sizeOfArray; i++){
        cout<< A[i] <<" ";
    }

    return 0;
}