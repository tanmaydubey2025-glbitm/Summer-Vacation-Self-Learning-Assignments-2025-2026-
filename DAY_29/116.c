//Write a program to Create inventory management system.

#include <stdio.h>
#include <string.h>

struct product{

    int productID;
    char productName[100];
    float price;
    int quantity;

};

struct product inventory[100];

int productCount = 0;

void addProduct(){

    int i;

    printf("Enter Product ID: ");
    scanf("%d",&inventory[productCount].productID);

    // Checking duplicate Product ID
    for(i=0;i<productCount;i++){

        if(inventory[i].productID == inventory[productCount].productID){

            printf("Product ID already exists.\n");
            return;

        }

    }

    getchar();

    printf("Enter Product Name: ");
    fgets(inventory[productCount].productName,sizeof(inventory[productCount].productName),stdin);
    inventory[productCount].productName[strcspn(inventory[productCount].productName,"\n")] = '\0';

    printf("Enter Product Price: ");
    scanf("%f",&inventory[productCount].price);

    printf("Enter Product Quantity: ");
    scanf("%d",&inventory[productCount].quantity);

    productCount++;

    printf("Product Added Successfully.\n");

}

void displayProducts(){

    int i;

    if(productCount == 0){

        printf("No Products Available.\n");
        return;

    }

    printf("\n-------------------------------------------------\n");

    for(i=0;i<productCount;i++){

        printf("Product ID : %d\n",inventory[i].productID);
        printf("Product Name : %s\n",inventory[i].productName);
        printf("Price : %.2f\n",inventory[i].price);
        printf("Quantity : %d\n",inventory[i].quantity);
        printf("-----------------------------------------------\n");

    }

}

void searchProduct(){

    int id;
    int i;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<productCount;i++){

        if(inventory[i].productID == id){

            printf("Product Found.\n");
            printf("Product ID : %d\n",inventory[i].productID);
            printf("Product Name : %s\n",inventory[i].productName);
            printf("Price : %.2f\n",inventory[i].price);
            printf("Quantity : %d\n",inventory[i].quantity);

            return;

        }

    }

    printf("Product Not Found.\n");

}

void updateProduct(){

    int id;
    int i;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<productCount;i++){

        if(inventory[i].productID == id){

            getchar();

            printf("Enter New Product Name: ");
            fgets(inventory[i].productName,sizeof(inventory[i].productName),stdin);
            inventory[i].productName[strcspn(inventory[i].productName,"\n")] = '\0';

            printf("Enter New Price: ");
            scanf("%f",&inventory[i].price);

            printf("Enter New Quantity: ");
            scanf("%d",&inventory[i].quantity);

            printf("Product Updated Successfully.\n");

            return;

        }

    }

    printf("Product Not Found.\n");

}

void deleteProduct(){

    int id;
    int i;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<productCount;i++){

        if(inventory[i].productID == id){

            int j;

            for(j=i;j<productCount-1;j++){

                inventory[j] = inventory[j+1];

            }

            productCount--;

            printf("Product Deleted Successfully.\n");

            return;

        }

    }

    printf("Product Not Found.\n");

}

void purchaseProduct(){

    int id;
    int qty;
    int i;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<productCount;i++){

        if(inventory[i].productID == id){

            printf("Enter Purchased Quantity: ");
            scanf("%d",&qty);

            inventory[i].quantity += qty;

            printf("Stock Updated Successfully.\n");

            return;

        }

    }

    printf("Product Not Found.\n");

}

void sellProduct(){

    int id;
    int qty;
    int i;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    for(i=0;i<productCount;i++){

        if(inventory[i].productID == id){

            printf("Enter Selling Quantity: ");
            scanf("%d",&qty);

            if(qty > inventory[i].quantity){

                printf("Insufficient Stock.\n");

            }else{

                inventory[i].quantity -= qty;

                printf("Product Sold Successfully.\n");

            }

            return;

        }

    }

    printf("Product Not Found.\n");

}

int main(){

    int choice;

    do{

        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Purchase Product\n");
        printf("7. Sell Product\n");
        printf("8. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                purchaseProduct();
                break;

            case 7:
                sellProduct();
                break;

            case 8:
                printf("Thank You.\n");
                break;

            default:
                printf("Error\n");

        }

    }while(choice != 8);

    return 0;

}