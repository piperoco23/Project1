#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a; //for loop variable
    FILE *f; //file we will search in
    char *search = argv[1]; //string we want to search the file for

    //size of the buffer for the input line
    size_t buffer = 500;
    //location the string will be stored in 
    char * line = (char *) malloc(buffer);

    //if there are no arguments
    if(argc <= 1){
        puts("wgrep: searchterm [file ...]");
        return 1;
    }
    //case where no file argument is given for stdin
    else if(argc == 2){
        while(1){
            getline(&line, &buffer, stdin);
            //stops reading file when end-of-file is reached
            if(feof(stdin)){
                    break;
                }
            //prints out the current line if search term is contained within the line
            if(strstr(line, search) != NULL){
                printf("%s", line);
            }
        }
        return 0;
    }
    //cases where 1 or more files are given
    //for loop iterates through each argument starting at the second (When the first file path should be given)
    for(a = 2; a<argc; a=a+1){
        f = fopen(argv[a], "r");
        //error case where file cannot be opened (the file path given wasnt valid)
        if( f == NULL){
            puts("wgrep: cannot open file");
            return 1;
        }
        else{
            //iterates through each line
            while(1){
                getline(&line, &buffer, f);
                //stops reading file when end-of-file is reached
                if(feof(f)){
                    break;
                }
                //prints out the current line if search term is contained within the line
                if(strstr(line, search) != NULL){
                    printf("%s", line);
                }
            }

        }
    }
    return 0;
}
