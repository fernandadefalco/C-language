#include<stdio.h>


void change(int vet[],int n,int i,int j){
    int aux;
    aux=vet[j];
    vet[j]=vet[i];
    vet[i]=aux;

}
int main(){
    int vet[10];
    int i,a,b,*v,n;

    printf("Insert the dimension of your vector:\n");
    scanf("%d",&n);

    printf("Insert the numbers (one by one) of your vector (integers only):\n");
    v=calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&vet[i]);

    printf("Which positions do you want to switch inside your vector?\n");
    scanf("%d %d",&a,&b);
    change(vet,n,a,b);

    printf("Your new vector is:\n");
    for(i=0;i<n;i++)
    printf("%d\n",vet[i]);
return 0;
}
