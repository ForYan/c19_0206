#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��һ���һ�ֽⷨ����ӡ10-20֮�������
//int main(){
//	printf("������");
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
//��һ��ڶ��ֺ����ⷨ
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

//�ڶ����һ�ֽⷨ������˷��ھ���
//9��9�У�ÿ�е�����Ϊ��ǰ��������������������
//int main(){
//	for (int hang = 1; hang <= 9; hang++){
//		for (int lie = 1; lie<=hang; lie++)
//			printf("%d*%d=%d  ", lie,hang,lie*hang);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//�ڶ���ڶ��ֽⷨ
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

//�������һ�ֽⷨ:��ӡ1000��--2000��֮�������
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
//������ڶ��ֽⷨ
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
