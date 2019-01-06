#include<stdio.h>

void line_walk(int a[100][100], int row, int col, int max_rows, int max_cols, int op[100], int index)  
{
    int i = row, j = col, ans = 1;

    while(a[i][j] != 0)
    {
        a[i][j] = 0;
        if(((j+1) < max_cols) && (a[i][j+1] == 1)) {            
            j++;
            ans++;
            continue;            
        }
        if(((i+1) < max_rows) && (a[i+1][j] == 1)) {
            i++;
            ans++;
            continue;            
        }
        if(((j-1) >= 0) && (a[i][j-1] == 1)) {
            j--;
            ans++;
            continue;            
        }
        if(((i-1) >= 0) && (a[i-1][j] == 1)) {
            i--;
            ans++;
            continue;            
        }
    }
    op[index] = ans;
}


int lines_calc(int a[100][100], int rows, int cols, int op[100])
{
    int i = 0, j = 0, index = 0;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if (0 == a[i][j])
                continue;
            line_walk(a, i, j, rows, cols, op, index);   
            index++;
        }
    }
    return index-1;
}



int main()
{
    int op[100] = {0}, rows=0, cols=0;
    int a[100][100], i =0, j = 0, index = 0;
    printf("\n\rEnter the rows and cols\n\r");
    scanf("%d %d", &rows, &cols);
    printf("\n\rEnter the values\n\r");
    for (i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d", &a[i][j]);
    
    printf("\n\rMatrix provided is \n\r");
    for (i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            printf("%d ", a[i][j]);
        }    
        printf("\n\r");
    }
    index = lines_calc(a, rows, cols, op);
    printf("\n\rList contents are\n\r");
    for(i=0; i<=index; i++)
        printf("%d ", op[i]);
    printf("\n\r");
    return 0;
}

