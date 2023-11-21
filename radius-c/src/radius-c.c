/*
 ============================================================================
 Name        : radius-c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Write a c program to find out the area of a circle
	// Formula to calculate area: PI * radius * radius

	float PI = 3.14;
	int radius = 21;
	float area = PI * radius * radius;

	printf("The area of the circle is %.2lf sq units", area);

	return 0;
}
