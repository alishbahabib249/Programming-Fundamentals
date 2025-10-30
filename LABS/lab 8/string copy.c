#include <stdio.h>
int main (){

int r;
printf("Enter no of rows ");
scanf("%d", &r);
int c;
printf("Enter no of columns ");
scanf("%d", &c);
int arr[r][c];

int i,j;
for(i=0; i<r; i++){
	for (j=0; j<c; j++){
		printf("enter elements\n");
		scanf("%d", &arr[i][j]);
	}}
	

	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			printf("%d ", arr[i][j]);
			}
			printf("\n");
	}
	return 0;
}
	















