#include <SFML/Graphics.hpp>
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>

#pragma warning(disable: 4996)

using namespace sf;

RenderWindow window(VideoMode(800, 600), "Labyrinth"); //создание окна

Image image;
Texture texture;
Sprite sprite;

int mass_b[13][13] =
{
1,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
0,  2,  1,  0,  0,  0,  0,  0,  0,  1,  0, 1, 11,
1,  0,  1,  1,  0,  1,  1,  1,  0,  1,  0, 1, 12,
1,  3,  0,  1,  0,  0,  0,  1,  0,  1,  0, 1, 13,
1,  0,  0,  1,  1,  1,  1,  1,  0,  1,  0, 1, 14,
1,  4,  0,  0,  0,  0,  0,  1,  0,  1,  0, 1, 15,
1,  0,  1,  1,  0,  1,  0,  1,  0,  1,  0, 1, 16,
1, 21, 31,  1,  0,  1,  1,  1,  0,  1,  0, 1, 17,
1,  1,  1,  1,  0,  0,  0,  0,  0,  1,  0, 1, 18,
1,  0,  1,  1,  0,  1,  1,  1,  1,  1,  0, 1, 19,
1, 22, 32,  0, 23, 33,  0, 34, 24,  0,  0, 0, 20,
1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0, 1,  0,
0, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0,  0,
};

int mass_p[13][13] =
{
1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 11,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 12,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 13,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 14,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 15,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 16,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 17,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 18,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 19,
1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 1, 20,
1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 1,  0,
0, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0,  0,
};


void show()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            switch (mass_b[i][j])
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

void show_board()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            switch (mass_p[i][j])
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

void player(int x, int y)
{
    image.loadFromFile("images/player.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);

    sprite.setPosition((float)(y * 10), (float)(x * 10));
    window.draw(sprite);
}

void clear()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            if (i > 0 && i < 11 && j > 0 && j < 11)
                mass_p[i][j] = 0;
        }
    }
}

