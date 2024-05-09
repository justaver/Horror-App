# include <stdio.h>
# include <math.h>


void chill(int something){

    if(something >= 2){
    switch (something){
        case 50:
        printf("welp");
        break;

        case 15:
        printf("How");
        break;

        case 100:
        printf("no Way");
        break;

        default:
        printf("what could it be?");
        break;
}
}
    }

int main(){

int something1 = 0;

printf("Please scan something\n");
scanf("%d", &something1);

chill(something1);


}