#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int n,i,l,m,u,*ar,s;
	printf("Enter the length");
	scanf("%d",&n);
	ar=(int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter a no to search");
	scanf("%d",&s);
	
	l=0;
	u=n-1;
	if(l<u){if((l+u)%2!=0){
		m=(l+u+1)/2;
	}else{
		m=(l+u)/2;}
		if(ar[m]==s){
			printf("%d is present at %d position",s,m);
			
		}else if(ar[m]>s){
			u=m-1;
		}else if(ar[m]<s){
			l=m+1;
		}
		else if(l>=u){
			printf("%d is not found",s);
			
			
		}else{
			printf("%d is not found",s);
		}
	}
	
	
	getch();
}
