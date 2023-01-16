#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    char *str[60];
    FILE *f;
    for(a = 1; a < argc; a=a+1){
        f = fopen(argv[a], "r");
        if(f != NULL){
            if(fgets(str, 60, f) != NULL){
                puts(fgets(str, 60, f));
            }
        }
    }
}