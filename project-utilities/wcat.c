#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    FILE *f;
    char c;
    for(a = 1; a < argc; a=a+1){
        f = fopen(argv[a], "r");
        if(f != NULL){
                while(1) {
                    c = fgetc(f);
                    if( feof(f) ) { 
                        break ;
                    }
                    printf("%c", c);
                }
            }
        else{
            printf("wcat: cannot open file\n");
            return 1;
        }
    }
    return 0;
}