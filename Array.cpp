// 2D Array  
#include <iostream>
    using namespace std;

    int main() {
     /*// 2D Array in Stack
        int A[2][2] = { {1,2}, 
                        {3,4} };
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << A[i][j] << endl;
            }
        }
        cout << A[1][1];
        */
        
/*
        //2D Array in Stack and Heap
        int* A[3];
        A[0] = new int[4] {1, 1, 1, 1};
        A[1] = new int[4] {1, 1, 1, 1};
        A[2] = new int[4] {1, 1, 1, 1};

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                cout << A[i][j] << endl;
            }
        }
        delete[]A;
        */

        // 2D Array in Heap
        int** A;
        A = new int* [3];
        A[0] = new int[4] {1, 1, 1, 1};
        A[1] = new int[4] {1, 1, 1, 1};
        A[2] = new int[4] {1, 1, 1, 1};

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                cout << A[i][j] << endl;
            }
        }

        return 0;
    }
