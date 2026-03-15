#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
class login
{
protected:
    string password;

public:
    string name, mobile_no, address, confirm_pass;
    login();

void show()
{
    cout << "\nName: " << name;
    cout << "\nMobile Number: " << mobile_no;
    cout << "\nAddress: " << address;
}
};
login::login()
{
    fstream add("Cart.txt", ios::out);
    add.close();
    cout.width(62);
    cout << "LOGIN";
    cout << "\nEnter name: ";
    getline(cin, name);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter mobile no: ";
    getline(cin, mobile_no);
    cout << "Enter password: ";
    getline(cin, password);
    while (1)
    {
        cout << endl << "Confirm password: ";
        getline(cin, confirm_pass);
        if (confirm_pass == password)
        {
            cout << "Login successful!" << endl;
            break;
        }
        else
        {
            cout << "Password not matched" << endl;
        }
    }
}

class Cloths : virtual public login
{
public:
    float polo = 999.00;
    float denim = 1499.00;
    float sleeveless = 500.00;

    float jeans = 999.00;
    float track = 1499.00;
    float cargo = 500.00;

    float blazer = 999.00;
    float bomber = 1499.00;
    float raincoat = 500.00;

    float saree = 1000.00;
    float frock = 1500.00;

    float price_s = 0;
    float price_p = 0;
    float price_j = 0;
    float price_d = 0;

    int quantity, choice;

    void Shirts()
    {
        fstream add("Cart.txt", ios::app);

        cout << "Chose type of shirt\n1-Polo shirt = 999rupees\n2-Denim shirt = 1499rupees\n3-Sleeveless shirt = 500rupees "; 
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "polo_shirt =  " << polo << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_s += polo * quantity;
                    cout << "\npolo shirt_price(including quantity)= Rs " << polo * quantity;
                    add << "Polo Shirt       " << setw(10) << "" << quantity << setw(10) << "" << polo * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 2:
            cout << "Denim_shirt =  " << denim << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_s += denim * quantity;
                    cout << "\nDenim shirt_price(including quantity) =  Rs " << denim * quantity;
                    add << "Denim Shirt      " << setw(10) << " " << quantity << setw(10) << "" << denim * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 3:
            cout << "sleeveless_shirt = Rs " << sleeveless;
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_s += sleeveless * quantity;
                    cout << "\nSleeveless shirt_price(including quantity) =  Rs " << sleeveless * quantity;
                    add << "Sleeveless Shirt " << setw(10) << " " << quantity << setw(10) << "" << sleeveless * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }
        }
    }

    void pants()
    {
        fstream add("Cart.txt", ios::app);
        cout << "Chose type of pant\n1-Jeans=999rupees\n2-Track pants = 1499rupees\n3 - Cargo pants = 500rupees "; 
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Jeans =  " << jeans << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_p += jeans * quantity;
                    cout << "\nJeans_price(including quantity)=  Rs " << jeans * quantity;
                    add << "Jeans            " << setw(10) << " " << quantity << setw(10) << "" << jeans * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 2:
            cout << "Track pants =  " << track << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_p += track * quantity;
                    cout << "\nTrack pant_price(including quantity) =  Rs " << track * quantity;
                    add << "Track pants      " << setw(10) << " " << quantity << setw(10) << "" << track * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 3:
            cout << "Cargo pants =  " << cargo << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_p += cargo * quantity;
                    cout << "\nCargo pant_price(including quantity) =  Rs " << cargo * quantity;
                    add << "Cargo pants      " << setw(10) << " " << quantity << setw(10) << "" << cargo * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }
        }
    }

    inline float blazerj(float x, int y) { return price_j = x * y; }
    inline float bomberj(float x, int y) { return price_j = x * y; }
    inline float raincoatj(float x, int y) { return price_j = x * y; }

    void jackets()
    {
        fstream add("Cart.txt", ios::app);

        cout << "Chose type of jacket\n1-Blazer = 999rupees\n2-Bomber jacket = 1499rupees\n3- Raincoat = 500rupees ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Blazer =  " << blazer << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    blazerj(blazer, quantity);
                    cout << "\nBlazer_price(including quantity) = Rs " << blazer * quantity;
                    add << "Blazer           " << setw(10) << " " << quantity << setw(10) << "" << blazer * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 2:
            cout << "Bomber jacket =  " << bomber << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    bomberj(blazer, quantity);
                    cout << "\nBomber jacket_price(including quantity) =  Rs "
                        << bomber * quantity;
                    add << "Bomber jacket    " << setw(10) << " " << quantity
                        << setw(10) << "" << bomber * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 3:
            cout << "Raincoat =  " << raincoat << "rupees";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    raincoatj(blazer, quantity);
                    cout << "\nRaincoat_price(including quantity) =  Rs " << raincoat * quantity;
                    add << "Raincoat         " << setw(10) << " " << quantity << setw(10) << "" << raincoat * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }
        }
    }

    void dress(int x = 1)
    {
        fstream add("Cart.txt", ios::app);
        if (x == 1)
        {
            cout << "saree= " << saree << "ruppes";
            cout << "\nEnter quantity";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_d += saree * quantity;
                    cout << "\nSaree_price(including quantity)= " << saree * quantity << "rupees";
                    add << "Saree            " << setw(10) << " " << quantity << setw(10) << "" << saree * quantity << endl;
                    cout << "\nitem added to cart";
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
            }
        }
        else
        {
            cout << "Frock= " << frock << "ruppes";
            cout << "\nEnter quantity";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_d += frock * quantity;
                    cout << "\nFrock_price(including quantity)= " << frock * quantity << "rupees";
                    add << "Frock            " << setw(10) << " " << quantity << setw(10) << "" << frock * quantity << endl;
                    cout << "\nitem added to cart";
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
            }
        }
    }
};

