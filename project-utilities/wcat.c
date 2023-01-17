#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    FILE *f;
    char c;
    for(a = 1; a < argc; a=a+1){
        f = fopen(argv[a], "r");
        //this if checks if f was able to be retrieved
        if(f != NULL){
                //iterates through each character and pprints each out individually
                while(1) {
                    c = fgetc(f);
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