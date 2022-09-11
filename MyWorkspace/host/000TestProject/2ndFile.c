//another file in the project to test static class modifiers

extern int mainPrivateData;		//variable is declared in an other file main.c

void myFun2(){
	static int counter = 0;
	counter = counter++;
	mainPrivateData = 900;
}
