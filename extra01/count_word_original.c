#include <stdio.h>
int main (int argc, char *argv[]){
    FILE *fp;
    int nchars, nwords, nlines;
    int lastnblank; // 如果上一个字符为空格，那么该变量的值为 0
    char c;
    if(argc!=2){
        printf("Usage: %s filename\n", argv[0]);
        exit(0);
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        perror("fopen");
        exit(0);
    }
    nchars=nwords=nlines=lastnblank=0;
    while((c=getc(fp))!=EOF){
        nchars++;
        if (c=='\n'){
            if (lastnblank)
                nwords++;
            printf("words=%d, characters=%d\n", nwords, nchars);
            nchars=nwords=lastnblank=0;
            nlines++;
        }else{
            if (((c==' ')||(c=='\t'))&(lastnblank))
                nwords++;
            lastnblank=((c!=' ')&&(c!='\t'));
        }
    }
    printf("lines=%d\n", nlines);
    fclose(fp);
}
