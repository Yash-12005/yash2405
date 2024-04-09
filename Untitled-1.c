#include<stdio.h>
int xstrlen(char*);
void main(){
	char arr[] ="Bamboozled";
	int len1, len2;
	len1=xstrlen(arr);
	len2=xstrlen("humpty Dumpty");
	printf("\n String = %s length=%d",arr, len1);
	printf("\n String =%s length =%d", " Humpty Dumpty", len2);
}