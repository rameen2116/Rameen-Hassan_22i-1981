#include <iostream>

using namespace std;

const int MAX_SIZE = 10; 

void inputMatrix(int A[][MAX_SIZE], int m, int n);
void displayMatrix(int A[][MAX_SIZE], int m, int n);
int sumOfElements(int A[][MAX_SIZE], int m, int n);
void displayRowSum(int A[][MAX_SIZE], int m, int n);
void displayColumnSum(int A[][MAX_SIZE], int m, int n);
void createTranspose(int A[][MAX_SIZE], int m, int n);

int main() {
    int m, n;
    int matrix[MAX_SIZE][MAX_SIZE];

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix of size m x n\n";
        cout << "2. Display elements of matrix of size m x n\n";
        cout << "3. Sum of all elements of matrix of size m x n\n";
        cout << "4. Display row-wise sum of matrix of size m x n\n";
        cout << "5. Display column-wise sum of matrix of size m x n\n";
        cout << "6. Create transpose of matrix of size n x m\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the number of rows (m): ";
            cin >> m;
            cout << "Enter the number of columns (n): ";
            cin >> n;
            inputMatrix(matrix, m, n);
            break;
        case 2:
            displayMatrix(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumOfElements(matrix, m, n) << endl;
            break;
        case 4:
            displayRowSum(matrix, m, n);
            break;
        case 5:
            displayColumnSum(matrix, m, n);
            break;
        case 6:
            createTranspose(matrix, m, n);
            break;
        case 7:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 7);

    return 0;
}

// Function to input elements into matrix
void inputMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

// Function to display elements of matrix
void displayMatrix(int A[][MAX_SIZE], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate sum of all elements of matrix
int sumOfElements(int A[][MAX_SIZE], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

// Function to display row-wise sum of matrix
void displayRowSum(int A[][MAX_SIZE], int m, int n) {
    cout << "Row-wise sums:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += A[i][j];
        }
        cout << "Sum of row " << i << ": " << rowSum << endl;
    }
}

// Function to display column-wise sum of matrix
void displayColumnSum(int A[][MAX_SIZE], int m, int n) {
    cout << "Column-wise sums:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += A[i][j];
        }
        cout << "Sum of column " << j << ": " << colSum << endl;
    }
}

// Function to create transpose of matrix
void createTranspose(int A[][MAX_SIZE], int m, int n) {
    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
