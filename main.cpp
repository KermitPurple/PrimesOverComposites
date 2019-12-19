#include<iostream>
#include<iomanip>
#include"prime.h"
using namespace std;

const int size = 5000;

double* numbers(){
	double* arr = new double[size + 1];
	int pcount = 0;
	int ccount = 0;
	for(int n = 1; n <= size; n++){
		if(n == 1) ccount++;
		else if(prime(n)) pcount++;
		else ccount++;
		arr[n] = double(pcount) / ccount;
	}
	return arr;
}
void PrintGraph(double arr[]){
	for(int n = 1; n <= size; n++){
		cout << setw(5) << n << " ";	
		for(int i = 0; i < arr[n] * 20; i++){
			cout << "*";
		}
		cout << " " << arr[n] << endl;
	}
}
int main()
{
	double* nums = numbers();
	PrintGraph(nums);
	delete [] nums;
	return 0;
}

