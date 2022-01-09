#include <stdio.h>

void movetower (int n, char orig, char dest, char aux){
   if (n==1) {
        printf("\nMove disk 1 from tower %c to tower %c", orig, dest);
   return;
   }
   else{
	  movetower(n-1,orig,aux,dest);
	  printf("\nMove disk %d from tower %c to tower %c", n, orig, dest);
	  movetower(n-1,aux,dest,orig);

  }
};

int main(){
   int discos;
   printf("\t\t\t\tTower of Hanoi\n\n");
   printf("Insert how many disks do you want: ");
   scanf("%d",&discos);
   movetower(discos,'A','C','B');
   return 0;
}
