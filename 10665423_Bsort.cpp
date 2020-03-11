#include <iostream>
#include <time.h>

using namespace std;

void swapFunction(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void Bsort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swapFunction(&arr[j], &arr[j+1]);  
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
    
    //call bubble sort and organize function here
    Bsort(A, sizeOfArray);

     cout<< "\n Sorted Array:\n";
    for (int i = 0; i<sizeOfArray; i++){
        cout<< A[i] <<" ";
    }

}
