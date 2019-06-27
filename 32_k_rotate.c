#include <stdio.h>
void k_rotate (int * ary, int k, int size);
int main (void) {
	int ary[10] = {0, 1, 2, 3, 4, 5 ,6, 7, 8, 9};
	int i;

	k_rotate(ary, 4, 10);

	for(i = 0; i < 10; i++)
		printf("%d ", ary[i]);

}
/**
ary : �迭
k : ������ ĭ ��
size : �迭 ũ��
*/
void k_rotate (int * ary, int k, int size)  {
	int i;
	int ary2[10];

	//�迭 ����
	for(i = 0; i < size; i++)
		ary2[i] = ary[i];

	//k��ŭ �����ΰ��� �� ����
	for( i = 0; i < size; i++)
		ary[(i + k) % size] = ary2[i];
}

