#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int times = 0;
	scanf("%d", &times);
	if (times >= 2 && times <= 1000) {
		int val = 0, looblike[10001] = {};
		//INPUT
		for (int i = 0; i < times; i++) {
			int inp = 0;
			scanf("%d", &inp);
			if (inp >= 1 && inp <= 10000) {
				looblike[inp]++;
			}
			else return 0;
		}
		//FIND THE MOST LOOBLIKE
		for (int k = 1; k < 10001; k++) {
			if (looblike[k] < 1) continue;
			else {
				if (val < looblike[k]) val = looblike[k];
			}
		}
		//OUTPUT
		for (int m = 1; m < 10001; m++) {
			if (looblike[m] == val && m != 10001) printf("%d ", m);
			else continue;
		}
	}
	return 0;
}