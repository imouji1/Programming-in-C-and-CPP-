    #ifndef COMPLEX_H_
    #define COMPLEX_H_
    #include <iostream>

    using namespace std;

     //template <class T>
    class Complex {
        private:
            int rn;
            int im;
        public:
            Complex();
            Complex(int, int);
            Complex(Complex&);
            //Complex operator==(const Complex&);
            bool operator==(const Complex& c)
{
    if(rn != c.rn || im != c.im)
        return false;
    else 
        return true;
}

    };
    Complex::Complex()
    {
        rn = 1;
        im = 9;
    }

     Complex::Complex(int real, int imag)
    {
        rn = real;
        im = imag;
    }
    Complex::Complex(Complex& c)
    {
        rn = c.rn;
        im = c.im;

    }
 
    template <typename T>   
    int array_search(T arr[], int size, T elem)
    {
        for(int i = 0; i < size; i++)
        {

                if(arr[i] == elem)
                    return i;         
        }
        return -1;
        
    }



#endif //COMPLEX_H_