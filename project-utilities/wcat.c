#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    char str[60];
    FILE *f;
    for(a = 1; a < argc; a=a+1){
        f = fopen(argv[a], "r");
        if(f != NULL){
            if(fgets(str, 60, f) != NULL){
                printf("%s", str);
            }
            else{
                if(feof(f)){
                return 0;
                }
                return 1;
            }
        }
        else{
            printf("wcat: cannot open file\n");
            return 1;
        }
    }
    return 0;
}