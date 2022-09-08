#include <stdio.h>
#include <math.h>
main()
{
    //comment for test
     //comment for test 2
    int ligne;
    int colone;

    printf("saisir le nombre de ligne : ");
    scanf("%d",&ligne);

    printf("saisir le nombre de colone : ");
    scanf("%d",&colone);

    for(int i=1;i<=ligne;i++){
        printf("\n");
        for(int j=1;j<=colone;j++){
            if(j==1 || j==colone || i==1 || i==ligne ){
                printf("* \t");
            }
            else{
                printf(" \t");
            }
        }
    }
    return 0;



    }

