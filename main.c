 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*double PHYsiCS_AVE(){
        int asS, CW, midT, EOT;
        printf("======PHYSICS=======\n");
        printf("ENter the scores for assignments\n");
        scanf("%d",&asS);
        printf("ENter the scores for course work\n");
        scanf("%d",&CW);
        printf("ENter the scores for mid term\n");
        scanf("%d",&midT);
        printf("ENter the scores for end of term\n");
        scanf("%d",&EOT);
        int SUm = asS+CW+midT+EOT;
    double avERage= (double)SUm/4;

return avERage;
}
double maTH_AVE(){
     int ass, cW, MidT, EoT;
      printf("\n======MATHEMATICS=======\n");
    printf("ENter the scores for assignments\n");
    scanf("%d",&ass);
    printf("ENter the scores for course work\n");
    scanf("%d",&cW);
    printf("ENter the scores for mid term\n");
    scanf("%d",&MidT);
    printf("ENter the scores for end of term\n");
    scanf("%d",&EoT);
    int SUM = ass+cW+MidT+EoT;
    double avERage= (double)SUM/4;

return avERage;
}
double CHem_AVE(){
    int AsS, Cw, miDT, EOt;
    printf("\n======CHEMISTRY=======\n ");
    printf("ENter the scores for assignments\n");
    scanf("%d",&AsS);
    printf("ENter the scores for course work\n");
    scanf("%d",&Cw);
    printf("ENter the scores for mid term\n");
    scanf("%d",&miDT);
    printf("ENter the scores for end of term\n");
    scanf("%d",&EOt);
    int sUm = AsS+Cw+miDT+EOt;
    double avERage= (double)sUm/4;

return avERage;
}



int main(){
    double PHY = PHYsiCS_AVE();
    printf("Average for Physics is = %.2lf\n", PHY);
    double CHEM= CHem_AVE();
    printf("Average for chemistry is = %.2lf\n", CHEM);
    double MATH= maTH_AVE();
    printf("Average for mathematics is = %.2lf\n", MATH);
    return 0;
}*/

/*int main(){
    char*arr[3]={"Aijuka","Derrick","Richard"};
    for(int i=0;i<3;i++)
    {
        printf("%s\t", arr[i]);
    }
return 0;
}*/

//MERGING AN ARRAY
/*int main(){
    printf("Enter three domestic animals\n");
    char domestic_animals[3][20];
    for(int i=0;i<3;i++){
        scanf("%s", &domestic_animals[i]);
    }
    printf("Enter three wild animals\n");
    char wild_animals[3][20];
    for(int i=0;i<3;i++){
        scanf("%s", &wild_animals[i]);
    }
    int size = 6;
    char mergedArray[6][20];
    for(int i = 0;i<3;i++){
        strcpy(mergedArray[i],domestic_animals[i]);
    }
    for(int i=0;i<3;i++){
        strcpy(mergedArray[i+3],wild_animals[i]);
    }
    for(int i=0; i<6;i++){
        printf("%s  ",mergedArray[i]);
    }


return 0;
}*/

//SEARCHING AN ARRRAY
/*void main(){
    char animals[3][20],searchItem[20];
    int i;
    printf("Enter animals\n");
    for(i=0;i<3;i++){
    gets(animals[i]);
    }
    printf("Enter search item\n");
    gets(searchItem);
    for(i=0; i<3; i++){
        if(strcmpi(searchItem,animals[i])==0)
        {
            printf("item is %s\n", animals[i]);
            break;
        }
    }
    if(i==3){
        printf("Not found\n");
    }
}*/

//DELETION OPERATION IN AN ARRAY

int main(){
    char num[3][100];
    printf("Enter the list of friends\n");
    for(int i=0;i<3;i++){
        gets(num[i]);
    }
    int _size=sizeof(num)/sizeof(num[0][100]);
    char element[100];
    printf("Enter delete element\n");
    gets(element);
    for(int i=0;i<_size;i++){
        if(stricmp(num[i],element)!=0){
        _size=_size-1;
            for(int j=i;j<_size;j++){
            num[j][100]=num[j+1][100];
            }
        }else{
            printf("Item not found\n");
            break;
        }
    }
    for(int k=0;k<_size;k++){
        printf("The list is: %s ",num[k][100]);
    }

    return 0;
}

