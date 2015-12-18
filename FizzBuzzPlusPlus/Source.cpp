#include <stdio.h>

/* First Attempt */
/*
int main(int argv, int argc[]) {
	int i;
	for (int x = 1; x <= 100; x++) {
		bool fizz = ((x % 3) == 0) ? 1 : 0;
		bool buzz = ((x % 5) == 0) ? 1 : 0;
		if (fizz && buzz)
			printf("FizzBuzz.\n");
		else if (fizz && !buzz)
			printf("Fizz.\n");
		else if (!fizz && buzz)
			printf("Buzz.\n");
		else
			printf("%i.\n", x);
	}
	std::cin >> i;
}
*/

int main(int argv, int argc[]) {
	int i;
	for (int x = 1; x <= 100; x++) {
		if (!(x % 3))
			printf("Fizz");
		if (!(x % 5))
			printf("Buzz");
		if ((x % 5) && (x % 3))
			printf("%i", x);
		printf(".\n");
	}
	scanf_s("%d", &i);
}