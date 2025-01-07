// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int mat1[10][10],mat2[10][10],mats[10][10];
    
    int i,j,row,col;
    printf("enter the size of matrix\n");
    scanf("%d %d",&row,&col);
    printf("Enter the first matrix element\n");
   
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++){
            scanf("%d",&mat1[i][j]);
            
        }
    }
    printf("Enter the second matrix of element\n");
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    // printf("sum of matrix is,....\n");
    for(i = 0;i<row;i++){
        for(j = 0;j<col;j++){
            
            mats[i][j] = mat1[i][j] + mat2[i][j];
        }
       
    }
    

    
  
printf("matrix is....\n");
for(i = 0;i<row;i++){
    for(j = 0;j<col;j++){
        printf("%3d",mats[i][j]);
    }
    printf("\n");
}
    return 0;
}