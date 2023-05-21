double Celsius_para_Fahrenheit(double celsius){
    double F = (celsius * 9.0/5.0) + 32;
    return F;
}

double Celsius_para_Kelvin(double celsius){
    double K = celsius + 273.15;
    return K;
}

double Fahrenheit_para_Celsius(double fahrenheit){
    double C = (fahrenheit - 32.0)*(5.0/9.0);
    return C;
}

double Fahrenheit_para_Kelvin(double fahrenheit){
    double C = Fahrenheit_para_Celsius(fahrenheit);
    double K =  Celsius_para_Kelvin(C);
    return K;
}

double Kelvin_para_Celsius(double kelvin){
    double C = kelvin - 273.15;
    return C;
}

double Kelvin_para_Fahrenheit(double kelvin){
    double C = Kelvin_para_Celsius(kelvin);
    double F = Celsius_para_Fahrenheit(C);
    return F;
}