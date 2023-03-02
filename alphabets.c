// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE





#include<stdio.h>
int main(){
    int x;
    printf("enter the row: ");
    scanf("%d",&x);
    int y;
    printf("enter the row: ");
    scanf("%d",&y);
    // int ch=65;
    for (int i = 1; i <= x; i++)//no. of lines
    {
        int ch=65;
        for (int j = 1; j <=y; j++)//no.of star
        {
            printf("%c",ch);
            ch=ch+1;
            /* code */
        }
        printf("\n");
        
        /* code */
    }
    
    return 0;
}