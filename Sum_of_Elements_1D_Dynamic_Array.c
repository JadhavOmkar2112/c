/*
	An array is a container object that holds a fixed number 
	of values of a single type. To create an array in C, we 
	can do int arr[n];. Here, arr, is a variable array which 
	holds up to 10 integers. The above array is a static array 
	that has memory allocated at compile time. A dynamic array 
	can be created in C, using the malloc function and the 
	memory is allocated on the heap at runtime. To create an 
	integer array, arr of size n, 
	int *arr = (int*)malloc(n * sizeof(int)), where arr points to 
	the base address of the array. When you have finished with 
	the array, use free(arr) to deallocate the memory.
	
	
	In this challenge, create an array of size  dynamically, 
	and read the values from stdin. Iterate the array 
	calculating the sum of all elements. Print the sum and 
	free the memory where the array is stored.

	While it is true that you can sum the elements as they are 
	read, without first storing them to an array, but you will 
	not get the experience working with an array. Efficiency 
	will be required later.
	
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int iSize = 0,i=0,iSum=0;
    int *Arr = NULL;
    
    scanf("%d",&iSize);
    
    Arr = (int*)malloc(iSize * sizeof(int));
    
    for(i=0 ; i < iSize ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    for(i=0 ; i<iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    
    printf("%d",iSum);
    
    free(Arr);
    return 0;
} 