#include <stdio.h>

int data[20];

void quicksort(int left,int right){
   if(left >= right)
	   return;
   int i,j, tmp,base,tmp2;
   i=left;
   j=right;
   base=i;
   while(i!=j){
   	while(data[j]>data[base] && i<j)
		j--;
	while(data[i]<data[base] && i<j)
		i++;
	if(i<j){
           tmp=data[i];
	   data[i]=data[j];
	   data[j]=tmp;
	}
   }
   if(i!=base){
     tmp2=data[base];
     data[base]=data[i];
     data[i]=tmp2;
   }
   quicksort(left,i-1);
   quicksort(i+1,right);

}

int main(){
   int num;
   printf("Pls input data num:\n");
   scanf("%d",&num);
   printf("Pls input data one by one:\n");
   int i;
   for(i=0;i<num;i++){
      printf("Input data[%d]:\n",i);
      scanf("%d",&data[i]);
   }
   quicksort(0,num-1);
   for(i=0;i<num;i++){
     printf("data[%d]:%d\n",i,data[i]);
   }
   return 0;

}
