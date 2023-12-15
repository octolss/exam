#include <stdio.h>

void main()
{
    char user_input[1000];
    scanf("%[^\n]%*c", user_input);
    FILE *fp;
    fp = fopen("user_input.txt", "wr+");
    fprintf(fp, "%s", user_input);
    fclose(fp);
}