#include <iostream>
#include <new>
const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main() {
		double* pd1 = new double[N];
		double* pd2 = new (buffer) double[N];
		for (int i = 0; i < N; i++) 
				pd2[i] = pd1[i] = 1000 * i;
		std::cout << "Memory addresses on heap: " << pd1 << " and locally: " 
				<< (void*) buffer << std::endl;
		for (int i = 0; i < N; i++) {
				std::cout << pd1[i] << " at " << &pd1[i] << "; ";
				std::cout << pd2[i] << " at " << &pd2[i] << std::endl;
		}
		std::cout << "Calling delete on heap. Check the addresses. It might be the same\n";
		delete [] pd1;
		pd1 = new double[N];
		pd2 = new (buffer) double[N];
		for (int i = 0; i < N; i++) 
				pd2[i] = pd1[i] = 1000 * i;
		for (int i = 0; i < N; i++) {
				std::cout << pd1[i] << " at " << &pd1[i] << "; ";
				std::cout << pd2[i] << " at " << &pd2[i] << std::endl;
		}
		return 0;
}
