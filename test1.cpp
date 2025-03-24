#include "iostream"

void mult(int a, int b)
{
	std::cout << a * b << "\n";



}
int main()
{
	int a;
	int b;
	std::cin >> a >> b;
	std::cout << a + b << "\n";
	mult(a, b);



	return 0;
}