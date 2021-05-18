/*
Widgets
Name
Date
This program uses a class to represent products
sold by Fidget Widget Inc. You must add the
code to create another product with the following
information...
Product Name – Avocado Eraser
Unit Cost - $1.50
MSRP - $3.00
Minimum Order Quantity – 10
*/
#include <iostream>
using namespace std;

/*
Stores the product name, unit cost, MSRP, and minimum
order quantity for a product sold by Fidget Widget Inc.
*/
class Widget
{
public:
    string productName;
    double unitCost;
    double msrp;
    int minOrderQuantity;
};

/*
Prints the widget's information to the console.
*/
void printWidgetInfo(Widget w)
{
    cout << "Widget Name: " << w.productName << "\n";
    cout << "Widget Unit Cost: $" << w.unitCost << "\n";
    cout << "Widget MSRP: $" << w.msrp << "\n";
    cout << "Widget Min Order: " << w.minOrderQuantity << "\n";
}

int main()
{
    Widget w1;
    w1.productName = "Pusheen Post-Its";
    w1.unitCost = 1.00;
    w1.msrp = 1.75;
    w1.minOrderQuantity = 25;
    printWidgetInfo(w1);
    cout << "\n";

    Widget w2;
    w2.productName = "Rubik's Cube";
    w2.unitCost = 4.00;
    w2.msrp = 12.00;
    w2.minOrderQuantity = 15;
    printWidgetInfo(w2);
    cout << "\n";

    // add your code here!
    return 0;
}
