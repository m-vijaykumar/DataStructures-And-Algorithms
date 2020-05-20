#include<iostream >

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    int startRow= 0 ,endRow = n-1, startCol = 0 ,endCol = n-1;

    while (startRow <= endRow && startCol <= endCol)
    {
      
        for (int i = startCol ; i <=endCol ; i++)
        {
            /* code */cout<<arr[startRow][i]<<"   ";
        }startRow++;
        for (int i = startRow ; i <=endRow ; i++)
        {
            /* code */cout<<arr[i][endCol]<<"   ";
        }endCol--;

        if(endRow > startRow)
        for (int i = endCol ; i >=startCol ; i--)
        {
            /* code */cout<<arr[endRow][i]<<"   ";
        }endRow--;
        if(endCol >startCol)
        for (int i = endRow ; i >= startRow ; i--)
        {
            /* co==de */cout<<arr[i][startCol]<<"   ";
        }startCol++;
        
    }

    
    return 0;
}