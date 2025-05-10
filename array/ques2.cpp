//WAVE PRINT A MATRIX

//Colum wise tha 
// #include<iostream>
// #include<vector>
// using namespace std;

// void wavePrintMatrix(vector<vector<int>>v){
//     int m =v.size();
//     int n=v[0].size();
//     for (int startCol = 0; startCol < n; startCol++)
//     {
//         // even no of col->Top to Bottom
//         if((startCol & 1)==0){
//             for(int i=0;i<m;i++){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//         else{
//             //odd no of col->Bottom to top
//             for(int i=m-1;i>=0;i--){
//                 cout<<v[i][startCol]<<" ";
//             }
//         }
//     }
    
// }

// int main(){
//     vector<vector<int>>v{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     wavePrintMatrix(v);
//     return 0;
// }


//ROW wise

#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int m =v.size();
    int n=v[0].size();
    for (int startrow = 0; startrow < m; startrow++)
    {
        // even no of row->Top to Bottom
        if((startrow & 1)==0){
            for(int i=0;i<n;i++){
                cout<<v[startrow][i]<<" ";
            }
        }
        else{
            //odd no of row->Bottom to top
            for(int i=n-1;i>=0;i--){
                cout<<v[startrow][i]<<" ";
            }
        }
    }
    
}

int main(){
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrintMatrix(v);
    return 0;
}