#include<stdio.h>
void print_n(int n);
int main(){
    int n;
printf("Enter the number\n");
scanf("%d",&n);
print_n(n);
return 0;
}
void print_n(int n){
    if(n>0){
        print_n(n-1);
        printf("%d ",2*n-1);
    }
}