class accessories : virtual public login
{
public:
    float casio = 9999.00;
    float smart = 1499.00;
    float fastrack = 6500.00;

    float sunglasses = 999.00;
    float bifocal = 1499.00;
    float safety = 500.00;

    float price_w = 0;
    float price_e = 0;

    int quantity, choice;

    void watch()
    {
        fstream add("Cart.txt", ios::app);
        cout << "Chose type of watch\n1-casio watch = 9999rupees\n2-Smart watch = 1499rupees\n3 -Fastrack watch = 6500rupees ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Casio =  " << casio << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_w += casio * quantity;
                    cout << "\nCasio watch_price(including quantity) =  Rs " << casio * quantity;
                    add << "Casio            " << setw(10) << " " << quantity << setw(10) << "" << casio * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 2:
            cout << "Smart watch =  " << smart << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_w += smart * quantity;
                    cout << "\nsmart Watch_price(including quantity) =  Rs "
                        << smart * quantity;
                    add << "Smart watch      " << setw(10) << " " << quantity
                        << setw(10) << "" << smart * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 3:
            cout << "Fastrack =  " << fastrack << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_w += fastrack * quantity;
                    cout << "\nFastrack Watch_price(including quantity) =  Rs "
                        << fastrack * quantity;
                    add << "Fastrack         " << setw(10) << " " << quantity << setw(10) << "" << fastrack * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }
        }
    }

    void eyeglassess()
    {
        fstream add("Cart.txt", ios::app);
        cout << "Chose type of eyeglasses\n1-Sunglasses = 999rupees\n2-Bifocal glasses = 1499rupees\n3 - Safety glasses = 500rupees ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Sunglasses =  " << sunglasses << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_e += sunglasses * quantity;
                    cout << "\nSunglasses_price(including quantity) =  Rs " << sunglasses * quantity;
                    add << "Sunglasses       " << setw(10) << " " << quantity << setw(10) << "" << sunglasses * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 2:
            cout << "Bifocal glasses =  " << bifocal << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_e += bifocal * quantity;
                    cout << "\nBifocal glases_price(including quantity) =  Rs "
                        << bifocal * quantity;
                    add << "Bifocal glasses  " << setw(10) << " " << quantity
                        << setw(10) << "" << bifocal * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }

        case 3:
            cout << "Safety glasses =  " << safety << "ruppes";
            cout << "\nQuantity= ";
            cin >> quantity;
            try
            {
                if (quantity == 0)
                {
                    throw(1);
                }
                else
                {
                    price_e += safety * quantity;
                    cout << "\nSafety glasses_price(including quantity) =  Rs "
                        << safety * quantity;
                    add << "Safety glasses   " << setw(10) << " " << quantity
                        << setw(10) << "" << safety * quantity << endl;
                    cout << "\nitem added to cart";
                    break;
                }
            }
            catch (int x)
            {
                cout << "quantity cant be 0";
                break;
            }
        }
    }
};

class footwear : virtual public login
{
public:
    float sandal = 999.00;
    float shoes = 1499.00;
    float flip_flop = 500.00;

    float price_f = 0;

    int quantity, choice;

