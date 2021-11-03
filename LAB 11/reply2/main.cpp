#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{


    printf("asaaasaasas");

    FILE *fp;
    char mat[1025][1025];
    fp=fopen("file.txt", "r");
    fpo=fopen("out.txt","w") ;
    int i, j;
    char c;

    if (fp==NULL){
        fprintf(stderr, "ERROR - couldn't open the file %s.\n", fp);
        exit(1);
    }

    for (i=0; i<1025; i++){
        for (j=0; j<1025; j++){

        c=fgetc(fp);
        mat[i][j]=c;
        fprint(fpo, "%c",c) ;
        fprint(fpo, "\n") ;
        }
        c=fgetc(fp) ;
    }



    fclose(fpo) ;







    fclose(fp);
    return 0;
}
