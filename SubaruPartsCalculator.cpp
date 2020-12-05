#include <iostream>

//created by Mark Feigleson while working at Green Tokai 2nd shift. I hope you're still using this Matt.

//holds the values we need for various counts
struct SubaruPart
{
    int TotalAmount;
    int Skid;
    int PiecesPerTub;
    int TubsPerSkid;
};

void SkidMath(int TotalAmount, int Skid, int PiecesPerTub, int TubsPerSkid) 
{
    int SkidsOrder = TotalAmount / Skid;
    int PiecesLooseTubs = (TotalAmount % Skid) / PiecesPerTub;
    int TotalTubs = TotalAmount / PiecesPerTub;
    std::cout << "The order has " << SkidsOrder << " Skids plus one skid of " << PiecesLooseTubs << " Tubs. The order will need a total of " << TotalTubs << " Tubs." << std::endl;

}

void SubaruCalc()
{
    int SubaruProductNo{ 0 };
    std::cout << "Enter the Subaru Product Number ONLY - 21982, 21983, 22175/OCWN, 22176/OGTO, 22177/OVNM, 22178/OQTD,  22182/05W8, or 22183/OSAQ" << std::endl;
    while (!(std::cin >> SubaruProductNo)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input.  Try again: ";
    }


    //switch to choose the parts we want and get output to match the amount per tub and skid.
    switch (SubaruProductNo) {

    case 21982:
    {
        SubaruPart Part21982{ 0, 432, 24, 18 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 21982" << std::endl;
        std::cin >> Part21982.TotalAmount;

        SkidMath(Part21982.TotalAmount, Part21982.Skid, Part21982.PiecesPerTub, Part21982.TubsPerSkid);


        break;
    }

    case 21983:
    {
        SubaruPart Part21983{ 0, 432, 24, 18 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 21983" << std::endl;
        std::cin >> Part21983.TotalAmount;

        SkidMath(Part21983.TotalAmount, Part21983.Skid, Part21983.PiecesPerTub, Part21983.TubsPerSkid);

        break;
    }

    case 22175:
    {
        SubaruPart Part22175{ 0, 480, 20, 24 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 22175" << std::endl;
        std::cin >> Part22175.TotalAmount;

        SkidMath(Part22175.TotalAmount, Part22175.Skid, Part22175.PiecesPerTub, Part22175.TubsPerSkid);



        break;
    }

    case 22176:
    {
        SubaruPart Part22176{ 0, 480, 20, 24 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 22176" << std::endl;
        std::cin >> Part22176.TotalAmount;
        SkidMath(Part22176.TotalAmount, Part22176.Skid, Part22176.PiecesPerTub, Part22176.TubsPerSkid);

        break;
    }

    case 22177:
    {
        SubaruPart Part22177{ 0, 243, 27, 9 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 22177" << std::endl;
        std::cin >> Part22177.TotalAmount;
        
        SkidMath(Part22177.TotalAmount, Part22177.Skid, Part22177.PiecesPerTub, Part22177.TubsPerSkid);

    }

    case 22178:
    {
        SubaruPart Part22178{ 0, 243, 27, 9 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 22178" << std::endl;
        std::cin >> Part22178.TotalAmount;

        SkidMath(Part22178.TotalAmount, Part22178.Skid, Part22178.PiecesPerTub, Part22178.TubsPerSkid);



        break;
    }

    case 22182:
    {
        SubaruPart Part22182{ 0, 144, 12, 12 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 22182" << std::endl;
        std::cin >> Part22182.TotalAmount;

        SkidMath(Part22182.TotalAmount, Part22182.Skid, Part22182.PiecesPerTub, Part22182.TubsPerSkid);
    }

    case 22183:
    {
        SubaruPart Part22183{ 0, 144, 12, 12 };
        int SkidsOrder{ 0 }; int PiecesLooseTubs{ 0 }; int TotalTubs{ 0 }; std::string delay{ "a" };
        std::cout << "Enter the amount of pieces on the order for 22183" << std::endl;
        std::cin >> Part22183.TotalAmount;

        SkidMath(Part22183.TotalAmount, Part22183.Skid, Part22183.PiecesPerTub, Part22183.TubsPerSkid);

        break;
    }

    default:
    {
        std::cout << "Please type a valid number!" << std::endl;
        SubaruCalc();

    }

    }
}

void Repeat()
{
    std::cout << "Ready for another? Y/N" << std::endl;
    char choice{ 'z' };
    std::cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        SubaruCalc();
        Repeat();
    }
    else if (choice == 'n' || choice == 'N')
    {
        std::cout << "Good luck out there. Try not to create another incident.";
    }
    else
    {
        std::cout << "Please type Y or N!" << std::endl;
    }
}



int main()
{
    std::cout << "Made by Mark Feigleson, Green Tokai, 2nd Shift Logistics. \n Subaru Calculator" << std::endl;
    {
        SubaruCalc();
        Repeat();
    }

}
