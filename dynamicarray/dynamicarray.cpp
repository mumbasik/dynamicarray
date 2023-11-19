// dynamicarray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//N1

void Add(int** ar, int rows, int cols, int addint) {
    int j = cols - 1;
    for (int i = 0; i < rows; i++) {
        
        while (j > addint) {
            ar[i][j] = ar[i][j - 1];
            j--;
        }
    }
}

//N2
void del(int** ar, int rows, int cols, int deletint) {
    int i = 0;
    int j;
    
    while (i < rows) {
        for (j = deletint; j < cols - 1; j++) {
            ar[i][j] = ar[i][j + 1];
      }
            i++;
    }

}

int main()
{
    
    int rows = 3;
    int cols = 4;
    int** ar = new int* [rows];
    for (int i = 0; i < rows; i++) {
        ar[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            ar[i][j] = 1 + rand() % 10;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << ar[i][j] << " ";
        }
    } cout << "\n";
    int addint = 1;
    int deleteint = 2;
    Add(ar, rows, cols, addint);
    cout << "Updated Array: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << ar[i][j] << " ";
        }
    } cout << "\n";
    del(ar, rows, cols, deleteint);
    cout << "Updated Array: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << ar[i][j] << " ";
        }
    }cout << "\n";
    for (int i = 0; i < rows; i++) {
        delete ar[i];
 }
    delete[] ar;
}


