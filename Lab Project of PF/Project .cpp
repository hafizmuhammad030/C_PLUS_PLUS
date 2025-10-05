#include<iostream>
using namespace std;

// Function to Blur image
void BlurImage(int** image, int numberRows, int numberColumns) {

    // Temp image with extended borders
    int** tempImage = new int* [numberRows + 2];
    for (int i = 0; i < numberRows + 2; i++) {
        tempImage[i] = new int[numberColumns + 2]();
    }

    // Copy original image to center of temp image
    for (int i = 0; i < numberRows; i++) {
        for (int j = 0; j < numberColumns; j++) {
            tempImage[i + 1][j + 1] = image[i][j];
        }
    }
    // Blur the image
    for (int i = 0; i < numberRows; i++) {
        for (int j = 0; j < numberColumns; j++) {
            int sum = 0;
            for (int k = i; k <= i + 2; ++k) {
                for (int l = j; l <= j + 2; ++l) {
                    sum += tempImage[k][l];
                }
            }
            image[i][j] = sum / 9;
        }
    }

    // Free memory
    for (int i = 0; i < numberRows + 2; i++) {
        delete[]tempImage[i];
    }
    delete[]tempImage;
    tempImage = nullptr;
}
// Function to crop image
void CropImage(int**& image, int& numberRows, int& numberColumns, int startRow, int endRow, int startColumn, int endColumn) {
    if (startRow < 0 || endRow >= numberRows || startColumn < 0 || endColumn >= numberColumns || startRow > endRow || startColumn > endColumn) {
        cout << "Invalid crop dimensions!" << endl;
        return;
    }

    int newRows = endRow - startRow + 1;
    int newColumns = endColumn - startColumn + 1;
    int** croppedImage = new int* [newRows];

    for (int i = 0; i < newRows; i++) {
        croppedImage[i] = new int[newColumns];
    }

    // Crop the portion of the image
    for (int i = startRow; i <= endRow; i++) {
        for (int j = startColumn; j <= endColumn; j++) {
            croppedImage[i - startRow][j - startColumn] = image[i][j];
        }
    }
    // Free original image space
    for (int i = 0; i < numberRows; i++) {
        delete[] image[i];
    }
    delete[] image;

    // Update image & dimensions
    image = croppedImage;
    numberRows = newRows;
    numberColumns = newColumns;
}
// Function to Add Border to a image
void AddBorder(int**& image, int& numberRows, int& numberColumns, int borderWidth) {

    // Temp image with extended border
    int newRows = numberRows + 2 * borderWidth;
    int newColumns = numberColumns + 2 * borderWidth;
    int** tempImage = new int* [newRows]();

    for (int i = 0; i < newRows; i++) {
        tempImage[i] = new int[newColumns]();
    }

    // Copy original image to center of temp image
    for (int i = 0; i < numberRows; i++) {
        for (int j = 0; j < numberColumns; j++) {
            tempImage[i + borderWidth][j + borderWidth] = image[i][j];
        }
    }
    // Free original image space
    for (int i = 0; i < numberRows; i++) {
        delete[]image[i];
    }
    delete[]image;

    // Update image & dimension
    image = tempImage;
    numberRows = newRows;
    numberColumns = newColumns;
}
// Function to zoom in & zoom out image
void ZoomInOut(int**& image, int& numberRows, int& numberColumns, bool zoomIn) {
    int newRows, newColumns;
    if (zoomIn) {
        newRows = numberRows * 2;
        newColumns = numberColumns * 2;
    }
    else {
        newRows = numberRows / 2;
        newColumns = numberColumns / 2;
    }

    int** tempImage = new int* [newRows]();
    for (int i = 0; i < newRows; ++i) {
        tempImage[i] = new int[newColumns]();
    }
    if (zoomIn) {
        for (int i = 0; i < numberRows; ++i) {
            for (int j = 0; j < numberColumns; ++j) {
                tempImage[2 * i][2 * j] = image[i][j];
                tempImage[2 * i][2 * j + 1] = image[i][j];
                tempImage[2 * i + 1][2 * j] = image[i][j];
                tempImage[2 * i + 1][2 * j + 1] = image[i][j];
            }
        }
    }
    else {
        for (int i = 0; i < newRows; ++i) {
            for (int j = 0; j < newColumns; ++j) {
                tempImage[i][j] = image[i * 2][j * 2];
            }
        }
    }
    // Free original image space
    for (int i = 0; i < numberRows; ++i) {
        delete[] image[i];
    }
    delete[] image;

    // Update image & dimensions
    image = tempImage;
    numberRows = newRows;
    numberColumns = newColumns;
}

// Function to display the image
void DisplayImage(int** image, int numberRows, int numberColumns) {
    for (int i = 0; i < numberRows; i++) {
        for (int j = 0; j < numberColumns; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    cout << " \t\t\t\t******************** IMAGE EDITOR ******************** " << endl;
    int numberRows, numberColumns;
    cout << "Enter the number of rows: ";
    cin >> numberRows;
    cout << "Enter the number of columns: ";
    cin >> numberColumns;

    // Dynamically allocate memory to image
    int** image = new int* [numberRows];
    for (int i = 0; i < numberRows; ++i) {
        image[i] = new int[numberColumns];
    }
    // Entering Pixel row by row
    cout << "Enter the image pixels row by row: " << endl;
    for (int i = 0; i < numberRows; ++i) {
        for (int j = 0; j < numberColumns; ++j) {
            cin >> image[i][j];
        }
    }
    char choice;
    do {
        int option;
        cout << "\nChoose an option: " << endl;
        cout << "1.Blur Image. " << endl;
        cout << "2.Crop Image. " << endl;
        cout << "3.Add Border. " << endl;
        cout << "4.Zoom In. " << endl;
        cout << "5.Exit. " << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
        case 1:

            // Function called to display the blur image
            BlurImage(image, numberRows, numberColumns);
            cout << "\nBlurred Image:" << endl;
            DisplayImage(image, numberRows, numberColumns);
            break;
        case 2:
            int startRow, endRow, startColumn, endColumn;
            cout << "Enter the start row to crop: ";
            cin >> startRow;
            cout << "Enter the end row to crop: ";
            cin >> endRow;
            cout << "Enter the start column to crop: ";
            cin >> startColumn;
            cout << "Enter the end column to crop: ";
            cin >> endColumn;

            // Function called to display the cropped image
            CropImage(image, numberRows, numberColumns, startRow, endRow, startColumn, endColumn);
            cout << "\nCropped Image: " << endl;
            DisplayImage(image, numberRows, numberColumns);
            break;

        case 3:
            int borderWidth;
            cout << "Enter the width of border: ";
            cin >> borderWidth;

            // Function called to Add & display border
            AddBorder(image, numberRows, numberColumns, borderWidth);
            cout << "The image with the border is: " << endl;
            DisplayImage(image, numberRows, numberColumns);
            break;

        case 4:
            // Fuction called to zoom in & out the image
            ZoomInOut(image, numberRows, numberColumns, true);
            cout << "\nThe zoomed image is: " << endl;
            DisplayImage(image, numberRows, numberColumns);
            break;

        case 5:
            cout << "Exiting..." << endl;
            cout << "THANK YOU FOR USING OR IMAGE EDITOR. I HOPE YOU ENJOYED IT (^ _ ^). " << endl;
            break;
        default:
            cout << "Invalid option! Please try again." << endl;
        }
        if (option == 5)
            break;
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Free memory
    for (int i = 0; i < numberRows; i++) {
        delete[]image[i];
    }
    delete[]image;
    image = nullptr;

    system("pause");
    return 0;
}
