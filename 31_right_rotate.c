//�迭�� ���������� ��ĭ��
#include <stdio.h>
void right_rotate(int *  ary, int start, int end);
void left_rotate(int * ary, int start, int end);
int main(void) {
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;

	//right_rotate(ary, 2, 6);
	left_rotate(ary, 2, 6);

	for(i = 0; i < 10; i++) 
		printf("%d ", ary[i]);
}
// ���������� �� ĭ�� �̵�
void right_rotate(int *  ary, int start, int end) {
	int i;
	int temp = ary[end];
	for(i = end; i > start; i--)
		ary[i] = ary[i - 1];

	ary[start] = temp;
}
//�������� �� ĭ�� �̵�
void left_rotate(int * ary, int start, int end) {
	int i;

	int temp = ary[start];

	for(i = start; i < end; i++)
		ary[i] = ary[i + 1];

	ary[end] = temp;
}