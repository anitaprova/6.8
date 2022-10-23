/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.1
The program creates an array and gives some output. 
*/

#include <iostream>
#include <string>

using namespace std;


bool equals(int a[], int a_size, int b[], int b_size) {
	if(a_size == b_size) {
		for (int i = 0; i < a_size; i++) {
			if(a[i] != b[i]){
				return false;
			}
		}
		return true;
	}
	else{return false;}
}

int main() {
	int a[] = {0, 1, 2, 3, 4, 5};
	int b[] = {0, 1, 2, 3, 4, 5}; 
	
	cout << equals(a, 6, b, 6) << endl;
	
	return 0;
}
