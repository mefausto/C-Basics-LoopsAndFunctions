#include <stdio.h>
#include <stdlib.h>
float thegame_recursive(int);
//upper_bound degiskenini önce float tanimladim ama 40000 civari rakamlardan sonra hata verdi diye inte cevirdim//
int main()
{
    float upper_bound=1; /*Hocam tek scanf fonksiyonuyla yapabilmek icin böyle aldım sadece 0 degerini hesaplayamıyorum boyle olunca */

    printf("Enter a upper bound\n");
    while(upper_bound!=0){
        scanf(" %f", &upper_bound);
        if(upper_bound==0) {return 0;}

        thegame_recursive(upper_bound);
        printf("-----------------------------------------------\n");
        printf("PRESS 0 TO EXIT\n");
    }
    return 0;
}
float thegame_recursive(int upper_bound)
{
    float total_1, total_2;
    int j;
    for(j=2;j<=upper_bound;j++){
        total_1=0;
        total_2=0;
        total_1  = (upper_bound*(upper_bound+1)/2)-(j*(j+1))/2;
        total_2  = j*(j-1)/2;
            if(total_1==total_2){
                printf("Found! -- # of participant: %d, # of my desk %d\n", upper_bound,j);
            }
    }
    if(upper_bound==1){
         printf("Search is complete\n");
         return 0;
    }
    else{
       return thegame_recursive(upper_bound-1);
    }
}
