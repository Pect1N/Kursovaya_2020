#include <SFML/Graphics.hpp>

using namespace sf;

RenderWindow window(VideoMode(800, 600), "Labyrinth"); //создание окна

Image image;
Texture texture;
Sprite sprite;

int mass[13][13] =
{
1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
1,  2,  1,  0,  0,  0,  0,  0,  0,  1,  0, 1, 11,
1,  0,  1,  1,  0,  1,  1,  1,  0,  1,  0, 1, 12,
1,  3,  0,  1,  0,  0,  0,  1,  0,  1,  0, 1, 13,
1,  0,  0,  1,  1,  1,  1,  1,  0,  1,  0, 1, 14,
1,  4,  0,  0,  0,  0,  0,  1,  0,  1,  0, 1, 15,
1,  0,  1,  1,  0,  1,  0,  1,  0,  1,  0, 1, 16,
1, 21, 31,  1,  0,  1,  1,  1,  0,  1,  0, 1, 17,
1,  1,  1,  1,  0,  0,  0,  0,  0,  1,  0, 1, 18,
1,  0,  1,  1,  0,  1,  1,  1,  1,  1,  0, 1, 19,
1, 22, 32,  0, 23, 33,  0, 34, 24,  0,  0, 1, 20,
1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
0, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0,  0,
};

