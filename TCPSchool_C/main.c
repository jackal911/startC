#include <stdio.h>

int main(void) {
/*

// 1~6) printf()�� scanf() :
	int num01, num02;
	
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num01, &num02);
	
	printf("�Է��Ͻ� �� ������ 8������ ��Ÿ���� %o�� %o�� �ǰ�,\n", num01, num02);
	printf("�Է��Ͻ� �� ������ 16������ ��Ÿ���� %x�� %x�� �ǰ�,\n", num01, num02);


	float num01;
	double num02;
	
	printf("�� �Ǽ��� �Է��ϼ��� : ");
	scanf("%f %f", &num01, &num02);
	printf("�Է¹��� �� �Ǽ��� %f, %f�Դϴ�.\n", num01, num02);
	printf("�� �Ǽ� �������� �̻�����?\n\n");
	
	printf("�ѹ��� �Է��غ��ô� : ");
	scanf("%f %lf", &num01, &num02);
	printf("�Է¹��� �� �Ǽ��� %f, %f�Դϴ�.\n", num01, num02);
	printf("�̹����� �� �Ǽ��� ����� �����߳׿�.\n");

// 7) variable :
	int ss;
	printf("%d", ss); // 0 ��� 
	
	int num01, num02;
	double num03 = 1.23, num04 = 4.56;


// 8) constant :
	// ���ͷ� ���(literal constant) :  
	123;
	3.14;
	'a';
	
	// �ɺ��� ���(symbolic constant) :
	const int MAX = 10; // const Ű���带 �̿��� �ɺ��� ��� 
	#define MAX 10; // #define ����ó�� �����ڸ� �̿��� ��ũ�� �ɺ��� ���


// 9) Primitive Type :
	int num = 2147483647;
	printf("���� num�� ����� ���� %d�Դϴ�.\n",num); // int�� �ִ�
	num = 2147483648;
	printf("���� num�� ����� ���� %d�Դϴ�.\n", num); // �����÷ο�
	
	// float�� �Ҽ� �κ� 6�ڸ����� �������� ǥ�� 
	float num01 = 3.1415926535897932;
	printf("���� pi�� ����� ���� %.20f�Դϴ�.\n", num01); // 3.14159274101257320000
	
	// double�� �Ҽ� �κ� 15�ڸ����� �������� ǥ�� 
	double num02 = 3.1415926535897932;
	printf("���� pi�� ����� ���� %.20f�Դϴ�.\n", num02); // 3.14159265358979310000
	
	char ch = 'a';
	printf("���� ch�� ����� ���� %c�Դϴ�.\n", ch); // a
	printf("���� ch�� ����� ���� %d�Դϴ�.\n", ch); // 97	 
*/
	
// 10) Type Conversion :
	char ch = 200;
	int num01 = 3.14;
	double num02 = 5;
	
	printf("	ch�� ����� ���� %d�Դϴ�.\n", ch); // -56
	printf("num01�� ����� ���� %d�Դϴ�.\n", num01); // 3
	printf("num02�� ����� ���� %f�Դϴ�.\n", num02); // 5.000000
	
	double result01 = 5 + 3.14;
	double result02 = 5.0f + 3.14;
	
	printf("result01�� ����� ���� %f�Դϴ�.\n", result01);
	printf("result02�� ����� ���� %f�Դϴ�.\n", result02);
}
