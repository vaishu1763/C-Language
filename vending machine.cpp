#include<stdio.h>
#include<string.h>
int main()
{
   int mainmenu,submenu;
   printf("Welcome to the Menu system\n");
   printf("\nMain Menu\n");
   printf("1.Tea\n");
   printf("2.Coffee\n");
   printf("3.Soups\n");
   printf("4.Bevarges\n");
   printf("5.Exit\n");
   printf("Enter your choice (1-5): ");
   scanf("%d",&mainmenu);
   switch(mainmenu)
   {
   	case 1:
   		printf("\nTea Menu\n");
   		printf("1.Plain Tea\n");
   		printf("2.Assam Tea\n");
   		printf("3.Lemon Tea\n");
   		printf("4.Back to Main Menu\n");
   		printf("Enter youur choice(1-4): ");
   		scanf("%d",&submenu);
   		switch(submenu)
   		{
   			case 1:
   				printf("You selected Plain Tea.\n");
   				break;
   			case 2:
   			    printf("You selected Assam Tea.\n");
   				break;
   			case 3:
			   printf("You selected Lemon Tea.\n");
			   break;
			case 4:
			    printf("Returning to Main Menu.\n");
				break;
			default:
			printf("Invalid choice try again\n");
			break;	   	
	   }
	   break;
	case 2:
		printf("\nCoffee Menu\n");
		printf("1.Espresso Coffee\n");
		printf("2.Cappuccino Coffe\n");
		printf("3.Latte Coffee\n");
		printf("4.Back to Main Menu\n");
		printf("Enter your choice(1-4):");
		scanf("%d",&submenu);
		switch(submenu){
			case 1:
				printf("You selected Espresso Coffee.\n");
				break;
			case 2:
			    printf("You selected Cappuccino Coffee.\n");
				break;
			case 3:
			    printf("You selected Latte Coffee.\n");
				break;
		    case 4:
			    printf("Returning to Main Menu.\n");
				break;
			default:
			printf("Invalid choice try again.\n");
			break;					
		}
		break;
	case 3:
	    printf("\nSoups\n");
		printf("1.Hot and sour soup\n");
		printf("2.Veg corn soup\n");
		printf("3.Spicy soup\n");
		printf("4.Tamoto soup\n");
		printf("5.Back to Main Menu\n");
		printf("Enter your choice(1-5): ");
		scanf("%d",&submenu);
		switch(submenu)
		{
			case 1:
				printf("You selected Hot and sour soup.\n");
				break;
		    case 2:
			    printf("You selected Veg corn soup.\n");
				break;
		    case 3:
			    printf("You selected Spicy soup.\n");
				break;
			case 4:
			    printf("You selected Tamoto soup.\n");
				break;
			case 5:
			    printf("Returning toMian Mneu.\n");
				break;
			default:
			    printf("Inavlid choice try again.\n");
				break;							
		}
		break;
		case 4:
			printf("\nBevarges\n");
			printf("1.Hot chocolate Drink\n");
			printf("2.Badam Drink\n");
			printf("3.Badam Pista Drink\n");
			printf("4.Back to Main Menu.\n");
			printf("Enter your choice (1-4): ");
			scanf("%d",&submenu);
			switch(submenu)
			{
				case 1:
					printf("You selected Hot chocolate Drink.\n");
					break;
				case 2:
				    printf("You selected Badam Drink.\n");
				    break;
				case 3:
				    printf("You selected Badam Pista Drink.\n");
					break;
				case 4:
				    printf("Returning to Main Menu.\n");
					break;
				default:
				    printf("Invalid choice try again.\n");
					break;	    
			}
			break;
		case 5:
		    printf("Exiting the Main Menu.Good bye.\n");
			break;
		default:
		    printf("Invalid choice try again.\n");
			break;	
		}
}
