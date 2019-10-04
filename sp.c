#include<stdio.h>
#include<stdlib.h>
int backtosparse(int r[100],int h[100],int v[100],int n,int x,int z){
int i,j,k,c[100][100],a,b;
for(i=0;i<x;i++){
	for(j=0;j<z;j++)
	c[i][j]=0;
}
for(i=0;i<n;i++){
a=r[i];
b=h[i];
c[a-1][b-1]=v[i];
}
for(j=0;j<x;j++){
for(k=0;k<z;k++){
printf("%d ",c[j][k]);}
printf("\n");
}
return 0;
}

int main(){
int a[100][100],row[100],column[100],value[100],i,j,k=0,r,c,p=0,q,l;
printf("enter the no of rows and columns: ");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++){
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
while(p<r){
for(q=0;q<c;q++){
if(a[p][q]!=0){
row[k]=p+1;
column[k]=q+1;
value[k]=a[p][q];
k++;

}
}
p++;}
for(l=0;l<k;l++){
printf("%d",row[l]);
} printf("\n");
for(l=0;l<k;l++){
printf("%d",column[l]);
}printf("\n");
for(l=0;l<k;l++){
printf("%d",value[l]);
}
printf("\nback to sparse\n");
backtosparse(row,column,value,k,r,c);

return 0;
}
