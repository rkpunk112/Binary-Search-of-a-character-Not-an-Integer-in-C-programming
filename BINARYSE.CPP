#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char arr[]={'a','b','c','d','e','f','g'};
int size=sizeof(arr)/sizeof(arr[0]);
int arr1[7],low=0,high=size-1;
char key;
printf("Enter The element you wanna search:");
scanf("%c",&key);
/*int num=("%d",key);
//copying the array
for(int i=0;i<size;i++){
arr1[i]=("%d",arr[i]);
}
*/
//searching begin here
for(int j=0;j<size;j++){
int mid=(low+high)/2;
if(arr[mid]==key){
printf("The element is found at %d location",mid+1);
break;
}
else if(arr[mid]>key){  //i think implicit conversion happen here
high=mid-1;
}
else if(arr[mid]<key){
low=mid+1;
}
}
getch();
}