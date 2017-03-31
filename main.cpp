#include <iostream>

void printandDecrementBit(int x, int arr[],int i)
{
    if(x>=0&&i!=8)
    {
        if(i%4==0)std::cout<<" ";
        if(x>=arr[i])
        {
            std::cout<<"1";
            printandDecrementBit(x-arr[i],arr,i+1);
        }

        else
        {
            std::cout<<"0";
            printandDecrementBit(x,arr,i+1);
        }
    }
}

int main()
{
    int x;
    std::cout<<"Enter a number between 0 and 255: ";
    std::cin>>x;
    int powerOf2[8]= {128,64,32,16,8,4,2,1};

    printandDecrementBit(x,powerOf2,0);

    return 0;
}
