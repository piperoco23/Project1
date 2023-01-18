#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    FILE *f;
    char c;
    char *search = argv[1];
    for(a = 2; a<argc; a=a+1){
        f = fopen(argv[a], "r");
        if( f == NULL){
            printf("wgrep: cannot open file\n");
            return 1;
        }
    }
}