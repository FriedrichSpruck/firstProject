/*
 * main.c
 *
 *  Created on: 25.08.2022
 *      Author: TUF G
 */

#include<stdio.h>

//Varibale Definition
int definition;				//storage is allocated for the variable

//Variable Declaration
extern int declaration;		//no storage is allocated because of "extern" keyword, which tells the compiler that the varibale is defined extern

int main(void){
	/*
	 * Solution for first exercise
	 * */
	printf("David says , \"Programming is fun!\" \n**Conditions apply , \"Offers valid until tomorrow\" \nC:\\My computer\My folder\nD:/My documents/My file \n\ \\ \\ \\ Today is holiday \\ \\ \\ \ \nThis is a triple quoted string \"\"\" This month has 30 days \"\"\" \n");

	//Exercise datatypes
	unsigned int sA2B = 1;
	unsigned int sB2C = 2;
	unsigned int A2C = sA2B + sB2C;

	printf("Total distance from A to C is %ukm\n", A2C);

	//Sizeof Operator
	printf("Size of char data type = %dBytes\n", sizeof(char));	//datatype name or varibale as argument for sizeof
	printf("Size of short data type = %dBytes\n", sizeof(short));
	printf("Size of int data type = %dBytes\n", sizeof(int));
	printf("Size of long data type = %dBytes\n", sizeof(long));
	printf("Size of long long data type = %dBytes\n", sizeof(long long));



	printf("Press 'Enter' to exit this application\n");
	getchar();

	return 0;
}