int main(int argc, char* argv[])
{
    Font font;
    font.loadFromFile("CyrilicOld.ttf");
    Text text("", font, 20);
    text.setFillColor(Color::White);

    int width = -1;
    int heigth = -1;
    int menu = 0;
    int playerx = 0;
    int playery = 10;
    char pos[1];
    int pos_int;
    int trap = 0;
    int trasure = 0;
    int ftrasure = 0;
    int fwin = 0;
    int flag = 1; //кто ходит
    int win = 0;

    while (window.isOpen()) //пока открыто окно
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
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

            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 1;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    menu = 2;
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    menu = 3;
            }
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
            text.setPosition(160, 60);
            window.draw(text);

            window.display(); //показать

            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 4;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    menu = 0;
            }

            break;
        }
        case 2:
        {
            WSAData wsaData;
            WORD DLLVersion = MAKEWORD(2, 1);
            if (WSAStartup(DLLVersion, &wsaData) != 0)
            {
                std::cout << "Library not loaded" << std::endl;
                exit(1);
            }
            SOCKADDR_IN addr;
            int sizeofaddr = sizeof(addr);
            addr.sin_addr.s_addr = inet_addr("127.0.0.1");
            addr.sin_port = htons(1111);
            addr.sin_family = AF_INET;

            SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);
            bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
            listen(sListen, SOMAXCONN);

            SOCKET newConnection;
            newConnection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);

            while (newConnection == 0) {}
            std::cout << "Connected" << std::endl;

            for (int i = 0; i < 13; ++i)
            {
                for (int j = 0; j < 13; ++j)
                {
                    pos_int = mass_b[i][j];
                    pos[0] = (char)pos_int;
                    send(newConnection, pos, sizeof(pos), NULL);
                }
            }

            for (int i = 0; i < 13; ++i)
            {
                for (int j = 0; j < 13; ++j)
                {
                    recv(newConnection, pos, sizeof(pos), NULL);
                    mass_b[i][j] = (int)pos[0];
                }
            }

            for (int i = 0; i < 13; ++i)
            {
                for (int j = 0; j < 13; ++j)
                {
                    mass_p[i][j] = mass_b[i][j];
                }
            }

            clear();

            while (win == 0)
            {
                window.clear();
                show_board();
                player(playerx, playery);
                text.setString("Where go?");
                text.setPosition(150, 0);
                window.draw(text);
                text.setString("Up");
                text.setPosition(150, 20);
                window.draw(text);
                text.setString("Down");
                text.setPosition(150, 40);
                window.draw(text);
                text.setString("Left");
                text.setPosition(150, 60);
                window.draw(text);
                text.setString("Rignt");
                text.setPosition(150, 80);
                window.draw(text);
                if (trap != 0)
                {
                    text.setString("Traped");
                    text.setPosition(0, 130);
                    window.draw(text);
                }
                if (trasure != 0 || ftrasure != 0)
                {
                    text.setString("Trasure!");
                    text.setPosition(0, 150);
                    window.draw(text);
                }
                if (fwin == 1)
                {
                    ftrasure = 0;
                    fwin = 0;
                    text.setString("Fake Trasure!");
                    text.setPosition(0, 170);
                    window.draw(text);

                }
                window.display(); //показать

                while (flag == 0)
                {
                    recv(newConnection, pos, sizeof(pos), NULL);
                    flag = (int)pos[0];
                }

                while (flag == 1 && trap == 0)
                {
                    if ((playerx == 0 || playerx == 11 || playery == 0 || playery == 11) && ftrasure == 1)
                    {
                        flag = 0;
                        fwin = 1;
                    }
                    if ((playerx == 0 || playerx == 11 || playery == 0 || playery == 11) && trasure == 1)
                    {
                        flag = 0;
                        win = 1;
                    }
                    else
                    {
                        if (Keyboard::isKeyPressed(Keyboard::Down))
                        {
                            if (playerx != 11)
                            {
                                flag = 0;
                                if (mass_b[playerx + 1][playery] == 1)
                                    mass_p[playerx + 1][playery] = 1;
                                else
                                    ++playerx;
                            }
                            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1) {}
                        }
                        if (Keyboard::isKeyPressed(Keyboard::Up))
                        {
                            if (playerx != 0)
                            {
                                flag = 0;
                                if (mass_b[playerx - 1][playery] == 1)
                                    mass_p[playerx - 1][playery] = 1;
                                else
                                    --playerx;
                            }
                            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1) {}
                        }
                        if (Keyboard::isKeyPressed(Keyboard::Left))
                        {
                            if (playery != 0)
                            {
                                flag = 0;
                                if (mass_b[playerx][playery - 1] == 1)
                                    mass_p[playerx][playery - 1] = 1;
                                else
                                    --playery;
                            }
                            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1) {}
                        }
                        if (Keyboard::isKeyPressed(Keyboard::Right))
                        {
                            if (playery != 11)
                            {
                                flag = 0;
                                if (mass_b[playerx][playery + 1] == 1)
                                    mass_p[playerx][playery + 1] = 1;
                                else
                                    ++playery;
                            }
                            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1) {}
                        }
                    }
                }
                switch (mass_b[playerx][playery])
                {
                case 2:
                {
                    trap = 3;
                    mass_b[playerx][playery] = 0;
                    break;
                }
                case 3:
                {
                    trasure = 1;
                    break;
                }
                case 4:
                {
                    ftrasure = 1;
                    break;
                }
                case 21:
                {
                    mass_p[playerx][playery] = 21;
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass_b[i][j] == 31)
                            {
                                mass_p[i][j] = 31;
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 22:
                {
                    mass_p[playerx][playery] = 22;
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass_b[i][j] == 32)
                            {
                                mass_p[i][j] = 32;
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 23:
                {
                    mass_p[playerx][playery] = 23;
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass_b[i][j] == 33)
                            {
                                mass_p[i][j] = 33;
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 24:
                {
                    mass_p[playerx][playery] = 24;
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass_b[i][j] == 34)
                            {
                                mass_p[i][j] = 34;
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 31:
                {
                    mass_p[playerx][playery] = 31;
                    break;
                }
                case 32:
                {
                    mass_p[playerx][playery] = 32;
                    break;
                }
                case 33:
                {
                    mass_p[playerx][playery] = 32;
                    break;
                }
                case 34:
                {
                    mass_p[playerx][playery] = 32;
                    break;
                }
                default:
                    break;
                }

                if (trap != 0)
                {
                    flag = 0;
                    --trap;
                }
                if (win == 0)
                {
                    pos[0] = (char)1;
                    send(newConnection, pos, sizeof(pos), NULL);
                }
                else
                    menu = 10;
            }
            break;
        }
        case 3:
        {
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1)
                window.close();
            break;
        }
        case 4:
        {
            window.clear(); //очистить
            show();
            if (width == -1 && heigth == -1)
            {
                text.setString("Select width:");
                text.setPosition(150, 0);
                window.draw(text);
                window.display(); //показать
            }

            while (width == -1 && heigth == -1)
            {
                window.clear(); //очистить
                show();
                while (width == -1)
                {
                    if (Keyboard::isKeyPressed(Keyboard::Up))
                    {
                        width = 0;
                        text.setString("Selected width: 0");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Down))
                    {
                        width = 11;
                        text.setString("Selected width: 0");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num1))
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
                else if (width == 0)
                    text.setString("Selected width: 0");
                else if (width == 11)
                    text.setString("Selected width: 11");

                text.setPosition(150, 0);
                window.draw(text);
                window.display(); //показать

                text.setString("Select heigth:");
                text.setPosition(150, 20);
                window.draw(text);
                window.display(); //показать

                while (heigth == -1)
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
                    else if (Keyboard::isKeyPressed(Keyboard::Left))
                    {
                        heigth = 0;
                        text.setString("Selected heigth: 0");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Right))
                    {
                        heigth = 11;
                        text.setString("Selected heigth: 11");
                    }
                }
                text.setPosition(150, 20);
                window.draw(text);
                window.display(); //показать
                while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);
            }

            if (width > 0 && width < 11 && heigth > 0 && heigth < 11)
            {
                mass_b[width][heigth] = 90;
                menu = 5;
            }
            else
            {
                mass_b[width][heigth] = 0;
                width = heigth = -1;
                menu = 1;
            }

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
                    mass_b[width][heigth] = 0;
                    width = heigth = -1;
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
                    mass_b[width][heigth] = 1;
                    width = heigth = -1;
                    menu = 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass_b[width][heigth] = 2;
                    width = heigth = -1;
                    menu = 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Num3))
                    menu = 7;
                if (Keyboard::isKeyPressed(Keyboard::Num4))
                    menu = 8;
                if (Keyboard::isKeyPressed(Keyboard::Num5))
                    menu = 9;
                else if (Keyboard::isKeyPressed(Keyboard::Num6))
                {
                    width = heigth = -1;
                    menu = 1;
                }
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        case 7:
        {
            window.clear(); //очистить
            show();
            text.setString("Select pit:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Pit 1");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Pit 2");
            text.setPosition(160, 40);
            window.draw(text);
            text.setString("3 - Pit 3");
            text.setPosition(160, 60);
            window.draw(text);
            text.setString("4 - Pit 4");
            text.setPosition(160, 80);
            window.draw(text);
            text.setString("5 - Back");
            text.setPosition(160, 100);
            window.draw(text);

            window.display(); //показать

            while (menu == 7)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass_b[width][heigth] = 21;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass_b[width][heigth] = 22;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                {
                    mass_b[width][heigth] = 23;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num4))
                {
                    mass_b[width][heigth] = 24;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num5))
                    menu = 6;
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        case 8:
        {
            window.clear(); //очистить
            show();
            text.setString("Select pit:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Pit 1");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Pit 2");
            text.setPosition(160, 40);
            window.draw(text);
            text.setString("3 - Pit 3");
            text.setPosition(160, 60);
            window.draw(text);
            text.setString("4 - Pit 4");
            text.setPosition(160, 80);
            window.draw(text);
            text.setString("5 - Back");
            text.setPosition(160, 100);
            window.draw(text);

            window.display(); //показать

            while (menu == 8)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass_b[width][heigth] = 31;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass_b[width][heigth] = 32;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                {
                    mass_b[width][heigth] = 33;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num4))
                {
                    mass_b[width][heigth] = 34;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num5))
                    menu = 6;
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);
            break;
        }
        case 9:
        {
            window.clear(); //очистить
            show();
            text.setString("Select trasure:");
            text.setPosition(150, 0);
            window.draw(text);
            text.setString("1 - Real");
            text.setPosition(160, 20);
            window.draw(text);
            text.setString("2 - Unreal");
            text.setPosition(160, 40);
            window.draw(text);
            text.setString("3 - Back");
            text.setPosition(160, 60);
            window.draw(text);
            window.display(); //показать

            while (menu == 9)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass_b[width][heigth] = 3;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass_b[width][heigth] = 4;
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    menu = 6;
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);
            break;
        }
        case 10:
        {
            window.clear(); //очистить
            show();
            text.setString("You win!:");
            text.setPosition(130, 0);
            window.draw(text);
            window.display(); //показать

            break;
        }
        default:
            break;
        }

    }

    return 0;
}