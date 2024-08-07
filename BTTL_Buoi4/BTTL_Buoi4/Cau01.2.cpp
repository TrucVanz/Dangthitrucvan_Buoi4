#include <stdio.h>

// Hàm đệ quy tính tổng phân số
double tongPhanSo(int n) {
	if (n == 1) {
		return 1.0 / 2;  // Cơ sở của đệ quy
	}
	else {
		return n / (double)(n + 1) + tongPhanSo(n - 1);  // Đệ quy
	}
}

int main() {
	int n;
	printf("Nhap mot so nguyen duong: ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("Nhap n >= 1.\n");
	}
	else {
		printf("Tong S(%d) = %.4f\n", n, tongPhanSo(n));
	}
	getchar();
	return 0;
}