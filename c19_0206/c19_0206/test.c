#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//第一题第一种解法：打印10-20之间的素数
//int main(){
//	printf("素数：");
//	for (int num = 10; num <= 20; num++){
//		int i = 0;
//		for (int n = 2; n < num; n++){
//			if (num%n == 0){
//				i++;
//			}
//		}
//		if (i <= 0){
//			printf("%d ", num);
//		}
//	}
//	system("pause");
//	return 0;
//}
//第一题第二种函数解法
//int IsPrint(int x){
//	int i = 0;
//	for (int n = 2; n < x; n++){
//		if (x%n == 0)
//			i++;
//	}
//	if (i>0)
//		return 0;
//	else
//		return 1;
//}
//int main(){
//	for (int num = 100; num <= 200; num++){
//		if (IsPrint(num) == 1)
//			printf("%d  ", num);
//	}
//	system("pause");
//	return 0;
//}

//第二题第一种解法：输出乘法口诀表
//9行9列，每行的列数为当前的行数，列数乘以行数
//int main(){
//	for (int hang = 1; hang <= 9; hang++){
//		for (int lie = 1; lie<=hang; lie++)
//			printf("%d*%d=%d  ", lie,hang,lie*hang);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//第二题第二种解法
//void HangPrint(int hang){
//	for (int lie = 1; lie <= hang; lie++)
//		printf("%d*%d=%d  ", lie, hang, lie*hang);
//	printf("\n");
//}
//int main(){
//	for (int hang = 1; hang <= 9; hang++){
//		HangPrint(hang);
//	}
//	system("pause");
//	return 0;
//}

//第三题第一种解法:打印1000年--2000年之间的闰年
//int main(){
//	int year = 1000;
//	while (year <= 2000){
//		if ((year % 4 == 0) && (year % 100 != 0)){
//			printf("%d ", year);
//		}
//		year++;
//	}
//	system("pause");
//	return 0;
//}
//第三题第二种解法
void IsLeapYear(int year){
	if ((year % 4 == 0) && (year % 100 != 0))
		printf("%d ", year);
}
int main(){
	int year = 1000;
	while (year <= 2000){
		IsLeapYear(year);
		year++;
	}
	system("pause");
	return 0;
}
