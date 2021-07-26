/*Write a function that calculates the
first N prime numbers and put these 
numbers in the array passed to it.*/


#include <iostream> 
using namespace std;

void simple(int N, int arr[]);
void printArray(int N, int arr[]);

void main()
{
	setlocale(LC_ALL, "ru");
	int N = 0;
	
	cout << "¬ведите кол-во первых простых чисел (N): " << endl;
	cin >> N;
	cout << endl;
		
	int *arr = new int[N];	//объ€вление динамического массива
	simple(N, arr);			
	
	printArray(N, arr);		//дл€ поставленного задани€ эта функци€ не требуетс€, 
							//т.к. у нас не прос€т вывести массив на эран, 
							//но дл€ проверки работоспособности она необходима
	
	
	delete[] arr;			//чистка пам€ти и удаление данных массива
	arr = nullptr;			//чистка адреса указател€
	system("pause");
}


//функци€ записи в массив первых N простых чисел
void simple(int N, int arr[])		
{
	int x = 1;
	int counter = 0;

	while (counter < N)
	{
		int i = 2;
		bool y = true;		//каждый раз присваиваем необходимые значени€ переменным
		
		while (i < x)		//цикл определениющих простое число или нет
		{					
			if (x % i == 0)
				y = false;
			i++;
		}

		if (y)				//условие дл€ правильной работы счетчика
		{
			arr[counter] = x;
			counter++;
		}
		x++;
	}
}

// ‘ункци€ вывода массива на экран
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