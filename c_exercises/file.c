#include <stdio.h>

int main(){
    FILE *cfPtr;

    if((cfPtr = fopen("client.txt","a")) == NULL){
        puts("File bla bla");
    }else{
        puts("enter accoount kjerodsffosf");
        puts("ojdsjfoajdf");
        printf("%s","? ");

        unsigned int accoount;
        char name[30];
        double ballance;
        scanf("%d%29s%lf",&accoount, name,&ballance);

        while (!feof(stdin))
        {
            fprintf(cfPtr,"%d %s %.2f \n",accoount,name,ballance);
            printf("%s","? ");
            scanf("%d%29s%lf",&accoount,name,&ballance);
        }
        
        fclose(cfPtr);

    }
}
