#include <iostream>
#include <string>
#include <cassert>
using namespace std; 

//Lecture on pointers and dynamic memory 
//By: Gianluca Venditti 
//Tuesday, October 12 2021

int main()
{
	int* intPointer; //decalred a pointer to an integer
	int numb(10); //intializes the numb varible to 10
	intPointer = &numb; //assinged the pointer to the adress of numb 

	cout << "Numb value is " << numb << "ad has an adress of " << &numb << endl; 
	cout << "intPointer has a value of " << *intPointer << "and has a value of " << intPointer <<  endl; 

	*intPointer += 20; // add 20 to the varible numb 
	cout << "numb value is now " << numb << endl; 

	//runtime memory using pointers 
	int* heapIntPointer = new int(50); // declare a new pointer of type int, allocating memory with the new keyword, needing more runtime memory. allotcates runtime memory (heap memory) for an int																		
	assert(heapIntPointer != NULL); // ensures memory was allocated 
	cout << "heapIntPointer has a value of " << *heapIntPointer << endl; 
	delete heapIntPointer; //frees up memoery which was allocated on the heap

	//poinmters of different data types on the heap
	char* charPointer = new char('l'); //*charPointer is initalized to 'l' and lives on the heap
	assert(charPointer != 0);// ensures memory was allocated
	*charPointer = 't'; 
	cout << charPointer << "has a value of " << *charPointer << endl; 
	delete charPointer; // frees up memory which was allotcated on the heap

	string* description = new string; 
	assert(description); //ensures memory was allocated 
	*description = "Laptop";//assigned a value 
	cout << " description has a value of " << *description << endl; 
	delete description; // frees up memory which was allocated on the heap

	//Arrays and Pointers
	int* grades = new int[5]; //created an array on the heap of size 5, holding 5 elements of type int 
	assert(grades); //making sure there is enough memory allocated for this, otherwise program will crash
	int* ptrGrades = grades; // recall the name of the array is its adress, we dont need & here // point to the first element of the array 
	grades[0] = 80; // cant use grades as if it was an array
	grades[1] = 70; 
	cout << grades[0] << " -  " << grades[1] << endl; 
	ptrGrades++; 
	cout << *ptrGrades << endl; // should display first element of the array (80) as it is the first element of the array index
	cout << *(ptrGrades + 1) << endl; // look at the next element in the array, in this case it will be pointing to 70. Using these pointers to walk down the list. 
	delete[]grades; // deletes all elements in the array






	// 

	system("pause");
}