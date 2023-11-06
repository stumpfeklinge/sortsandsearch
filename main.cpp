#include <iostream>
#include "search.h"
#include "sort_bubble.h"
#include "sort_quick.h"
#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

int compare(const void* x1, const void* x2)
{
	return (*(int*)x1 - *(int*)x2);              // если результат вычитания равен 0, то числа равны, < 0: x1 < x2; > 0: x1 > x2
}
void quickSort(double* arr, int low, int high) {

int main() {

	int n;
	cout << "Введите кол-во эл-ов массива: "<<endl;
	cin>>n;
	double* arr;
	double* arr1;
	double* arr2;
	arr = new double[n];
	arr1 = new double[n];
	arr2 = new double[n];
	for (int i = 0; i < n; i++)
	{
		arr[i]=rand();
		arr1[i] = arr[i];
		arr2[i] = arr[i];
	}
	double x=arr[rand() % n +0];
	clock_t startse1 = clock();
	find(arr,arr + n,x);
	clock_t endse1 = clock();
	cout << "Время выполнения поиска встроенной фуенкцией =" <<fixed<< (double)(endse1 - startse1) / CLOCKS_PER_SEC << endl;

	clock_t startse2 = clock();
	if (Search(arr, n, x) != -1)
		cout << "Эл-нт находится на индексе №" << Search(arr, n, x) << endl;
	else
		cout << "Такого эл-та нет" << endl;

	clock_t endse2 = clock();
	cout << "Время выполнения поиска моей фуенкцией =" <<fixed<<  (double)(endse2 - startse2) / CLOCKS_PER_SEC << endl;

	clock_t startbu1 = clock();
	//bubbleSort(arr1,n);
	clock_t endbu1 = clock();
	//cout << "Время выполнения сортировки моей фуенкцией bubble =" <<fixed<<  (double)(endbu1 - startbu1) / CLOCKS_PER_SEC << endl;

	clock_t startqu2 = clock();
	quickSort(arr2, 0, n - 1);
	clock_t endqu2 = clock();
	cout << "Время выполнения сортировки моей фуенкцией quick_sort =" <<fixed<<  (double)(endqu2 - startqu2) / CLOCKS_PER_SEC << endl;

	clock_t startqu1 = clock();
	qsort(arr,n,sizeof(int),compare);
	clock_t endqu1 = clock();
	cout << "Время выполнения сортировки встроенной фуенкцией sort =" <<fixed<<  (double)(endqu1 - startqu1) / CLOCKS_PER_SEC << endl;
	
}
