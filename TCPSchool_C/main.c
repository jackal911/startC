#include <stdio.h>

int main(void) {
/*

// 1~6) printf()와 scanf() :
	int num01, num02;
	
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num01, &num02);
	
	printf("입력하신 두 정수를 8진수로 나타내면 %o와 %o가 되고,\n", num01, num02);
	printf("입력하신 두 정수를 16진수로 나타내면 %x와 %x가 되고,\n", num01, num02);


	float num01;
	double num02;
	
	printf("두 실수를 입력하세요 : ");
	scanf("%f %f", &num01, &num02);
	printf("입력받은 두 실수는 %f, %f입니다.\n", num01, num02);
	printf("두 실수 꼬라지가 이상하죠?\n\n");
	
	printf("한번더 입력해봅시다 : ");
	scanf("%f %lf", &num01, &num02);
	printf("입력받은 두 실수는 %f, %f입니다.\n", num01, num02);
	printf("이번에는 두 실수를 제대로 저장했네요.\n");

// 7) variable :
	int ss;
	printf("%d", ss); // 0 출력 
	
	int num01, num02;
	double num03 = 1.23, num04 = 4.56;


// 8) constant :
	// 리터럴 상수(literal constant) :  
	123;
	3.14;
	'a';
	
	// 심볼릭 상수(symbolic constant) :
	const int MAX = 10; // const 키워드를 이용한 심볼릭 상수 
	#define MAX 10; // #define 선행처리 지시자를 이용한 매크로 심볼릭 상수
	 
*/

// 9) Primitive Type :
	 int num = 2147483647;
	 printf("변수 num에 저장된 값은 %d입니다.\n",num); // int의 최댓값
	 num = 2147483648;
	 printf("변수 num에 저장된 값은 %d입니다.\n", num); // 오버플로우 
}
