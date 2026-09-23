#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("123\n");//1
	printf("1\n2\n3\n");//2
	printf("1\n\t2\n\t\t3\n");//3
	printf("%d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);//4
	printf("%10.3f\n", 12.234657);//5
	printf("%10.5f\n", 12.234657);//6
	printf("Остаток от деления на %d на %d равен %d\n", 5,2,5%2);//7
	printf("Остаток от деления на %d на %d равен %d\n", 7, 5, 7 % 5);//8
	printf("Произведение на %d на %d равен %d\n", 2000, 4, 2000 * 4);//9
	printf("%g разделить %f равно %e\n ", 5., 2000000., 5. / 2000000);//10
	getchar();
}

