#include <wiringPi.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc,char *argv[]){
	if(argc<2){
		puts ("fun on;fun off");
		exit(1);
	}
	
	if(wiringPiSetup()==-1)exit(1);
	pinMode(7,1);
	if(strcmp(argv[1],"on")==0){
		digitalWrite(7,1);
		puts ("fun on");
	}
		
	if(strcmp(argv[1],"off")==0){
		digitalWrite(7,0);
		puts ("fun off");
	}
		
	exits:
	return 0;
}
