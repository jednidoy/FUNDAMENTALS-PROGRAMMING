#include <stdio.h>

int main() {
    float veg_qty, fruit_qty;
    int milk_qty, soap_qty, shampoo_qty;
    float veg_cost, fruit_cost, milk_cost, soap_cost, shampoo_cost;
    float total, payment, change;

    const float VEG_PRICE = 54.5;
    const float FRUIT_PRICE = 120.0;  
    const float MILK_PRICE = 90;
    const float SOAP_PRICE = 29.45;
    const float SHAMPOO_PRICE = 140;

    printf("Price List:\n");
    printf("Vegetable: P%.2f / kg\n", VEG_PRICE);
    printf("Fruits:    P%.2f / kg\n", FRUIT_PRICE);
    printf("Milk:      P%.2f / pack\n", MILK_PRICE);
    printf("Soap:      P%.2f / bar\n", SOAP_PRICE);
    printf("Shampoo:   P%.2f / bottle\n", SHAMPOO_PRICE);
    printf("=====================================\n");

    printf("Enter kg of Vegetables: ");
    scanf("%f", &veg_qty);
    printf("Enter kg of Fruits: ");
    scanf("%f", &fruit_qty);
    printf("Enter packs of Milk: ");
    scanf("%d", &milk_qty);
    printf("Enter bars of Soap: ");
    scanf("%d", &soap_qty);
    printf("Enter bottles of Shampoo: ");
    scanf("%d", &shampoo_qty);

    veg_cost = veg_qty * VEG_PRICE;
    fruit_cost = fruit_qty * FRUIT_PRICE;
    milk_cost = milk_qty * MILK_PRICE;
    soap_cost = soap_qty * SOAP_PRICE;
    shampoo_cost = shampoo_qty * SHAMPOO_PRICE;

    total = veg_cost + fruit_cost + milk_cost + soap_cost + shampoo_cost;

    printf("\n=====================================\n");
    printf("              RECEIPT                \n");
    printf("=====================================\n");
    printf("Vegetables   %.2f kg   = P%.2f\n", veg_qty, veg_cost);
    printf("Fruits       %.2f kg   = P%.2f\n", fruit_qty, fruit_cost);
    printf("Milk         %d pack(s) = P%.2f\n", milk_qty, milk_cost);
    printf("Soap         %d bar(s)  = P%.2f\n", soap_qty, soap_cost);
    printf("Shampoo      %d bottle(s) = P%.2f\n", shampoo_qty, shampoo_cost);
    printf("-------------------------------------\n");
    printf("TOTAL PURCHASE:         P%.2f\n", total);

    printf("Enter your payment: P");
    scanf("%f", &payment);
    change = payment - total;

    if (change < 0) {
        printf("Insufficient payment! You still owe P%.2f\n", -change);
    } else {
        printf("Your change: P%.2f\n", change);
    }

    printf("\nGoodbye! Have a nice day!\n");
    return 0;
}