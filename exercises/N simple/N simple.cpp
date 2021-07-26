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
	
	cout << "������� ���-�� ������ ������� ����� (N): " << endl;
	cin >> N;
	cout << endl;
		
	int *arr = new int[N];	//���������� ������������� �������
	simple(N, arr);			
	
	printArray(N, arr);		//��� ������������� ������� ��� ������� �� ���������, 
							//�.�. � ��� �� ������ ������� ������ �� ����, 
							//�� ��� �������� ����������������� ��� ����������
	
	
	delete[] arr;			//������ ������ � �������� ������ �������
	arr = nullptr;			//������ ������ ���������
	system("pause");
}


//������� ������ � ������ ������ N ������� �����
void simple(int N, int arr[])		
{
	int x = 1;
	int counter = 0;

	while (counter < N)
	{
		int i = 2;
		bool y = true;		//������ ��� ����������� ����������� �������� ����������
		
		while (i < x)		//���� �������������� ������� ����� ��� ���
		{					
			if (x % i == 0)
				y = false;
			i++;
		}

		if (y)				//������� ��� ���������� ������ ��������
		{
			arr[counter] = x;
			counter++;
		}
		x++;
	}
}

// ������� ������ ������� �� �����
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