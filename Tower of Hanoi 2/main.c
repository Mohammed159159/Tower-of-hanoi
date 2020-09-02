#include<stdio.h>

void hanoi(int n, int i, int f, int s);
void moves(int i, int f);
int power(int n, int n2);


int main() {

    int numOfColumns, posi, posf, posS;
    printf(" Enter the Number Of Columns: ");
    scanf(" %d", &numOfColumns);
    printf(" Enter the Initial Position: ");
    scanf("%d", &posi);
    printf(" Enter the Final Position: ");
    scanf("%d", &posf);

    int arr[] = { 1,2,3 };

    for (int i = 0; i < 3; i++)
    {
        if (posi == arr[i])
            arr[i] = posi;
        else if (posf == arr[i])
            arr[i] = posf;
        else if (posf == posi)
        {
            printf("\n You are there already!");
            break;
        }

        else if (posi > 3 || posf > 3)
        {
            printf("\n Unvalid value!");
            break;
        }
        else
        {
            posS = arr[i];
            hanoi(numOfColumns, posi, posf, posS);
            break;
        }
    }

}


void hanoi(int n, int i, int f, int s)
{
    if (n == 1)
    {
        moves(i, f);
    }
    else
    {
        hanoi(n - 1, i, s, f);
        hanoi(1, i, f, s);
        hanoi(n - 1, s, f, i);

    }

}
void moves(int i, int f) {
    printf("\n Move from Pos %d  | to |   Pos %d", i, f);
}
int power(int n, int n2)
{
    if (n == 0)
        return 0;

    else if (n == 1 || n2 == 0)
        return 1;

    else if (n2 == 1)
        return n;

    else
        return n * power(n, n2 - 1);
}









