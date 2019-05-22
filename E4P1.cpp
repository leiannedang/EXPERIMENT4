
/* Write a C++ program using functions that will display the calculator menu. 
The program will prompt the user to choose the operation choice (from 1 to 5). 
Then it asks the user to input two integer vales for the calculation.
See the sample below. 

	MENU:           
		1. Add            
		2. Subtract            
		3. Multiply            
		4. Divide            
		5. Modulus  
		
		Enter your choice: 1  
		Enter your two numbers: 12 15  
		Result: 27   
	
	Continue? y 
	
	The program also asks the user to decide whether he/she wants to continue the operation. 
	If he/she input ‘y’, the program will prompt the user to choose the operation gain.
	Otherwise, the program will terminate. */
// By Lei-Ann Edang (Eng 1-12)

#include <iostream>
#include <conio.h>

using namespace std;

void Add();
void Subtract();
void Multiply();
void Divide();
void Modulus();

int x,y;
int main()

{
	
	int choice; 
	char Ans;
	
	cout << "MENU:\n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Modulus \n";
	
do
	{
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice)
		
		{
			case 1: Add(); break;
			case 2: Subtract(); break;
			case 3: Multiply(); break;
			case 4: Divide(); break;
			case 5: Modulus(); break;
			default: cout<<"Invalid choice\n";
		}
		
		cout << "Continue? ";
		cin >> Ans; 
		
	}
	while(Ans=='y'||Ans =='Y');
	system("pause");
	return 0;
	
}

	void Add()
	{	
		
		cout << "Enter two integers: ";
		cin >> x >> y;
		cout << "Result: " << x+y << endl;
	}
	
	void Subtract()
	{	cout << "Enter two integers: ";
		cin >> x >> y;
		cout << "Result: " << x-y << endl;
	}
	
	void Multiply()
	{	cout << "Enter two integers: ";
		cin >> x >> y;
		cout << "Result: " << x*y << endl;
	}
	
	void Divide()
	{	cout << "Enter two integers: ";
		cin >> x >> y;
		cout << "Result: " << x/y << endl;
	}

	void Modulus()
	{	cout << "Enter two integers: ";
		cin >> x >> y;
		cout << "Result: " << x%y << endl;
	}