void show()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            switch (mass[i][j])
            {
            case 1:
            {
                image.loadFromFile("images/wall.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 2:
            {
                image.loadFromFile("images/trap.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 3:
            {
                image.loadFromFile("images/trasure.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 4:
            {
                image.loadFromFile("images/trasure.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 11:
            {
                image.loadFromFile("images/1.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 12:
            {
                image.loadFromFile("images/2.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 13:
            {
                image.loadFromFile("images/3.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 14:
            {
                image.loadFromFile("images/4.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 15:
            {
                image.loadFromFile("images/5.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 16:
            {
                image.loadFromFile("images/6.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 17:
            {
                image.loadFromFile("images/7.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 18:
            {
                image.loadFromFile("images/8.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 19:
            {
                image.loadFromFile("images/9.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 20:
            {
                image.loadFromFile("images/10.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 21:
            {
                image.loadFromFile("images/pit_in_1.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 22:
            {
                image.loadFromFile("images/pit_in_2.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 23:
            {
                image.loadFromFile("images/pit_in_3.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 24:
            {
                image.loadFromFile("images/pit_in_4.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 31:
            {
                image.loadFromFile("images/pit_out_1.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 32:
            {
                image.loadFromFile("images/pit_out_2.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 33:
            {
                image.loadFromFile("images/pit_out_3.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 34:
            {
                image.loadFromFile("images/pit_out_4.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);
                break;
            }
            case 90:
            {
                image.loadFromFile("images/select.png");
                texture.loadFromImage(image);
                sprite.setTexture(texture);

                sprite.setPosition((float)(j * 10), (float)(i * 10));
                window.draw(sprite);

                break;
            }
            default:
                break;
            }
        }
    }

}

int main()
{
    Font font;
    font.loadFromFile("CyrilicOld.ttf");
    Text text("", font, 20);
    text.setFillColor(Color::White);

    int width = 0;
    int heigth = 0;
    int menu = 0;

    while (window.isOpen()) //пока открыто окно
    {
        switch (menu)
        {
        case 0:
        {
            window.clear(); //очистить
            show();
            text.setString("Select mod:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Buidl");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Play");
            text.setPosition(160, 40);
            window.draw(text);
            text.setString("3 - Exit");
            text.setPosition(160, 60);
            window.draw(text);

            window.display(); //показать

            while (menu == 0)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 1;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    menu = 2;
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    menu = 3;
            }

            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        case 1:
        {
            window.clear(); //очистить
            show();
            text.setString("Build mod:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Select position");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Exit");
            text.setPosition(160, 40);
            window.draw(text);

            window.display(); //показать

            while (menu == 1)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 4;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    menu = 0;
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {
            window.close();
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);
            break;
        }
        case 4:
        {
            window.clear(); //очистить
            show();
            if (width == 0 && heigth == 0)
            {
                text.setString("Select width:");
                text.setPosition(150, 0);
                window.draw(text);
                window.display(); //показать
            }

            while (width == 0 && heigth == 0)
            {
                window.clear(); //очистить
                show();
                while (width == 0)
                {
                    if (Keyboard::isKeyPressed(Keyboard::Num1))
                    {
                        width = 1;
                        text.setString("Selected width: 1");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    {
                        width = 2;
                        text.setString("Selected width: 2");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    {
                        width = 3;
                        text.setString("Selected width: 3");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num4))
                    {
                        width = 4;
                        text.setString("Selected width: 4");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num5))
                    {
                        width = 5;
                        text.setString("Selected width: 5");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num6))
                    {
                        width = 6;
                        text.setString("Selected width: 6");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num7))
                    {
                        width = 7;
                        text.setString("Selected width: 7");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num8))
                    {
                        width = 8;
                        text.setString("Selected width: 8");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num9))
                    {
                        width = 9;
                        text.setString("Selected width: 9");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num0))
                    {
                        width = 10;
                        text.setString("Selected width: 10");
                    }
                }
                text.setPosition(150, 0);
                window.draw(text);
                window.display(); //показать
                while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

                window.clear(); //очистить
                show();
                if (width == 1)
                    text.setString("Selected width: 1");
                else if (width == 2)
                    text.setString("Selected width: 2");
                else if (width == 3)
                    text.setString("Selected width: 3");
                else if (width == 4)
                    text.setString("Selected width: 4");
                else if (width == 5)
                    text.setString("Selected width: 5");
                else if (width == 6)
                    text.setString("Selected width: 6");
                else if (width == 7)
                    text.setString("Selected width: 7");
                else if (width == 8)
                    text.setString("Selected width: 8");
                else if (width == 9)
                    text.setString("Selected width: 9");
                else if (width == 10)
                    text.setString("Selected width: 10");

                text.setPosition(150, 0);
                window.draw(text);
                window.display(); //показать

                text.setString("Select heigth:");
                text.setPosition(150, 20);
                window.draw(text);
                window.display(); //показать

                while (heigth == 0)
                {
                    if (Keyboard::isKeyPressed(Keyboard::Num1))
                    {
                        heigth = 1;
                        text.setString("Selected heigth: 1");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    {
                        heigth = 2;
                        text.setString("Selected heigth: 2");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    {
                        heigth = 3;
                        text.setString("Selected heigth: 3");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num4))
                    {
                        heigth = 4;
                        text.setString("Selected heigth: 4");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num5))
                    {
                        heigth = 5;
                        text.setString("Selected heigth: 5");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num6))
                    {
                        heigth = 6;
                        text.setString("Selected heigth: 6");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num7))
                    {
                        heigth = 7;
                        text.setString("Selected heigth: 7");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num8))
                    {
                        heigth = 8;
                        text.setString("Selected heigth: 8");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num9))
                    {
                        heigth = 9;
                        text.setString("Selected heigth: 9");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num0))
                    {
                        heigth = 10;
                        text.setString("Selected heigth: 10");
                    }
                }
                text.setPosition(150, 20);
                window.draw(text);
                window.display(); //показать
                while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);
            }

            mass[width][heigth] = 90;
            menu = 5;

            break;
        }
        case 5:
        {
            window.clear(); //очистить
            show();
            text.setString("What to do:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Buidl");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Clear");
            text.setPosition(160, 40);
            window.draw(text);

            window.display(); //показать

            while (menu == 5)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 6;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass[width][heigth] = 0;
                    width = heigth = 0;
                    menu = 1;
                }
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        case 6:
        {
            window.clear(); //очистить
            show();
            text.setString("What to build:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Wall");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Trap");
            text.setPosition(160, 40);
            window.draw(text);
            text.setString("3 - pit in");
            text.setPosition(160, 60);
            window.draw(text);
            text.setString("4 - pit out");
            text.setPosition(160, 80);
            window.draw(text);
            text.setString("5 - trasure");
            text.setPosition(160, 100);
            window.draw(text);
            text.setString("6 - Exit");
            text.setPosition(160, 120);
            window.draw(text);

            window.display(); //показать

            while (menu == 6)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {

                    mass[width][heigth] = 1;
                    for (int i = 1; i < 11; ++i)
                    {
                        for (int j = 1; j < 11; j++)
                        {
                            if (mass[i][j] == 0)
                            {
                                text.setString("Already have");
                                text.setPosition(300, 00);
                                window.draw(text);
                                window.display(); //показать
                            }
                            else
                            {
                                mass[width][heigth] = 2;
                                width = heigth = 0;
                                menu = 1;
                            }
                        }
                    }
                    width = heigth = 0;
                    menu = 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; j++)
                        {
                            if (mass[i][j] == 2)
                            {
                                text.setString("Already have");
                                text.setPosition(300, 00);
                                window.draw(text);
                                window.display(); //показать
                            }
                            else
                            {
                                mass[width][heigth] = 2;
                                width = heigth = 0;
                                menu = 1;
                            }
                        }
                    }
                }
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 7;
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 8;
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 9;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    width = heigth = 0;
                    menu = 1;
                }
            }
            //while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        default:
            break;
        }

    }

    return 0;
}