    void wear(int x)
    {
        fstream add("Cart.txt", ios::app);
        cout << "Sandal =  " << sandal << "ruppes";
        cout << "\nQuantity= ";
        cin >> quantity;
        try
        {
            if (quantity == 0)
            {
                throw(1);
            }
            else
            {
                price_f += sandal * quantity;
                cout << "\nSandal_price(including quantity) =  Rs " << sandal * quantity;
                add << "Sandal           " << setw(10) << " " << quantity << setw(10)
                    << "" << sandal * quantity << endl;
                cout << "\nitem added to cart";
            }
        }
        catch (int x)
        {
            cout << "quantity cant be 0";
        }
    }
    void wear(double y)
    {
        fstream add("Cart.txt", ios::app);
        cout << "Shoes= " << shoes << "ruppes";
        cout << "\nQuantity= ";
        cin >> quantity;
        try
        {
            if (quantity == 0)
            {
                throw(1);
            }
            else
            {
                price_f += shoes * quantity;
                cout << "\nShoes_price(including quantity) =  Rs " << shoes * quantity;
                add << "Shoes            " << setw(10) << " " << quantity << setw(10)
                    << "" << shoes * quantity << endl;
                cout << "\nitem added to cart";
            }
        }
        catch (int x)
        {
            cout << "quantity cant be 0";
        }
    }

    void wear(char z)
    {
        fstream add("Cart.txt", ios::app);
        cout << "Flip flop =  " << flip_flop << "ruppes";
        cout << "\nQuantity= ";
        cin >> quantity;
        try
        {
            if (quantity == 0)
            {
                throw(1);
            }
            else
            {
                price_f += flip_flop * quantity;
                cout << "\nFlipflop_price(including quantity) = Rs " << flip_flop * quantity;
                add << "Flip flop        " << setw(10) << " " << quantity << setw(10)
                    << "" << flip_flop * quantity << endl;
                cout << "\nitem added to cart";
            }
        }
        catch (int x)
        {
            cout << "quantity cant be 0";
        }
    }
};

class cart : public Cloths, public accessories, public footwear
{
public:
    float total = 0;
    void dis()
    {
        total = Cloths::price_s + Cloths::price_p + Cloths::price_j + Cloths::price_d + accessories::price_w + accessories::price_e + footwear::price_f;
        cout << "\nOriginal price(without coupon) = Rs " << total << endl<< endl;
    }

    void show_cart()
    {
        cout << setw(30) << "In cart\n\n";
        cout << "    ITEM       " << setw(16) << "QUANTITY" << setw(14) << "PRICE(Rs)"
            << endl;

        fstream sh("Cart.txt", ios::in);
        string line;
        while (!sh.eof())
        {
            getline(sh, line);
            cout << line << endl;
        }
        total = Cloths::price_s + Cloths::price_p + Cloths::price_j + Cloths::price_d +
            accessories::price_w + accessories::price_e + footwear::price_f;
        if (total == 0)
        {
            cout << "**Cart is empty**";
        }
        else
        {
            cout << "Your total price = Rs " << total << "\n";
        }
    }
};

class discount : public cart
{
public:
    float fprice = 0;
    char q;
    void coupon(cart& g)
    {
        fprice = g.total;
        if (g.total == 0)
        {
            cout << "\nBuy something to apply for coupon\n";
        }
        else if (g.total > 0 && g.total < 1500)
        {
            cout << "Minimum amount to apply for discount is RS 1501";
        }
        else if (g.total > 1500 && g.total < 4000)
        {
            cout << "Congrats you have won a coupon discount of 15%\n";
            cout << "Do you want to apply this coupon(Y/N)?\n";
            cin >> q;
            if (q == 'Y' || q == 'y')
            {
                fprice = fprice - (15 * fprice) / 100;
                cout << "After discount:- price = RS " << fprice;
            }
            else
            {
                cout << "you have not use the coupon!\n";
                cout << "original price(without coupon) = Rs " << fprice;
            }
        }
        else if (g.total > 4000 && g.total < 7000)
        {
            cout << "Congrats you have won a coupon discount of 20%\n";
            cout << "Do you want to apply this coupon(Y/N)?\n";
            cin >> q;
            if (q == 'Y' || q == 'y')
            {
                fprice = fprice - (20 * fprice) / 100;
                cout << "After discount--> price = RS " << fprice;
            }
            else
            {
                cout << "you have not use the coupon!\n";
                cout << "original price(without coupon) = Rs " << fprice;
            }
        }
        else if (g.total > 7000 && g.total < 10000)
        {
            cout << "Congrats you have won a coupon discount of 30%\n";
            cout << "Do you want to apply this coupon(Y/N)?\n";
            cin >> q;
            if (q == 'Y' || q == 'y')
            {
                fprice = fprice - (30 * fprice) / 100;
                cout << "After discount--> price = RS " << fprice;
            }
            else
            {
                cout << "you have not use the coupon!\n";
                cout << "original price(without coupon) = Rs " << fprice;
            }
        }
        else if (g.total > 10000)
        {
            cout << "Congrats you have won a coupon discount of 40%\n";
            cout << "Do you want to apply this coupon(Y/N)?\n";
            cin >> q;
            if (q == 'Y' || q == 'y')
            {
                fprice = fprice - (40 * fprice) / 100;
                cout << "After discount--> price = RS " << fprice;
            }
            else
            {
                cout << "you have not use the coupon!\n";
                cout << "original price(without coupon) = Rs " << fprice;
            }
        }
    }
    friend class bill;
};

