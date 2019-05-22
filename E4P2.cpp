
/* Create a C++ functional program that sorts n number of elements using either selection or bubble sort. 

Selection Sorting… 
Enter the array size: 5 
Enter the 5 elements: 
 
100 50 22 101 200 
 
Your data: 100 50 22 101 200 
 
After using selection or bubble sort… 
 
Sorted data: 22 50 100 101 200 */
// By Lei-Ann Edang (Eng 1-12)

#include <iostream>
#include <conio.h>

void SORT(int A[], int arraySize);
using namespace std;

int main ()

{
	
	int arraySize, i, j;
	
	cout << "Enter the array size: ";
	cin >> arraySize;
	
	int A[arraySize];
	cout << "Enter the " << arraySize << " elements: ";

	for (i=0; i<arraySize; i++)
		cin >> A[i];
		cout << "\nYour data: ";
		
	for (i=0; i<arraySize; i++)
		cout << A[i]<<" ";
	cout<<endl << endl;	
	SORT(A, arraySize);
	
	_getch();
	return 0;
	
}

	void SORT( int A[], int arraySize)

{
	for (int i=0; i < arraySize-1; i++)
	{
		for (int j=i+1; j < arraySize; j++)
		{
			if (A[i] > A[j])
			{
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
		}
	}
	
	cout<< "After using selection or bubble sort...\n \n";
	cout << "Sorted data: ";
	
	for (int i=0; i<arraySize; i++)
		cout << A[i] << " ";
		cout<<endl;
}
