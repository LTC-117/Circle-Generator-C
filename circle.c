#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void circ(int r, char e);

int main(){
    int r;
    char e;
    printf("insert the radius of your circle: ");
    scanf("%d%*c", &r);//'%*c' descarta a entrada de '\n' (ENTER) no buffer.
    printf("now insert the element which your circle will be made of: ");
    scanf("%c", &e);

    printf("your circle:\n\n");
    circ(r, e);
    return 0;
}

void circ(int r, char e){
    int d = 2*r;
    for(int i=0; i<=d; i++){
        for(int j=0; j<=d; j++){
            if( sqrt(pow((j-r),2) + pow((i-r), 2)) < r ){ //Equação geral da circunferência de acordo com a geometria analítica.
                printf(" %c", e);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
