#include <stdio.h>
int main(){
int i,j,k;
for (i=1;i<=10;i++){
    for(k=10;k>=i;k--){
        printf(" ");
    }
    for(j=1;j<=i*2;j++){
        printf("*");
    }
    printf("\n");
}
getch();
}
