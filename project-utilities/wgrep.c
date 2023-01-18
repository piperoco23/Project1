#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a;
    FILE *f;
    //char c;
    //string we want to search the file for
    char *search = argv[1];

    //size of the buffer for the input line
    size_t buffer = 120;
    //location the string will be stored in 
    char * line = (char *) malloc(buffer);

    printf("%d", argc);
    //if there are no arguments
    if(argc == 0){
        return 1;
    }

    for(a = 2; a<argc; a=a+1){
        f = fopen(argv[a], "r");
        if( f == NULL){
            printf("wgrep: cannot open file\n");
            return 1;
        }
        else{

            while(1){
                getline(&line, &buffer, f);
                if(feof(f)){
                    break;
                }
                if(strstr(line, search) != NULL){
                    printf("%s", line);
                }
                free(line);
            }

        }
    }
    return 0;
}