class bill
{
public:
    int rating;
    void show_bill(discount& b)
    {
        if (b.fprice == 0)
        {
            cout << "Nothing is there...";
        }
        else
        {
            cout << "    ITEM       " << setw(16) << "QUANTITY" << setw(14) << "PRICE(Rs)" << endl;
            fstream sh("Cart.txt", ios::in);
            string line;
            while (!sh.eof())
            {
                getline(sh, line);
                cout << line << endl;
            }
            cout << "Your total bill = Rs " << b.fprice << endl;
            char m;
            cout << "\nDo you want to place an order(Y/N)\n";
            cin >> m;
            if (m == 'Y' || m == 'y')
            {
                b.show();
                cout << "\n\nOrder placed...\n";
                cout << "THANK YOU FOR ORDERING\n\n";
                cout << "Rate your experience(from 1 to 5)\n";
                cin >> rating;
                cout << "Your rating: ";
                for (int i = 0; i < rating; i++)
                {
                    cout << "*";
                }
                cout << "\nThank you for your rating";
            }
            else
            {
                cout << "Order cancelled...";
            }
        }
    }
};

template <class T>
void Size(T s)
{
    cout << "" << s << endl;
}

int main()
{
    discount g;
    g.show();
    bill d;
    char size;
    int siZe;
    int flag = 0;
    int type, choice;

    while (1)
    {
        cout << "\n\nEnter your choice\n1.cloths\n2.accessories\n3.footwear\n4.cart\n5.Discount\n6.Bill\n7.EXIT\n ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter clothing type (1. Shirt, 2. Pants, 3. Jackets, 4. Dress): ";
            int type;
            cin >> type;

            if (type == 1)
            {
                cout << "\nEnter size (S/M/L/XL): ";
                cin >> size;
                cout << "Also specify with integer value\nS(32 - 34)\tM(36 - 38)\tL(40 - 42)\tXL(46 - 48) : ";
                cin >> siZe;
                cout << "Size =  ";
                Size(size);
                cout << "Size in no.: ";
                Size(siZe);
                g.Shirts();
                break;
            }
            else if (type == 2)
            {
                cout << "\nEnter size (S/M/L/XL): ";
                cin >> size;
                cout << "Also specify with integer value\nS(32 - 34)\tM(36 - 38)\tL(40 - 42)\tXL(46 - 48) : ";
                cin >> siZe;
                cout << "Size =  ";
                Size(size);
                cout << "Size in no.: ";
                Size(siZe);
                g.pants();
                break;
            }
            else if (type == 3)
            {
                cout << "\nEnter size (S/M/L/XL): ";
                cin >> size;
                cout << "Also specify with integer value\nS(32 - 34)\tM(36 - 38)\tL(40 - 42)\tXL(46 - 48) : ";
                cin >> siZe;
                cout << "Size =  ";
                Size(size);
                cout << "Size in no.: ";
                Size(siZe);
                g.jackets();
                break;
            }
            else if (type == 4)
            {
                int o;
                cout << "Enter your choice: 1-Saree\t2-Frock";
                cin >> o;
                if (o == 1)
                {
                    g.dress();
                }
                else if (o == 2)
                {
                    g.dress(2);
                }
                break;
            }
        case 2:
            cout << "\nEnter accessory type(1.watches, 2.eyeglasses): ";
            cin >> type;
            if (type == 1)
            {
                g.watch();
            }
            else if (type == 2)
            {
                g.eyeglassess();
            }
            break;
        case 3:

            int k;
            cout << "Choose type of footwear\n1-Sandals = 999rupees\n2-Shoes = 1499rupees\n3-Flip flop = 500rupees ";

            cin >> k;
            if (k == 1)
            {
                g.wear(7);
            }
            else if (k == 2)
            {
                g.wear(2.5);
            }
            else if (k == 3)
            {
                g.wear('Z');
            }
            break;
        case 4:
            g.show_cart();
            break;
        case 5:
            g.dis();
            g.coupon(g);
            break;
        case 6:
            g.dis();
            d.show_bill(g);
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "INVALID OPTION";
        }
    }

    _getch();
    return 0;
}