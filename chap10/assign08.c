/*
 ���ϸ�: Assignment8-c
 ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
�� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.
 �ۼ���: ������
 ��¥: 2025.06.04
 ���� : v0.1
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct PRODUCT {
	char name[20];
	int price;
	int stock;
};

void manage() {
	struct PRODUCT product;

	printf("��ǰ��? ");
	scanf("%s", product.name);
	printf("����? ");
	scanf("%d", &product.price);
	printf("���? ");
	scanf("%d", &product.stock);

	printf("[%s %d�� ���:%d]", product.name, product.price, product.stock);
}

int main() {
	manage();  
	return 0;
}
