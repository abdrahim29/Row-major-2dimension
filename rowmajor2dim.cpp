#include<iostream>
using namespace std;

int main()
{
    int *array;
    int **twodarray;
    int base_address=5000;

    int row;
    int column;

    const int sizevalue=4;

    cout<<"enter row size : ";
    cin>>row;
    cout<<"enter column size : ";
    cin>>column;

    
    twodarray=new int*[row];

    for (int i=0;i<row;i++){

        twodarray[i]=new int(column);

    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){

    cout<<"enter elements"<<endl;
    cin>>twodarray[i][j];
}
    }
    int indrow;
    int indcol;

    cout<<"Enter row index";
    cin>>indrow;
    cout<<"Enter col index";
    cin>>indcol;

    int newadress=base_address+(indrow*column+indcol)*sizevalue;

    cout<<newadress<<endl;


    for(int i=0;i<row;i++){
        for (int j = 0; j < column; j++)
        {
            cout<<twodarray[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    


    

    return 0;
}
