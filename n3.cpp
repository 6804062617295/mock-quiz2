#include <iostream>
using namespace std;
typedef struct{
    char name[30];
    char surname[30];
    float sales[4];
    float totalSales;
} Salesperson;

void calculateTotal(Salesperson *s);
void printTopSeller(Salesperson emp[], int size);

int main() {
    int n;
    cin >> n;
    Salesperson sale[1000];
    for (int i = 0; i < n; i++){
        calculateTotal(&sale[i]);
    }

    printTopSeller(sale,n);
    return 0;
}
void calculateTotal(Salesperson *s){
    cin >> s->name >> s->surname ;
    s->totalSales = 0;
    for (int i = 0 ;i < 4; i++){
        cin >> s->sales[i];
        s->totalSales += s->sales[i];
    }
}
void printTopSeller(Salesperson emp[], int size){
    int high = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (emp[i].totalSales < emp[i + 1].totalSales)
            high = i + 1;
    }
    cout << emp[high].name << " " << emp[high].surname << " " << emp[high].totalSales << endl;
}