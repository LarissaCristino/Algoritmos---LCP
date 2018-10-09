#include <iostream>

using namespace std;

class matriz
{
public:
    matriz(int lin, int col)
    {
        mat= new int*[lin];
        for (i=0; i<lin; i++)
        {
            mat[i]=new int[col];
        }
        m=lin;
        n=col;
    }


void valormatrix()
{
    for(i=0; i<m; i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=i+j;
        }
    }
};

void imprimematriz()
{
    for (i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<mat[i][j]<< "";
        }
        cout<<endl;
    }
};

int *operator[](int valor)
{
    return mat[valor];
};

~matriz()
{
    for(i=0;i<n;i++)
    {
        delete mat[i];
    }
    delete[]mat;
};

private:
    int **mat;
    int i,j;
    int n,m;

};

int main()
{
    int lin, col;

    cout << "Digite o numero de linhas:" << endl;
    cin>>lin;

    cout << "Digite o numero de colunas:" << endl;
    cin>>col;

    matriz matrix(lin, col);

    matrix.valormatrix();

    matrix.imprimematriz();

    return 0;
}
