//another file in the project to test static class modifiers

extern int mainPrivateData;		//variable is declared in an other file main.c
void changeSystemClock (unsigned int systemClock);

void myFun2(){
//	static int counter = 0;
//	counter = counter++;
	mainPrivateData = 900;
	//changeSystemClock(0);
}

int math_add(int a, int b){
	return a+b;
}

int math_sub(int a, int b){
	return a-b;
}

long long int math_mul(int a, int b){
	return (long long int)a*(long long int)b;
}

float math_div(int a, int b){
	return (float) (a/b);
}


