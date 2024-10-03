//
// Created by gn65240 on 10/3/2024.
//

#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>

#endif //ADDRESS_H

class address {
public:
    address(string streetIn, string cityIn, string stateIn, string postalCodeIn, string countryIn) {
            street = streetIn;
            city = cityIn;
            state = stateIn;
            postal_code = postalCodeIn;
            country = countryIn;
    }

    string pretty_string() {

        return street + ", " + city + ", " + state + " " + postal_code + ", " + country;

    }


private:
    string street;
    string city;
    string state;
    string postal_code;
    string country;



};