#include <stdio.h>

int soma(int a, int b)
{
	int soma_num = a + b;
	return soma_num;
}

int subtracao(int a, int b)
{
	int sub = a - b;
	return sub;
}

int multiplicacao(int a, int b)
{
	int mult = a * b;
	return mult;
}

int divisao(int a, int b)
{
	int div = a / b;
	return div;
}

int main()
{
	printf("Soma dos dois numeros: %d\n",soma(5,5));
	printf("Subtracao dos dois numeros: %d\n",subtracao(5,2));
	printf("Multiplicacao dos dois numeros: %d\n",multiplicacao(5,2));
	printf("Divisao dos dois numeros: %d\n",divisao(4,2));
	return 0;
}
