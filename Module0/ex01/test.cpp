#include <iostream>
#include <string>

class Test
{
    private:
        int x;
        int y;
    public:
        void set_values(int new_x, int new_y)
        {
            x = new_x;
            y = new_y;
        };
        void get_values()
        {
            std::cout << "x is " << x << "\n";
            std::cout << "y is " << y << "\n";
        };
};

int check_dig(std::string val)
{
    int i = 0;
    while (val[i] != '\0')
    {
        if (val[i] < '0' || val[i] > '9')
            return(1);
        i++;
    }
    return (0);
}
// void    set_values(int new_x, int new_y)
// {
//     x = new_x;
//     y = new_y;
// }

int main(void)
{
    Test ing;
    std::string val1;
    std::string val2;
    const char *str1;
    const char *str2;

    while (1)
    {
        std::cout << "give val1: ";
        std::cin >> val1;
        if (std::cin.eof())
        {
            std::cout << "\nrude\n";
            return (0);
        }
        if (val1.size() == 10 && !check_dig(val1))
            break ;
        std::cout << "Invalid phone number. Try again.\n";
    }
    std::cout << "give val2: ";
    std::cin >> val2;
    if (std::cin.eof())
    {
        std::cout << "\nrude\n";
        return (0);
    }
    str1 = val1.c_str();
    str2 = val1.c_str();
    ing.set_values(std::atoi(str1), std::atoi(str2));
    ing.get_values(); 
}
