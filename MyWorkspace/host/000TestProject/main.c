/*
 * main.c
 *
 *  Created on: 25.08.2022
 *      Author: TUF G
 */

#include<stdio.h>

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
	//test
	printf("Press 'Enter' to exit this application\n");
	getchar();

	return 0;
}
