#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_sell = 0;
    Y:
    printf("Welcome to store!!\n");
    printf("medicine we have:\n");
    // storage
    // put information of every medicine u have
    static int storage[100][2];
    storage[1][0] = 15; // 15 pack napa is available;
    storage[1][1] = 10; // 10 taka per pack
    storage[2][0] = 11; // 11 pack entacid
    storage[2][1] = 20; // 20 taka per pack
    storage[3][0] = 1 ; // 1pack
    storage[3][1] = 5 ; // per pack 5taka
    storage[4][0] = 0 ; //
    storage[4][1] = 15;
    // and so on
    int total_price = 0;
    Z:
    //write as much medicine name
        printf("1. Napa\n");
        printf("2. Entacid\n");
        printf("3. Histacin\n");
        printf("4. Napa extra\n");
        printf("5. . .. . .\n");

    //let customer chose how many medicine he want and the index of the medicine;

        int n;
        printf("Chose your medicine from above index number: \n");
        while(1){
            scanf("%d",&n);
            int price,pack,m;
            pack = storage[n][0];
            price = storage[n][1];
            if(pack <=0){
                printf("Sorry We haven't this product anymore!\n");
            }
            else{
                printf("How many pack you want? we have %d pack with %d per pack price.\n",pack,price);
                scanf("%d",&m);
                if(m>pack || m<0){
                    printf("Sorry!! We don't have that much pack.\n");
                    printf("Feel free to chose other.\n");
                }
                else{
                    total_price += price*m;
                    storage[n][0]-=m;
                    printf("Item added to cart!!\n");
                }
            }
            printf("Total price: %d\n",total_price);
            printf("If u want to buy more Press Y\n");
            char x;
            x = getch();
            if(x=='Y' || x== 'y'){
                system("cls");
                goto Z;
            }
            else break;
        }
    system("cls");
    total_sell+= total_price;
    printf("Thanks for Shopping!!\n");
    goto Y;

}
