#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int row, L, R;
	cin >> row;
	cin >> L;
	cin >> R;

	// ���� �迭 ����
	int** valArr = new int*[row];
	for (int i = 0; i < row; i++) { valArr[i] = new int[row]; }

	int** visited = new int* [row];
	for (int i = 0; i < row; i++) { valArr[i] = new int[row]; }

	// ���� Ž�� : �� > �� > �� > ��
	int dx[4] = { -1,1,0,0 };
	int dy[4] = { 0,0,1,-1 };

	// �� �Է�
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++)
		{
			cin >> valArr[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++)
		{
			// �����¿� Ž��
			for (int k = 0; k < 4; k++) {
				if (visited[i][j] == NULL) {
						visited[i][j] = valArr[i][j];

					}
				}
			}

		}
	}
	


}

void (int valArr[][]) {

}