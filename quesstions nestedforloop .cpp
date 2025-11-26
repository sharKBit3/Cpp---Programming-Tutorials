void Question1()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << endl;
        }

        cout << "--" << endl;
    }

    /*
    aa ---> zz;;;    
    */
}

void Question2()
{
    for (int i = 10; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }

        cout << "\n";
    }

/*

 *  *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *    
    */


}




void Question3()
{
    for (int i = 10; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }

        cout << "\n";
    }

/*1 2 3 4 5 6 7 8 9 10
 1 2 3 4 5 6 7 8 9
 1 2 3 4 5 6 7 8
 1 2 3 4 5 6 7
 1 2 3 4 5 6
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1 
 */
}

void Question4()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }

        cout << "\n";
    }

    /*
    
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 1 2 3 4 5 6
 1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8
 1 2 3 4 5 6 7 8 9
 1 2 3 4 5 6 7 8 9 10
    
    */
 

}

void Question5()
{
    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << " " << char(j);
        }

        cout << "\n";
    }

/*   A
 A B
 A B C
 A B C D
 A B C D E
 A B C D E F

*/
}


void Question6()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            cout << j << " ";
        }

        cout << "\n";
    }

1 2 3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10
3 4 5 6 7 8 9 10
4 5 6 7 8 9 10
5 6 7 8 9 10
6 7 8 9 10
7 8 9 10
8 9 10
9 10
10


}

int main()
{
    Question6();
    return 0;
}