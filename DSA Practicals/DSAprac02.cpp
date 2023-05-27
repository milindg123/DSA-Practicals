#include <iostream>
using namespace std;

int HT1[10];
int HT2[10]; 
int size = 10; 

void init ()
{
    for (int i = 0; i < size; i++)
    {
        HT1[i] = 0;
        HT2[i] = 0;
    }
}

void display ()
{
    int i;
    cout << "\nHash Table - 01";

    cout << "\n Index: ";
    for (int i = 0; i < size; i++)
    {
        cout<<i<<" ";
    }
    cout << "\n Key: ";
    for (int i = 0; i < size; i++)
    {
        cout<<HT1[i]<<" ";
    }

    cout << "\nHash Table - 02";

    cout << "\n Index: ";
    for (int i = 0; i < size; i++)
    {
        cout<<i<<" ";
    }
    cout << "\n Key: ";
    for (int i = 0; i < size; i++)
    {
        cout<<HT2[i]<<" ";
    }

}

void insert_SetA (int key)
{
    int index;

    index = key % size; 

    HT1[index] = key;
    cout<<"\n\t Key "<<key<<" Inserted in Set-A";
}

void insert_SetB(int key)
{
    int index;
    index = key % size; 
    HT2[index] = key;
    cout<<"\n\t Key "<<key<<" Inserted in Set-B";
}

void search_SetA(int key)
{
    int index;
    cout<<"\n Searching "<<key<<" in Set A";
    index = key % size; 
    if(HT1[index] == key)
        cout<<"\n\t Key "<<key<<" Found in Bucket-"<<index;
    else
        cout<<"\n\t Key "<<key<<" Not Found....!!!";
}

void search_SetB(int key)
{
    int index;
    cout<<"\n Searching "<<key<<" in Set B";

    index = key % size;
    if(HT2[index] == key)
        cout<<"\n\t Key "<<key<<" Found in Bucket-"<<index;
    else
        cout<<"\n\t Key "<<key<<" Not Found....!!!";
}

void delete_SetA(int key)
{
    int index;
    cout<<"\n Deleting "<<key<<" from Set A";

    index = key % size; 
    if(HT1[index] == key)
    {
        HT1[index] = 0;
        cout<<"\n\t Key "<<key<<" Found in Bucket-"<<index<<" and Deleted.";
    }
    else
        cout<<"\n\t Key "<<key<<" Not Found....!!!";
}

void delete_SetB(int key)
{
    int index;
    cout<<"\n Deleting "<<key<<" from Set B";

    index = key % size;
    if(HT2[index] == key)
    {
        HT2[index] = 0;
        cout<<"\n\t Key "<<key<<" Found in Bucket-"<<index<<" and Deleted.";
    }
    else
    cout<<"\n\t Key "<<key<<" Not Found....!!!";
}

int dup(int val)
{
    int i, dupl = 0;
    for(i = 0; i < size; i++)
    {
        if(val == HT1[i]) 
        dupl = 1;
    }
    return dupl;
}

void unionAB()
{
    int i, j;

    int C[10]; 
    j = 0;
    for(i = 0; i < size; i++)
    {
        if(HT1[i] != 0)
        {
            C[j] = HT1[i];
            j++;
        }
    }
    for(i = 0; i < size; i++)
    {
        if(HT2[i] != 0)
        {
            if(dup(HT2[i]) == 0)
            {
                C[j] = HT2[i];
                j++;
            }
        }
    }
    cout<<"\n\n\t Union of SET-A,B = { ";
    for(i = 0; i < j; i++)
    cout<<C[i]<<" , ";
    cout<<"}";
}

void intersection_AB()
{
    int i,j;

    int C[5]; //.....Resultant Set-C

    j = 0;
    for(i=0; i<size; i++)
    {
        if(HT2[i] != 0)
        {
            if(dup(HT2[i]) == 1)
            {
                C[j] = HT2[i];
                j++;
            }
        }
    }

    cout<<"\n\n\t Intersection of SET-A,B = { ";
    for(i = 0; i < j; i++)
    cout<<C[i]<<" , ";
    cout<<"}";
}
 
void diff_AB() //...Set A - B ..???
{
    int i, j, k, flag;

    int C[5]; //.....Resultant Set-C

    k = 0;
    for(i=0; i<size; i++) //.....for Set-A
    {
        flag = 0;
        for(j=0; j<size; j++) //.....for Set-B
        {
            if(HT1[i] == HT2[j])
            flag = 1;
        }
        if(flag == 0)
        {
            C[k] = HT1[i];
            k++;
        }
    }

    cout<<"\n\n\t Difference SET A-B = { ";
    for(i = 0; i < k; i++)
    cout<<C[i]<<" , ";
    cout<<"}";
}
 
void diff_BA() //...Set B - A ..???
{
    int i, j, k, flag;

    int C[5]; //.....Resultant Set-C

    k = 0;
    for(i=0; i<size; i++) //.....for Set-B
    {
        flag = 0;
        for(j=0; j<size; j++) //.....for Set-A
        {
            if(HT2[i] == HT1[j])
            flag = 1;
        }
        if(flag == 0)
        {
            C[k] = HT2[i];
            k++;
        }
    }

    cout<<"\n\n\t Difference SET B-A = { ";
    for(i = 0; i < k; i++)
    cout<<C[i]<<" , ";
    cout<<"}";
}
 //....Main Function.
int main ()
{
    cout << "--- A C++ Program to implement Set an ADT using Hash Table --- ";
    cout<<"\n\n ......1. Initializing Hash Tables \n";
    init ();
    display ();
    cout<<"\n\n ......2. Insert Keys in Hash Tables \n";
    insert_SetA(1);
    insert_SetA(3);
    insert_SetA(5);
    insert_SetA(7);
    insert_SetA(9);
    insert_SetB(2);
    insert_SetB(4);
    insert_SetB(6);
    insert_SetB(8);
    insert_SetB(10);

    display ();
    cout<<"\n\n ......3. Searching Key in Hash Tables \n";
    search_SetA(1);
    search_SetA(2);
    search_SetB(4);
    search_SetB(7);
    cout<<"\n\n ......4. Delete Keys from Hash Tables \n";
    delete_SetA(1);
    delete_SetA(2);
    delete_SetB(4);
    delete_SetB(9);
    display ();
    cout<<"\n\n ......Insert in Sets/Hash Tables \n";
    insert_SetA(2);
    insert_SetA(4);
    insert_SetB(4);
    insert_SetB(9);
    display ();

    cout<<"\n\n ......5. Union of Sets/Hash Tables \n";
    unionAB();
    cout<<"\n\n ......6. Intersection of Sets/Hash Tables \n";
    intersection_AB();
    cout<<"\n\n ......7. Difference of Sets A-B \n";
    diff_AB();

    cout<<"\n\n ......8. Difference of Sets B-A \n";
    diff_BA();
    return 0;
}
