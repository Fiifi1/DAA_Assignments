//ID: 10665423	
// NAME: Matthew Fiifi Hayford

#include <iostream> 
#include <time.h>
using namespace std; 
 
//LinearSearch method
//Takes in the array to search from, minIndex, MaxIndex and the key to search
int linearSearch(int list[], int low, int high, int key) 
{ 
	if (low > high) 
		return -1; 
	if (list[low] == key) 	//compares key to the lower indexed value
		return low; 
	if (list[high] == key)  //Compares key to the higher indexed value
		return high; 
	return linearSearch(list, low + 1, high - 1, key); //Updates the values of the function

	// The method searches both sides of the arary and completes with a complexity of n/2
}

//Method that returns minimum and maximum value from a list of integers
void minMax(int list[], int size){
    int min = list[0]; //set the minValue to the first in the array
    int max = list[0]; //set the maxValue to the first in the array
    
    for(int j = 1; j<size; j++){
		if(min > list[j])
		{
			min=list[j]; //switches the minValue if the condition is true
		}
		else if(max<list[j])
		{
			max = list[j]; //Switches the maxValue if the condition is true
		}
	}

    cout<<"\nList of numbers\n";
    for(int k=0; k<size; k++){
        cout<<list[k]<<" ";
    }
    cout<<"\nMaximum number is: "<< max << endl;
    cout<<"Minimum number is: "<< min << endl;

}


//Main function
int main(int argc, char *argv[]) 
{ 
    srand(time(0));
	int n, i, k;	//Intitializes variables size, key, and iterator
	cout<<"Enter the size of the array\nRandom array of integers would be generated:\t";
	cin>>n;

	int array[n];	//Initializes the array of size n

    
	for(i=0; i < n; i++){				//for loop to generate random array of integers 
		array[i] = (rand() % 100) + 1;
	}
 
    cout<<"Random array generated\n";
    for(int m=0; m<n; m++){
        cout<<array[m]<<" ";
    }
 
	cout<<"\n\nEnter the key value to search:\t";
	cin>>k;

	int index = linearSearch(array,0, n-1, k);	//Linear search function to return the 
												//index of the searched key
				
    if (index != -1) 
    	cout << "Item " << k << " is present at index "<< index<<endl; 
    else
        cout << "Item " << k << " is not present in the list"<<endl;
        
    minMax(array, n);   // Prints the minimum and maximum values from the list

    return 0; 
} 
