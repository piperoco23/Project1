int main(int argc, char *argv[]){
    int a;
    char *str[60]
    for(a = 1; a < argc; a++){
        int f = open(argv[a]);
        assert(f>-1);
        printf("%s", fgets());
    }
}