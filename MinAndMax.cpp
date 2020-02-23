#ID: 10665423	
#NAME: Matthew Fiifi Hayford

#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
    int min, max, size;
    
    cout<<"Enter size of List:\t";
    cin>>size;
    
    int list[size]; //initializes array with entered size
    
    for(int i=0; i<size; i++){
        cout<< "Enter value for array number "<<i+1<<": ";
        cin>> list[i]; // puts values in array
    }

    min = list[0]; //set the minValue to the first in the array
    max = list[0]; //set the maxValue to the first in the array
    
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

return 0;

}
