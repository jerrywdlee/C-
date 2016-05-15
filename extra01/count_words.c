#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void my_pause();/* # self made console pauser */

int main(int argc, char *argv[]) {
	FILE *fp;
    int char_number, words_number, lines_number;
    int total_words_num, total_no_blank_chars_num, total_balnk_chars_num;
    int last_char_not_blank; /* # if last char is blank: 0; not: 1 */
    char temp_char;
    char file_path[20];
    if(argc!=2){
      //printf("Usage: %s filename\n", argv[0]);
      printf("Please Enter Your File Path...\n");
      scanf("%s",&file_path); /* # Enter File path&name if no arguments */
      //exit(0);
    }else{
      strcpy(file_path, argv[1]); /* # Or use argument */
    }
    if((fp=fopen(file_path,"r"))==NULL){
        perror("Whoops!"); /* # If file reader error */
        exit(0);
    }
    char_number = words_number = lines_number = last_char_not_blank = 0;
    total_words_num = total_no_blank_chars_num = total_balnk_chars_num = 0;
    while(1){
      temp_char = getc(fp);/* # get characters one by one */
      char_number ++;
      if (temp_char=='\n'||temp_char==EOF||temp_char==' '||temp_char=='\t') {
        /* # all newlines, EOFs, spaces and tabs are blank characters */
        total_balnk_chars_num ++;
      }else{
        total_no_blank_chars_num ++;
      }

      if (temp_char=='\n'||temp_char==EOF){ /* # if change line or end of file */
        lines_number ++;
        if (last_char_not_blank){
          words_number ++;
          total_words_num ++;
        }
        printf("Line:%d, words=%d, characters=%d\n", lines_number, words_number, char_number);
        char_number = words_number = last_char_not_blank = 0;
      }else{
        if (((temp_char==' ')||(temp_char=='\t'))&&(last_char_not_blank)){
          /* # if get a space or tab and before this char, no blank chars exist */
          words_number ++;
          total_words_num++;
        }
        last_char_not_blank=((temp_char!=' ')&&(temp_char!='\t'));
        /* # true && true = 1(true); else 0(false)*/
      }
      if (temp_char == EOF) { /* # when get an EOF end loop */
        break;
      }
    }
    printf("Total: Lines=%d, Words=%d, No Blank Chars=%d, Blanks=%d\n",
          lines_number, total_words_num, total_no_blank_chars_num, total_balnk_chars_num);
    fclose(fp);
  //system("pause"); /* # only windows have this one*/

  my_pause();
  return 0;
}

void my_pause() {
  getchar();
  printf("\nPress any key to continue...\n" );
  getchar();
}
