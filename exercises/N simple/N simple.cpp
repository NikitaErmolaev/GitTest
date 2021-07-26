/*Write a function that calculates the
first N prime numbers and put these
numbers in the array passed to it.*/


#include <iostream> 
using namespace std;

void simple(int N, int arr[]);
void printArray(int N, int arr[]);

void main()
{
	setlocale(LC_ALL, "eng");
	int N = 0;

	cout << "Enter the number of the first prime numbers (N): " << endl;
	cin >> N;
	cout << endl;

	int* arr = new int[N];	//declaring a dynamic array
	simple(N, arr);

	printArray(N, arr);		//for the given task, this function is not required,
							//since we are not asked to display an array on the screen,
							//but it is necessary to check its operability


	delete[] arr;			//cleaning memory and deleting array data
	arr = nullptr;			//cleaning the pointer address
	system("pause");
}


//the function of writing the first N primes to an array
void simple(int N, int arr[])
{
	int x = 1;
	int counter = 0;

	while (counter < N)
	{
		int i = 2;
		bool y = true;		//each time we assign the necessary values to the variables

		while (i < x)		//we define a prime number or not
		{
			if (x % i == 0)
				y = false;
			i++;
		}

		if (y)				//condition for the correct operation of the counter
		{
			arr[counter] = x;
			counter++;
		}
		x++;
	}
}

//array output function on the screen
void printArray(int N, int arr[])
{
	int j = 0;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
		j++;
		if (j % 10 == 0)
			cout << endl;
	}
	cout << endl << endl;
}