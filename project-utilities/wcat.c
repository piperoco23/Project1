#include <stdio.h>

int main(int argc, char *argv[]){
    int a; //for loop variable
    FILE *f; //current file will be stored here
    char c; //current character will be stored here

    //for loop iterates through each argument, which should represent a file path
    for(a = 1; a < argc; a=a+1){
        f = fopen(argv[a], "r");
        //this if checks if f was able to be opened (a valid file path was give)
        if(f != NULL){
                //iterates through each character and prints each out individually
                while(1) {
                    c = fgetc(f);
                    //ends the loop when end-of-file is reached
                    if( feof(f) ) { 
                        break ;
                    }
                    printf("%c", c);
                }
            }
        else{
            //returns with error code 1 if file cannot be opened
            printf("wcat: cannot open file\n");
            return 1;
        }
    }
    return 0;
}