## **M?NG**
1. Kh�i ni?n
	
    * L� m?t t?p h?p nhi?u bi?n c� c�ng ki?u d? li?u v� c�ng t�n, khi d� m?i ph?n t? c?a m?ng du?c
truy xu?t th�ng qua ch? s?.

2. C� ph�p

```
<ki?u d? li?u> <t�n m?ng> <Danh s�ch c�c chi?u c?a m?ng>;
```
>V� d?: 
>- int array1d[10], array2d[2][6]; <M?ng array1d c� 10 ph?n t?, m?ng array2d l� m?ng 2 chi?u c� 12 ph?n t? d?u thu?c ki?u int>

* Ch? s? c?a m?ng ph?i l� m?t gi� tr? ki?u int kh�ng vu?t qua k�ch thu?c c?a m?ng, ch? s?
c?a m?ng b?t d?u t? 0.
* Ch? l?y du?c d?a ch? c?a c�c ph?n t? thu?c m?ng m?t chi?u th�ng qua to�n t? & theo c�
ph�p: &t�n_bi?n[i] (i l� ch? s? c?a m?ng). 
* `Ch� �:` T�n c?a m?ng s? ch?a d?a ch? d?u c?a m?ng,v� d?: c� int a[10] th� a=&a[0]

3. Nh?p xu?t
```
#include <stdio.h>
void main(){
int a[5] = {1, 2, 3, 4, 5};
int i =0;
printf("D�y c�: \n")
for(i ; i<5; i++){
printf("a[%d] = %3d\t", i, a[i]);
}
}
```
> K?t qu?:
>
> D�y c�:
> a[1] = 1	a[2] = 2	a[3] = 3	a[4] = 4	a[5] = 5



* �a chi?u
```
# include <stdio.h>
void main (){
int temp,a[3][3];
int i,j;
/*Nh?p d? li?u */
for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
printf("\na[%d][%d]",i,j);
scanf("%f",&temp); /*Nh?p gi�n ti?p
th�ng qua bi?n temp*/
a[i][j]=temp; /*G�n gi� tr? c?a temp
cho ph?n t? m?ng*/
}
/*�ua gi� tr? c�c ph?n t? ra m�n h�nh*/
for (i=0;i<3;i++)
{
printf("\n");
for (j=0;j<3;j++)
printf("%.2f ",a[i][j]);
}
}
```
* Bi?n d?i m?ng 2 chi?u th�nh m?t chi?u
```
void chuyen21(a[m][n], b[], ){
	int i = 0; j =0;
    for(i; i < m; i++){
    	for(j; j < n; j++){
    	b[i*n + j] = a[i][j];
    	}
    }
}