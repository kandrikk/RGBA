#include <iostream>
#include <vector>

class RGBA
{
private:
    int r;
    int g;
    int b;
    int a;
public:
    RGBA()
    {
        //std::cout << "Создаю объект" << std::endl;
        r = 0;
        g = 0;
        b = 0;
        a = 255;
    }
    
    void set_r(int new_r)
    {
        r = new_r;
    }

    void get_r()
    {
        std::cout << " \n" << r << std::endl;
    }

    virtual void print()
    {
        std::cout << " RGBA!" << r << std::endl;
        // std::cout << " " << r << std::endl;
        // std::cout << " " << g << std::endl;
        // std::cout << " " << b << std::endl;
        // std::cout << " " << a << std::endl;
    }
};

class RGB: public RGBA
{
private:
    int r;
    int g;
    int b;
public:
    RGB()
    {
       // std::cout << "Создаю объект" << std::endl;
        r = 0;
        g = 0;
        b = 0;
    }

    virtual void print() override
    {
        std::cout << "RGB! " << r << std::endl;
    }

};


int main()
{
    
    RGBA color1; RGB color2; RGB color3;
    RGBA* p1; RGBA* p2; RGBA* p3;

    p1 = &color1;
    p2 = &color2;
    p3 = &color3;
    

    std::vector<RGBA*> vec{p1, p2, p3};
    for (size_t i = 0; i < vec.size() ; ++i)
    {
        vec[i]->print();

    }
    // color2.get_r();
    // color2.set_r(169);
    // color2.get_r();

    // std::vector<int> vec{1, 2, 3};
    // std::cout << vec[1] << std::endl;

    return 0;
}