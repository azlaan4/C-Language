#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
// backgroung and text color

    system("Color 79");

// description of hotel

//    system("cls");
//        printf("\n\n\n\n");
//        printf("\t\t\t\t\t\t ***************************\n");
//        printf("\t\t\t\t\t\t * Hotel Management System *\n");
//        printf("\t\t\t\t\t\t ***************************");
//        printf("\n\n\n\n");
//        printf("\t\t\t\tHotel YAQ is one of the most newest Hotel in Karachi. The Hotel\n");
//        printf("\t\t\tis equipped with all the general amenities and facilities that go\n");
//        printf("\t\t\talong with memorable stay. Set amidst beautifully landscaped gardens,\n");
//        printf("\t\t\tit proves to be a ideal dream destination for preceptive traveler.\n");
//        printf("\t\t\tthe Hotel have well furnished rooms along with rooms providing pleasant\n");
//        printf("\t\t\tviews of the city. The hotel satisfies the needs of business as well\n");
//        printf("\t\t\tas the leisure traveler. All the rooms at the Hotel are furnished\n");
//        printf("\t\t\tbeautifully. All the rooms are fitted with amenities.\n");
//        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
//    getch();
//    system("cls");
//        printf("\n\n\n\n");
//        printf("\n\t\t\t\t\t\t*************");
//        printf("\n\t\t\t\t\t\t* AMENITIES *");
//        printf("\n\t\t\t\t\t\t*************");
//        printf("\n\n\n\n");
//        printf("\t\t\t=> 100% Power Backup.");
//        printf("\n\t\t\t=> Automatic Lifts.");
//        printf("\n\t\t\t=> Ample Parking Space.");
//        printf("\n\t\t\t=> Round the Clock Security.");
//        printf("\n\t\t\t=> Running Hot and Cold Water.");
//        printf("\n\t\t\t=> Free Internet Service.");
//        printf("\n\t\t\t=> 24 Hours Room Service.");
//        printf("\n\t\t\t=> Laundry Service.");
//        printf("\n\n\t\t\t\t\t\t Press any key to continue...!!");
//    getch();

// main menu

    system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\t\t\t\t\t\t* MAIN MENU *");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\n\n\n");
        printf("\n\n\n\t\t\t1. Booking");
        printf("\n\t\t\t2. Rooms Information");
        printf("\n\t\t\t3. Rooms Allotted");
        printf("\n\t\t\t4. Edit Record");
        printf("\n\t\t\t0. Exit");

// main menu functioning and declarations

    char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    switch(choice){
            case '1':
                    break;
            case '2':
                    info();
                    break;
            case '3':
//                    rooms();
                    break;
            case '4':
//                    edit();
                    break;
            case '0': break;
            default:
                    printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
        }

getch();
}

void info()
{
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t*********************");
        printf("\n\t\t\t\t\t\t* Rooms Information *");
        printf("\n\t\t\t\t\t\t*********************");
        printf("\n\n\n\n");
        printf("\t");
        printf("\t");
        printf("\t\t|  Room Number  |");
        printf("   Room Type   |");
        printf("  Charges per Day  |");
        printf("\n\t\t\t\t=====================================================\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t1\t|");
        printf("  Deluxe Room\t|");
        printf("\t2500\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t2\t|");
        printf("  Duplex Room\t|");
        printf("\t3020\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t3\t|");
        printf("  Suite\t|");
        printf("\t4000\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t4\t|");
        printf("  Cabana\t|");
        printf("\t3500\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t5\t|");
        printf("  Studio\t|");
        printf("\t5000\t    |\n");
        printf("\t");
        char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    switch(choice){
            case '1':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tDeluxe Room:\n");
                    printf("\t\t\t\tThey are available in Single Deluxe and Double Deluxe variants.\n");
                    printf("\t\t\tDeluxe room is well furnished. Some amenities are attached bathroom,\n");
                    printf("\t\t\ta dressing table, a bedside table, a small writing table, a TV,\n");
                    printf("\t\t\tand a small fridge. The floor is covered with carpet and most suitable\n");
                    printf("\t\t\tfor small families.");
                    break;
            case '2':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tDuplex Room:\n");
                    printf("\t\t\t\tThis type is composed of two rooms located on two different floors,\n\t\t\tconnected with internal stairs.\n");
                    break;
            case '3':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tSuite:\n");
                    printf("\t\t\t\tIt is composed of one or more bedrooms, a living room, and a dining area.\n\t\t\tIt is excellent for the guests who prefer more space, wish to entertain their guests\n\t\t\twithout interruption and giving up privacy.\n");
                    break;
            case '4':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tCabana:\n");
                    printf("\t\t\t\tThis type of room faces water body, beach, or a swimming pool. \n\t\t\tIt generally has a large balcony.\n");
                    break;
            case '5':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tStudio:\n");
                    printf("\t\t\t\tThey are twin adjacent rooms: A living room with sofa, \n\t\t\tcoffee table and chairs, and a bedroom. It is also equipped with \n\t\t\tfan/air conditioner, a small kitchen corner, and a dining area. \n\t\t\tThe furniture is often compact.\n");
                    break;
            default:
                    printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
        }
}
