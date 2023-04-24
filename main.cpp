#include <iostream>
#include <SFML/Graphics.hpp>

#pragma "once"

using namespace std;

sf::RectangleShape textBox() {

    // Set up the rectangle
    sf::RectangleShape rectangle(sf::Vector2f(200, 50));
    rectangle.setFillColor(sf::Color::White);
    rectangle.setOutlineThickness(2);
    rectangle.setOutlineColor(sf::Color::Black);

    return rectangle;
}

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    //window.setFramerateLimit(60);

    //Font
    sf::Font font;
    font.loadFromFile("arial.ttf");

    //==========Set Up text box, text, and inputs for car make==========
    sf::RectangleShape carMakeRectangle = textBox();
    std::string carMakeInput;

    //Hold text for car make
    sf::Text carMakeText;
    carMakeText.setFont(font);
    carMakeText.setCharacterSize(24);
    carMakeText.setFillColor(sf::Color::Black);
    carMakeText.setString("");

    //Car make Heading
    sf::Text makeHeading("Car Make", font, 36);
    makeHeading.setFillColor(sf::Color::Blue);


    //==========Set up text, box, text, and inputs for zip code==========
    sf::RectangleShape zipCodeRectangle = textBox();
    std::string zipCodeInput;

    //Hold text for zip code
    sf::Text zipCodeText;
    zipCodeText.setFont(font);
    zipCodeText.setCharacterSize(24);
    zipCodeText.setFillColor(sf::Color::Black);
    zipCodeText.setString("");

    //Zip code Heading
    sf::Text zipCodeHeading("Zip Code", font, 36);
    zipCodeHeading.setFillColor(sf::Color::Blue);


    //==========Set up text, box, text, and inputs for min price==========
    sf::RectangleShape minPriceRectangle = textBox();
    std::string minPriceInput;

    //Hold text for min price
    sf::Text minPriceText;
    minPriceText.setFont(font);
    minPriceText.setCharacterSize(24);
    minPriceText.setFillColor(sf::Color::Black);
    minPriceText.setString("");

    //Min price Heading
    sf::Text minPriceHeading("Min Price", font, 36);
    minPriceHeading.setFillColor(sf::Color::Blue);


    //==========Set up text, box, text, and inputs for max price==========
    sf::RectangleShape maxPriceRectangle = textBox();
    std::string maxPriceInput;

    //Hold text for max price
    sf::Text maxPriceText;
    maxPriceText.setFont(font);
    maxPriceText.setCharacterSize(24);
    maxPriceText.setFillColor(sf::Color::Black);
    maxPriceText.setString("");

    //Max price Heading
    sf::Text maxPriceHeading("Max Price", font, 36);
    maxPriceHeading.setFillColor(sf::Color::Blue);


    //==========Set up text, box, text, and inputs for body type==========
    sf::RectangleShape bodyTypeRectangle = textBox();
    std::string bodyTypeInput;

    //Hold text for body type
    sf::Text bodyTypeText;
    bodyTypeText.setFont(font);
    bodyTypeText.setCharacterSize(24);
    bodyTypeText.setFillColor(sf::Color::Black);
    bodyTypeText.setString("");

    //Body type Heading
    sf::Text bodyTypeHeading("Body Type", font, 36);
    bodyTypeHeading.setFillColor(sf::Color::Blue);


    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) { //Exit program
                window.close();
            }

            //User is typing in the car make text box
            if (event.type == sf::Event::TextEntered && carMakeRectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {

                if (event.text.unicode < 128 && event.text.unicode != '\b') { //Get input for car make

                    carMakeText.setString(carMakeText.getString() + static_cast<char>(event.text.unicode));
                    carMakeInput = carMakeText.getString();
                }
                else if (event.text.unicode == '\b') { // Handle backspace

                    std::string str = carMakeText.getString();
                    if (str.size() > 0) {
                        str.pop_back();
                        carMakeText.setString(str);
                        carMakeInput = carMakeText.getString();
                    }
                }
            }

            //User is typing in the zip code text box
            if (event.type == sf::Event::TextEntered && zipCodeRectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {

                if (event.text.unicode < 128 && event.text.unicode != '\b') { //Get input for zip code

                    zipCodeText.setString(zipCodeText.getString() + static_cast<char>(event.text.unicode));

                    zipCodeInput = zipCodeText.getString();
                }
                else if (event.text.unicode == '\b') { // Handle backspace

                    std::string str = zipCodeText.getString();
                    if (str.size() > 0) {
                        str.pop_back();
                        zipCodeText.setString(str);
                        zipCodeInput = zipCodeText.getString();
                    }
                }
            }

            //User is typing in the min price text box
            if (event.type == sf::Event::TextEntered && minPriceRectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {

                if (event.text.unicode < 128 && event.text.unicode != '\b') { //Get input for zip code

                    minPriceText.setString(minPriceText.getString() + static_cast<char>(event.text.unicode));

                    minPriceInput = minPriceText.getString();
                }
                else if (event.text.unicode == '\b') { // Handle backspace

                    std::string str = minPriceText.getString();
                    if (str.size() > 0) {
                        str.pop_back();
                        minPriceText.setString(str);
                        minPriceInput = minPriceText.getString();
                    }
                }
            }

            //User is typing in the max price text box
            if (event.type == sf::Event::TextEntered && maxPriceRectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {

                if (event.text.unicode < 128 && event.text.unicode != '\b') { //Get input for zip code

                    maxPriceText.setString(maxPriceText.getString() + static_cast<char>(event.text.unicode));

                    maxPriceInput = maxPriceText.getString();
                }
                else if (event.text.unicode == '\b') { // Handle backspace

                    std::string str = maxPriceText.getString();
                    if (str.size() > 0) {
                        str.pop_back();
                        maxPriceText.setString(str);
                        maxPriceInput = maxPriceText.getString();
                    }
                }
            }

            //User is typing in the body type text box
            if (event.type == sf::Event::TextEntered && bodyTypeRectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {

                if (event.text.unicode < 128 && event.text.unicode != '\b') { //Get input for zip code

                    bodyTypeText.setString(bodyTypeText.getString() + static_cast<char>(event.text.unicode));

                    bodyTypeInput = bodyTypeText.getString();
                }
                else if (event.text.unicode == '\b') { // Handle backspace

                    std::string str = bodyTypeText.getString();
                    if (str.size() > 0) {
                        str.pop_back();
                        bodyTypeText.setString(str);
                        bodyTypeInput = bodyTypeText.getString();
                    }
                }
            }
        }

        window.clear(sf::Color::White);


        //Draw input for make of car
        carMakeRectangle.setPosition(50,50);
        makeHeading.setPosition(carMakeRectangle.getPosition().x, carMakeRectangle.getPosition().y - 50);
        carMakeText.setPosition(carMakeRectangle.getPosition().x + 10, carMakeRectangle.getPosition().y + 10);
        window.draw(carMakeRectangle);
        window.draw(makeHeading);
        window.draw(carMakeText);

        //Draw input for zip code
        zipCodeRectangle.setPosition(400,50);
        zipCodeHeading.setPosition(zipCodeRectangle.getPosition().x, zipCodeRectangle.getPosition().y - 50);
        zipCodeText.setPosition(zipCodeRectangle.getPosition().x + 10, zipCodeRectangle.getPosition().y + 10);
        window.draw(zipCodeRectangle);
        window.draw(zipCodeHeading);
        window.draw(zipCodeText);

        //Draw inputs input for min price
        minPriceRectangle.setPosition(50,200);
        minPriceHeading.setPosition(minPriceRectangle.getPosition().x, minPriceRectangle.getPosition().y - 50);
        minPriceText.setPosition(minPriceRectangle.getPosition().x + 10, minPriceRectangle.getPosition().y + 10);
        window.draw(minPriceRectangle);
        window.draw(minPriceHeading);
        window.draw(minPriceText);

        //Draw input for max price
        maxPriceRectangle.setPosition(400,200);
        maxPriceHeading.setPosition(maxPriceRectangle.getPosition().x, maxPriceRectangle.getPosition().y - 50);
        maxPriceText.setPosition(maxPriceRectangle.getPosition().x + 10, maxPriceRectangle.getPosition().y + 10);
        window.draw(maxPriceRectangle);
        window.draw(maxPriceHeading);
        window.draw(maxPriceText);

        //Draw input for body type
        bodyTypeRectangle.setPosition(50,350);
        bodyTypeHeading.setPosition(bodyTypeRectangle.getPosition().x, bodyTypeRectangle.getPosition().y - 50);
        bodyTypeText.setPosition(bodyTypeRectangle.getPosition().x + 10, bodyTypeRectangle.getPosition().y + 10);
        window.draw(bodyTypeRectangle);
        window.draw(bodyTypeHeading);
        window.draw(bodyTypeText);


        window.display();
    }


    std::cout << "Car Make = " << carMakeInput << std::endl;

    int actualZipCode = stoi(zipCodeInput);
    std::cout << "ZipCode = " << actualZipCode << std::endl;

    int actualMinPrice = stoi(minPriceInput);
    std::cout << "Min Price = " << actualMinPrice << std::endl;

    int actualMaxPrice = stoi(maxPriceInput);
    std::cout << "Max Price = " << actualMaxPrice << std::endl;

    std::cout << "Body Type = " << bodyTypeInput << std::endl;

    return 0;
}