#include <stdio.h>
#include <stdlib.h>

int main(){

FILE * fpointer = fopen("text.txt"r/w);  //Opens the file and then either r = reads or w = writes   OR a = add
fprintf(fpointer, "xyz \n abc");         // Works just like the printf command except, its for files

fclose(fpointer);                         //closes the file

}
//is you have an already created file, and then to add something 