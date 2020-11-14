// a simple menu

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(void)
{
    unsigned short response = 0;
    bool menuLOL = false;

    // List of Profits

    int Ultimate_Skins;
    int Mythic_Skins;
    int Legendary_Skins;
    int Epic_Skins;
    int Legacy_Skins;
    int Regular_Skins;
    int Chroma_Skins;
    int Rune_Pages;
    int Emotes;
    int Icons;
    int Wards;



    // List of Multipliers

    int total1, Multiplier_Ultimate_Skins = 25;
    int total2, Multiplier_Mythic_Skins = 45;
    int total3, Multiplier_Legendary_Skins = 20;
    int total4, Multiplier_Epic_Skins = 10;
    int total5, Multiplier_Legacy_Skins = 10;
    int total6, Multiplier_Regular_Skins = 5;
    int total7, Multiplier_Chroma_Skins = 3;
    int total8, Multiplier_Rune_Pages = 2;
    int total9, Multiplier_Emotes = 2;
    int total10, Multiplier_Icons = 1;
    int total11, Multiplier_Wards = 2;

    // Color Code

    char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
    char cyan[] = { 0x1b, '[', '0', ';', '3', '6', 'm', 0 };
    char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0 };
    char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };
    char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
    char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
    char Bred[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
    char Lgray[] = { 0x1b, '[', '0', ';', '3', '7', 'm', 0 };


    cout << cyan << "\n----------------------------------------------" << normal;

    cout << cyan << "\n| League Of Legends Account Calculation 2020 |" << normal;

    cout << cyan << "\n----------------------------------------------" << normal;

    cout << "\n";


    // The Menu is one whole code combined.

    while (menuLOL == false)
    {
        do
        {
            std::cout << Bred << "League Of Legends Calculation Menu\n" << normal
                << yellow << " 1) Start\n" << normal
                << yellow << " 2) Inventory Price List\n" << normal
                << yellow << " 3) Exit\n" << normal
                << Bred << "Choose An Option: " << normal;
            std::cin >> response;
            std::cout << "\n";
        } while (response > 4);

        switch (response)
        {
        case 1:
            std::cout << yellow << "How Many Ultimate Skins: " << normal;

            cin >> Ultimate_Skins;

            cout << yellow << "How Many Mythic Skins: " << normal;

            cin >> Mythic_Skins;

            cout << yellow << "How Many Legendary Skins: " << normal;

            cin >> Legendary_Skins;

            cout << yellow << "How Many Epic Skins: " << normal;

            cin >> Epic_Skins;

            cout << yellow << "How Many Legacy Skins: " << normal;

            cin >> Legacy_Skins;

            cout << yellow << "How Many Regular Skins: " << normal;

            cin >> Regular_Skins;

            cout << yellow << "How Many Chroma Skins: " << normal;

            cin >> Chroma_Skins;

            cout << yellow << "How Many Rune Pages: " << normal;

            cin >> Rune_Pages;

            cout << yellow << "How Many Emotes: " << normal;

            cin >> Emotes;

            cout << yellow << "How Many Icons: " << normal;

            cin >> Icons;

            cout << yellow << "How Many Wards: " << normal;

            cin >> Wards;

            // The total skins have to be inside the menu code.

            total1 = Ultimate_Skins * Multiplier_Ultimate_Skins;
            total2 = Mythic_Skins * Multiplier_Mythic_Skins;
            total3 = Legendary_Skins * Multiplier_Legendary_Skins;
            total4 = Epic_Skins * Multiplier_Epic_Skins;
            total5 = Legacy_Skins * Multiplier_Legacy_Skins;
            total6 = Regular_Skins * Multiplier_Regular_Skins;
            total7 = Chroma_Skins * Multiplier_Chroma_Skins;
            total8 = Rune_Pages * Multiplier_Rune_Pages;
            total9 = Emotes * Multiplier_Emotes;
            total10 = Icons * Multiplier_Icons;
            total11 = Wards * Multiplier_Icons;

            cout << cyan << "\n-----------------------------------------" << normal;

            cout << cyan << "\n| League Of Legends Account Total Value |" << normal;

            cout << cyan << "\n-----------------------------------------" << normal;

            cout << "\n";

            cout << Lgray << "\nYour Account is Worth " << normal;

            cout << green << "$";

            cout << green << total1 + total2 + total3 + total4 + total5 + total6 + total7 + total8 + total9 + total10 + total11 << normal << endl;

           

            cout << "\n";

            break;

        // This is the second Option in the menu.

        case 2:
            std::cout << yellow << "Ultimate Skins: [$25]\n" << normal;
            std::cout << yellow << "Mythic Skins: [$45]\n" << normal;
            std::cout << yellow << "Legendary Skins: [$20]\n" << normal;
            std::cout << yellow << "Epic Skins: [$10]\n" << normal;
            std::cout << yellow << "Legacy Skins: [$10]\n" << normal;
            std::cout << yellow << "Regular Skins: [$5]\n" << normal;
            std::cout << yellow << "Chroma Skins: [$3]\n" << normal;
            std::cout << yellow << "Rune Pages: [$2]\n" << normal;
            std::cout << yellow << "Emotes: [$2]\n" << normal;
            std::cout << yellow << "Icons: [$1]\n" << normal;
            std::cout << yellow << "Wards: [$2]\n" << normal;
            std::cout << "\n";
            break;

        // This is the third option in the menu

        case 3:
            std::cout << cyan << "Exiting Program...\n" << normal;
            menuLOL = true;
            break;

        }
    }

    return 0;
}