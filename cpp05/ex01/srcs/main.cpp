#include "../includes/Form.hpp"

int main()
{
    std::cout << "test 1 ------------------" << std::endl;
    try
    {
        Bureaucrat cheolsoo("cheolsoo", 150);
        std::cout << std::endl;
        Form formA("FormA", 120, 80);
        std::cout << std::endl;
        std::cout << formA;
        cheolsoo.promotion();
        cheolsoo.demotion();
        std::cout << std::endl;
        std::cout << "Now " << cheolsoo;
        std::cout << std::endl;
        cheolsoo.signForm(formA);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test 2 ------------------" << std::endl;
    try
    {
        Bureaucrat cheolsoo("cheolsoo", 100);
        std::cout << std::endl;
        Form formB("FormB", 120, 80);
        std::cout << std::endl;
        std::cout << formB;
        std::cout << std::endl;
        cheolsoo.promotion(50);
        cheolsoo.demotion(20);
        cheolsoo.promotion();
        cheolsoo.demotion();
        std::cout << std::endl;
        std::cout << "Now " << cheolsoo;
        std::cout << std::endl;
        cheolsoo.signForm(formB);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test 3 ------------------" << std::endl;
    try
    {
        Bureaucrat cheolsoo("cheolsoo", 200);
        std::cout << std::endl;
        Form formC("FormC", 120, 80);
        std::cout << std::endl;
        std::cout << formC;
        std::cout << std::endl;
        cheolsoo.promotion(50);
        std::cout << std::endl;
        std::cout << "Now " << cheolsoo;
        std::cout << std::endl;
        cheolsoo.signForm(formC);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "test 4 ------------------" << std::endl;
    try
    {
        Bureaucrat cheolsoo("cheolsoo", 3);
        std::cout << std::endl;
        Form formD("FormD", 120, 80);
        std::cout << std::endl;
        std::cout << formD;
        cheolsoo.promotion(3);
        cheolsoo.demotion(200);
        std::cout << std::endl;
        std::cout << "Now " << cheolsoo;
        std::cout << std::endl;
        cheolsoo.signForm(formD);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
