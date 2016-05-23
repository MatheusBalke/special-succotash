#include <stdio.h>


int main(int argc, char* argv[]) {

    FILE *arquivo;
    int c;
	int cont = 0;
    int cl = 0;
    int cb = 0;
    int cp = 0;
	int flag = 0;

    arquivo = fopen(argv[1] , "r");

    c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl = cl + 1;
        if ((c == ' ') || (c=='\n') || (c == '\t'))
            cp = cp + 1;

      
        c = getc(arquivo);
    }

    printf("L=%i P=%i B=%i\n", cl, cp, cb);


    fclose(arquivo);


    return 0;
}
