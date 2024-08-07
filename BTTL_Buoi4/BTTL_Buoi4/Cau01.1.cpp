#include <stdio.h>

// Hàm đệ quy tính tổng của các số từ 1 đến n
int tong(int n) {
	if (n <= 0) {
		return 0;  // Cơ sở của đệ quy
	}
	else {
		return n + tong(n - 1);  // Đệ quy
	}
}

int main() {
	int n;
	printf("Nhap mot so nguyen duong: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("Khong tinh tong cho so am.\n");
	}
	else {
		printf("Tong S(%d) = %d\n", n, tong(n));
	}

	return 0;
}