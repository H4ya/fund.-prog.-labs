#include <iostream>
#include <string>
using namespace std;

int main() {
    const int rows = 4, cols = 7;
    string Classification;
    int matrix[rows][cols] = { { 6, 8, 8, 7, 5, 6, 7},
                               { 2, 1, 2, 3, 2, 3, 5},
                               { 3, 5, 5, 7, 3, 2, 6},
                               { 4, 3, 5, 6, 7, 3, 2} };


    // Display the matrix
    for (int row = 0; row < rows; row++) {
        cout<<"Week#"<<row+1<<"\t";
        for (int col = 0; col < cols; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl << endl;
    }   
    for (int row = 0; row < rows; row++){
        
        double sum=0;       
        
        for (int col = 0; col < cols; col++) {
            sum+=matrix[row][col];
        }
        double avg=sum/cols; 
        if (avg>=6){
            Classification = "High";
        }
        else if (avg<6 && avg>3){
            Classification = "Medium";
        }
        else{
            Classification = "Low";
        }
        cout<<"week #"<<row+1<<": "<<Classification<<" ("<< avg <<")"<<endl;

    }
    return 0;

    }

