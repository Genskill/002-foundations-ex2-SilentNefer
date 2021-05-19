#include <stdio.h>

int main()
{
    
    int i, type, j, k, m=1, rows;
   
    printf("Enter type of pattern (1 or 2) ");
    scanf("%d", &type);
    printf("Number of rows ");
    scanf("%d", &rows);
    
    if (type ==1)
    {
        for (i = rows; i >= 1; --i)
        {
            for (j = 1; j <= i; ++j)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    
    else if (type ==2)
    {
        for(i=rows;i>=1;i--)  
        {  
            for(j=1; j<=i-1; j++)
            {
                printf(" ");  
            }
            for(k=1;k<=m;k++)  
            {  
                printf("#");  
            }  
            printf("\n");  
            m++;  
        }    
    }
    else
    {
        printf("Invalid Option...!");
    }
   return 0;
}
