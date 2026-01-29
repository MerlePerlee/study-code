#include <stdio.h>

int main(){

    int row[10] = {8,7,6,5,4,3,2,1};
    char column[10]= {"ABCDEFGH"};
    int il=0;


    for (int i=0; i<11; i ++){
       if(i%2==0){
        for(int k=0; k<8; k++){
        printf("+---");
        }
        printf("+");
       }else {
        
        for (int j=0; j<8; j++){
           if(i==1 && 0<j<9){
                printf(" %c ", column[(j-1)]);
            } else{
            printf("|");
        
                    
                if ((il+j)%2==0){
                    printf("###");
                } 
                else {
                    printf("   ");
                }
                
            }
            //printf("%c",column[j]);
            //printf("%d ",row[i]);*/
            
        }
            il++;
            printf("|");

        }
        
            printf("\n");
    }



    return 0;
}