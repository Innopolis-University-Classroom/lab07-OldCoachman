template <class Calculator> Calculator {
    template<typename T>
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T addition<T>(n1, n2) {
        return n1+n2;
    }

    T subtraction<T>(n1, n2) {
        return n1-n2;
    }

    T multiplication<T>(n1, n2) {
        return n1*n2;
    }

    T division<T>(n1, n2) {
        return n1/n2;
    }
};















