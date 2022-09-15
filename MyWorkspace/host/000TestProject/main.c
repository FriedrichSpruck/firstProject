/*
 * main.c
 *
 *  Created on: 25.08.2022
 *      Author: TUF G
 */

#include <stdio.h>
#include "math.h"
//Variable Definition
int definition;				//storage is allocated for the variable

//Variable Declaration
extern int declaration;		//no storage is allocated because of "extern" keyword, which tells the compiler that the varibale is defined extern

//Prototyp
void myFun2();

//Definition
int mainPrivateData = 0;
char a1 = 'A';

int main(void){
	/*
	 * Solution for first exercise
	 * */
	//printf("David says , \"Programming is fun!\" \n**Conditions apply , \"Offers valid until tomorrow\" \nC:\\My computer\My folder\nD:/My documents/My file \n\ \\ \\ \\ Today is holiday \\ \\ \\ \ \nThis is a triple quoted string \"\"\" This month has 30 days \"\"\" \n");

	//Exercise datatypes
	unsigned int sA2B = 1;
	unsigned int sB2C = 2;
	unsigned int A2C = sA2B + sB2C;

	printf("Total distance from A to C is %ukm\n", A2C);

	//Sizeof Operator
	printf("Size of char data type = %lldBytes\n", sizeof(char));	//datatype name or varibale as argument for sizeof
	printf("Size of short data type = %lldBytes\n", sizeof(short));
	printf("Size of int data type = %lldBytes\n", sizeof(int));
	printf("Size of long data type = %lldBytes\n", sizeof(long));
	printf("Size of long long data type = %lldBytes\n", sizeof(long long));
	printf("Size of pointer data type = %lldBytes\n", sizeof(&sA2B));

	//Addresses
	unsigned long long int longVar1 = (unsigned long long int) &sA2B; 	//address of a pointer is 8 bytes not 4 bytes!
	printf("Address of variable sA2B = %p\n", &sA2B);
	printf("Address of variable longVar1 = %llx\n", longVar1);

	//Storage classes
	myFun2();
	printf("mainPrivateData value = %d\n", mainPrivateData);

	//ASCII
	printf("The character is: 0d%d\n", a1);
	printf("The character is: 0c%c\n", a1);
	printf("The character is: 0x%x\n", a1);

	//Functions
	printf("Math add: %I64X\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Math mul: %llx\n", math_mul(0x0FFF1111, 0x0FFF1111));
	printf("Math div: %f\n", math_div(100, 8));

	//End of program
	printf("Press 'Enter' to exit this application\n");
	getchar();

	return 0;
}

static void changeSystemClock (unsigned int systemClock){
	printf("system clock changed to %d\n", systemClock);
}
