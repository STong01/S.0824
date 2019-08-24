#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void){
//	int a = 2, *p1, **p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d,%d,%d\n", a, *p1, **p2);
//	system("pause");
//	return 0;
//}

//int main(){
//	/*int k, j, s;
//	for (k = 2; k < 6; k++){
//		s = 1;
//		for (j = k; j < 6; j++){
//			s += j;
//		}
//	}*/
//
//	//int arr[] = { 6, 7, 8, 9, 10 };
//	//int *ptr = arr;
//	//*(ptr++) += 123;
//	//printf("%d,%d", *ptr,*(++ptr)); 
//
//	/*char a[] = "123456789", *p = a;
//	int i = 0;
//	while (*p){
//		if (i % 2 == 0)
//			*p = 'i';
//		i++;
//		p++;
//	}
//	puts(a);*/
//
//	//char str[] = "ABCDEFG";
//	//char *p1, *p2;
//	//p1 = "abcd";
//	//p2 = "efgh";
//	//strcpy(str + 1, p2 + 1);
//	//strcpy(str + 3, p1 + 3);
//	//printf("%s\n", str); 
//
//	/*unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char *b = (char*)&a;
//	printf("%08x,%08x", i, *b);*/
//
//	//int j = 4;
//	//int i = j;
//	//for (; i <= 2 * j; i++){
//	//	switch (i / j){
//	//	case 0:
//	//	case 1:
//	//		printf("*");
//	//		break;
//	//	case 2:
//	//		printf("#");
//	//	}
//	//}
//
//	/*int x = 1, y = 012;
//	printf("%d\n", y*x++);*/
//
//	//int arr[] = { 1, 2, 3, 4, 5 };
//	//int *ptr = (int *)(&arr + 1);
//	//printf("%d,%d\n", *(arr + 1), *(ptr - 1));
//
//	//unsigned short sht = 0;
//	//sht--;
//	//printf("%d", sht);
//
//	/*int ch;
//	ch = 'B' + '8' - '3';
//	printf("%c\n", &ch);*/
//
//	/*unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 2) += 2;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 2));*/
//
//	int i;
//	char acNew[20]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//	for (i = 0; i < 10; i++){
//		acNew[i] = '0';
//	}
//	printf("%d\n", strlen(acNew));
//	system("pause");
//	return 0;
//}

//void main(){
//	char *szStr = "abcde";
//	szStr += 2;
//	printf("%lu\n", szStr);
//	system("pause");
//	return;
//}

//void foo(int b[][3]){
//	++b;
//	b[1][1] = 9;
//}
//int main(){
//	/*int a[3][3] = { {1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }};
//	foo(a);
//	printf("%d\n", a[2][1]);*/
//
//	/*int x = 0, y = 0, z = 0;
//	z = (x == 1) && (y = 2);
//	printf("%d ", y);*/ 
//
//	/*int i = 10;
//	long long t = sizeof(i++);
//	printf("%d", i);*/
//
//	/*int i = 6;
//	if (i <= 6)
//		printf("hello\n");
//	else
//		printf("bye-bye\n");*/
//
//	/*char ch = -1;
//	printf("%d\n", ch);*/
//
//	/*int i, x, y;
//	i = x = y = 0;
//	do{
//		++i;
//		if (i % 2)
//			x += i;
//		i++;
//		y += i++;
//	} while (i <= 7);
//	printf("%d %d %d", i, x, y);*/
//
//	int x = 4;
//	x += x *= x + x;
//	printf("%d\n", x);
//	system("pause");
//	return 0;
//}

//int fun(int x){
//	int  count = 0;
//	while (x){
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//
//int main(){
//	printf("%d\n", fun(2019));
//	system("pause");
//	return 0;
//}

//int Func(int a){
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main(){
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++){
//		k = Func(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}

int main(){
	int s = 0, n;
	for (n = 0; n < 4; n++){
		switch (n){
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}