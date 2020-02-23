//ID: 10665423	
// NAME: Matthew Fiifi Hayford

#include <iostream> 

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


//Main function
int main(int argc, char *argv[]) 
{ 
	int n, i, k;	//Intitializes variables size, key, and iterator
	cout<<"Enter the size of the array:\t";
	cin>>n;

	int array[n];	//Initializes the array of size n

	for(i=0; i < n; i++){				//for loop to take in the array 
		cout << "Enter number "<< (i+1) <<":\t";
		cin >>array[i];
	}

	cout<<"Enter the key value to search:\t";
	cin>>k;

	int index = linearSearch(array,0, n-1, k);	//Linear search function to return the 
												//index of the searched key
				
    if (index != -1) 
    	cout << "Item " << k << " is present at index "<< index<<endl; 
    else
        cout << "Item " << k << " is not present in the list"<<endl;

    return 0; 
} 
