#include <iostream>
#include "Animal.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "Jungle.h"
#include "Pet.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    Jungle bigjungle(n);
    for (int i = 0; i < n / 2; i++) {
        bigjungle.AddAnimal(new DomesticAnimal());
        bigjungle.AddAnimal(new WildAnimal());
    }

    for (int i = 0; i < 1000; i++) {
        bigjungle.movement();
    }

    cout << bigjungle.getTotalFall();


}

