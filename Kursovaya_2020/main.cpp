#include <SFML/Graphics.hpp>
#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#include "Model.h"
#include "View.h"

#pragma warning(disable: 4996)

using namespace sf;

RenderWindow window(VideoMode(800, 600), "Labyrinth"); //Creating window

Massive mass;
std::string way;

void show()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            switch (mass.getElemBuild(i, j))
            {
            case 0:
            {
                way = "images/empty.png";
                break;
            }
            case 1:
            {
                way = "images/wall.png";
                break;
            }
            case 2:
            {
                way = "images/trap.png";
                break;
            }
            case 3:
            {
                way = "images/trasure.png";
                break;
            }
            case 4:
            {
                way = "images/trasure.png";
                break;
            }
            case 11:
            {
                way = "images/1.png";
                break;
            }
            case 12:
            {
                way = "images/2.png";
                break;
            }
            case 13:
            {
                way = "images/3.png";
                break;
            }
            case 14:
            {
                way = "images/4.png";
                break;
            }
            case 15:
            {
                way = "images/5.png";
                break;
            }
            case 16:
            {
                way = "images/6.png";
                break;
            }
            case 17:
            {
                way = "images/7.png";
                break;
            }
            case 18:
            {
                way = "images/8.png";
                break;
            }
            case 19:
            {
                way = "images/9.png";
                break;
            }
            case 20:
            {
                way = "images/10.png";
                break;
            }
            case 21:
            {
                way = "images/pit_in_1.png";
                break;
            }
            case 22:
            {
                way = "images/pit_in_2.png";
                break;
            }
            case 23:
            {
                way = "images/pit_in_3.png";
                break;
            }
            case 24:
            {
                way = "images/pit_in_4.png";
                break;
            }
            case 31:
            {
                way = "images/pit_out_1.png";
                break;
            }
            case 32:
            {
                way = "images/pit_out_2.png";
                break;
            }
            case 33:
            {
                way = "images/pit_out_3.png";
                break;
            }
            case 34:
            {
                way = "images/pit_out_4.png";
                break;
            }
            case 90:
            {
                way = "images/select.png";
                break;
            }
            default:
                break;
            }
            picture(window, j, i, way);
        }
    }

}

void show_board()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            switch (mass.getElemPlayer(i, j))
            {
            case 0:
            {
                way = "images/empty.png";
                break;
            }
            case 1:
            {
                way = "images/wall.png";
                break;
            }
            case 2:
            {
                way = "images/trap.png";
                break;
            }
            case 3:
            {
                way = "images/trasure.png";
                break;
            }
            case 4:
            {
                way = "images/trasure.png";
                break;
            }
            case 11:
            {
                way = "images/1.png";
                break;
            }
            case 12:
            {
                way = "images/2.png";
                break;
            }
            case 13:
            {
                way = "images/3.png";
                break;
            }
            case 14:
            {
                way = "images/4.png";
                break;
            }
            case 15:
            {
                way = "images/5.png";
                break;
            }
            case 16:
            {
                way = "images/6.png";
                break;
            }
            case 17:
            {
                way = "images/7.png";
                break;
            }
            case 18:
            {
                way = "images/8.png";
                break;
            }
            case 19:
            {
                way = "images/9.png";
                break;
            }
            case 20:
            {
                way = "images/10.png";
                break;
            }
            case 21:
            {
                way = "images/pit_in_1.png";
                break;
            }
            case 22:
            {
                way = "images/pit_in_2.png";
                break;
            }
            case 23:
            {
                way = "images/pit_in_3.png";
                break;
            }
            case 24:
            {
                way = "images/pit_in_4.png";
                break;
            }
            case 31:
            {
                way = "images/pit_out_1.png";
                break;
            }
            case 32:
            {
                way = "images/pit_out_2.png";
                break;
            }
            case 33:
            {
                way = "images/pit_out_3.png";
                break;
            }
            case 34:
            {
                way = "images/pit_out_4.png";
                break;
            }
            case 90:
            {
                way = "images/select.png";
                break;
            }
            default:
                break;
            }
            picture(window, j, i, way);
        }
    }

}

void player(int x, int y)
{
    picture(window, y, x, "images/player.png");
}

void clear()
{
    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            if (i > 0 && i < 11 && j > 0 && j < 11)
                mass.setElemPlayer(i, j, 0);
        }
    }
}

int main(int argc, char* argv[])
{
    int width = -1;
    int heigth = -1;
    int playerx = 0;
    int playery = 10;
    char pos[1];
    int menu = 0;
    int pos_int = 0;
    int trap = 0;
    int trasure = 0;
    int ftrasure = 0;
    int fwin = 0;
    int win = 0;
    int flag = 1; // Who playing

    while (window.isOpen()) // While window is opened
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        
        switch (menu)
        {
        case 0: // Main menu
        {
            window.clear(); //Clear
            show();
            text(window, 150, 0, "Select mod:");
            text(window, 150, 20, "1 - Buidl");
            text(window, 150, 40, "2 - Play");
            text(window, 150, 60, "3 - Exit");
            window.display(); // Show

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
            window.clear();
            show();
            text(window, 150, 0, "Build mod:");
            text(window, 150, 20, "1 - Select position");
            text(window, 150, 40, "2 - Exit");
            window.display();

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
            // Connection
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

            while (newConnection == 0) {} // While no connection
            std::cout << "Connected" << std::endl;

            // Send build map
            for (int i = 0; i < 13; ++i)
            {
                for (int j = 0; j < 13; ++j)
                {
                    pos_int = mass.getElemBuild(i, j);
                    pos[0] = (char)pos_int;
                    send(newConnection, pos, sizeof(pos), NULL);
                }
            }

            //Get enemy map
            for (int i = 0; i < 13; ++i)
            {
                for (int j = 0; j < 13; ++j)
                {
                    recv(newConnection, pos, sizeof(pos), NULL);
                    mass.setElemBuild(i, j, (int)pos[0]);
                }
            }

            // Add in player map enemy map (for gates)
            for (int i = 0; i < 13; ++i)
            {
                for (int j = 0; j < 13; ++j)
                {
                    mass.setElemPlayer(i, j, mass.getElemBuild(i, j));
                }
            }
            
            clear(); // clear player map

            while (win == 0)
            {
                window.clear();
                show_board();
                player(playerx, playery);
                text(window, 150, 0, "Where go?");
                text(window, 150, 20, "Up");
                text(window, 150, 40, "Down");
                text(window, 150, 60, "Left");
                text(window, 150, 80, "Rignt");

                if (trap != 0)
                    text(window, 0, 130, "Traped");
                if (trasure != 0 || ftrasure != 0)
                    text(window, 0, 150, "Trasure");
                if (fwin == 1)
                {
                    ftrasure = 0;
                    fwin = 0;
                    text(window, 0, 170, "Fake Trasure!");
                }
                window.display();

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
                                if (mass.getElemBuild(playerx + 1, playery) == 1)
                                    mass.setElemPlayer(playerx + 1, playery, 1);
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
                                if (mass.getElemBuild(playerx - 1, playery) == 1)
                                    mass.setElemPlayer(playerx - 1, playery, 1);
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
                                if (mass.getElemBuild(playerx, playery - 1) == 1)
                                    mass.setElemPlayer(playerx, playery - 1, 1);
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
                                if (mass.getElemBuild(playerx, playery + 1) == 1)
                                    mass.setElemPlayer(playerx, playery + 1, 1);
                                else
                                    ++playery;
                            }
                            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1) {}
                        }
                    }
                }
                switch (mass.getElemBuild(playerx, playery))
                {
                case 2:
                {
                    trap = 3;
                    mass.setElemBuild(playerx, playery, 0);
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
                    mass.setElemPlayer(playerx, playery, 21);
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass.getElemBuild(i, j) == 31)
                            {
                                mass.setElemPlayer(i, j, 31);
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 22:
                {
                    mass.setElemPlayer(playerx, playery, 22);
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass.getElemBuild(i, j) == 32)
                            {
                                mass.setElemPlayer(i, j, 32);
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 23:
                {
                    mass.setElemPlayer(playerx, playery, 23);
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass.getElemBuild(i, j) == 33)
                            {
                                mass.setElemPlayer(i, j, 33);
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 24:
                {
                    mass.setElemPlayer(playerx, playery, 24);
                    for (int i = 0; i < 13; ++i)
                    {
                        for (int j = 0; j < 13; ++j)
                        {
                            if (mass.getElemBuild(i, j) == 34)
                            {
                                mass.setElemPlayer(i, j, 34);
                                playerx = i;
                                playery = j;
                            }
                        }
                    }
                    break;
                }
                case 31:
                {
                    mass.setElemPlayer(playerx, playery, 31);
                    break;
                }
                case 32:
                {
                    mass.setElemPlayer(playerx, playery, 32);
                    break;
                }
                case 33:
                {
                    mass.setElemPlayer(playerx, playery, 33);
                    break;
                }
                case 34:
                {
                    mass.setElemPlayer(playerx, playery, 34);
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
            window.clear();
            show();
            if (width == -1 && heigth == -1)
            {
                text(window, 150, 0, "Select width:");
                window.display();
            }

            while (width == -1 && heigth == -1)
            {
                window.clear();
                show();
                while (width == -1)
                {
                    if (Keyboard::isKeyPressed(Keyboard::Up))
                    {
                        width = 0;
                        text(window, 150, 0, "Selected  width: 0");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Down))
                    {
                        width = 11;
                        text(window, 150, 0, "Selected width: 11");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num1))
                    {
                        width = 1;
                        text(window, 150, 0, "Selected width: 1");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    {
                        width = 2;
                        text(window, 150, 0, "Selected width: 2");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    {
                        width = 3;
                        text(window, 150, 0, "Selected width: 3");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num4))
                    {
                        width = 4;
                        text(window, 150, 0, "Selected width: 4");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num5))
                    {
                        width = 5;
                        text(window, 150, 0, "Selected width: 5");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num6))
                    {
                        width = 6;
                        text(window, 150, 0, "Selected width: 6");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num7))
                    {
                        width = 7;
                        text(window, 150, 0, "Selected width: 7");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num8))
                    {
                        width = 8;
                        text(window, 150, 0, "Selected width: 8");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num9))
                    {
                        width = 9;
                        text(window, 150, 0, "Selected width: 9");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num0))
                    {
                        width = 10;
                        text(window, 150, 0, "Selected width: 10");
                    }
                }
                window.display();
                while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

                window.clear();
                show();
                if (width == 0)
                    text(window, 150, 0, "Selected width: 0");
                else if (width == 1)
                    text(window, 150, 0, "Selected width: 1");
                else if (width == 2)
                    text(window, 150, 0, "Selected width: 2");
                else if (width == 3)
                    text(window, 150, 0, "Selected width: 3");
                else if (width == 4)
                    text(window, 150, 0, "Selected width: 4");
                else if (width == 5)
                    text(window, 150, 0, "Selected width: 5");
                else if (width == 6)
                    text(window, 150, 0, "Selected width: 6");
                else if (width == 7)
                    text(window, 150, 0, "Selected width: 7");
                else if (width == 8)
                    text(window, 150, 0, "Selected width: 8");
                else if (width == 9)
                    text(window, 150, 0, "Selected width: 9");
                else if (width == 10)
                    text(window, 150, 0, "Selected width: 10");
                else if (width == 11)
                    text(window, 150, 0, "Selected width: 11");
                window.display();

                text(window, 150, 20, "Select heigth:");
                window.display();

                while (heigth == -1)
                {
                    if (Keyboard::isKeyPressed(Keyboard::Left))
                    {
                        heigth = 0;
                        text(window, 150, 20, "Selected heigth: 0");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num1))
                    {
                        heigth = 1;
                        text(window, 150, 20, "Selected heigth: 1");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num2))
                    {
                        heigth = 2;
                        text(window, 150, 20, "Selected heigth: 2");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num3))
                    {
                        heigth = 3;
                        text(window, 150, 20, "Selected heigth: 3");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num4))
                    {
                        heigth = 4;
                        text(window, 150, 20, "Selected heigth: 4");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num5))
                    {
                        heigth = 5;
                        text(window, 150, 20, "Selected heigth: 5");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num6))
                    {
                        heigth = 6;
                        text(window, 150, 20, "Selected heigth: 6");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num7))
                    {
                        heigth = 7;
                        text(window, 150, 20, "Selected heigth: 7");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num8))
                    {
                        heigth = 8;
                        text(window, 150, 20, "Selected heigth: 8");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num9))
                    {
                        heigth = 9;
                        text(window, 150, 20, "Selected heigth: 9");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Num0))
                    {
                        heigth = 10;
                        text(window, 150, 20, "Selected heigth: 10");
                    }
                    else if (Keyboard::isKeyPressed(Keyboard::Right))
                    {
                        heigth = 11;
                        text(window, 150, 20, "Selected heigth: 11");
                    }
                }
                window.display();
                while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);
            }

            if (width > 0 && width < 11 && heigth > 0 && heigth < 11)
            {
                mass.setElemBuild(width, heigth, 90);
                menu = 5;
            }
            else
            {
                mass.setElemBuild(width, heigth, 0);
                width = heigth = -1;
                menu = 1;
            }

            break;
        }
        case 5:
        {
            window.clear();
            show();
            text(window, 150, 0, "What to do:");
            text(window, 150, 20, "1 - Build");
            text(window, 150, 40, "2 - Clear");
            window.display();

            while (menu == 5)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                    menu = 6;
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass.setElemBuild(width, heigth, 0);
                    width = heigth = -1;
                    menu = 1;
                }
            }
            while (Keyboard::isKeyPressed(Keyboard::Enter) != 1);

            break;
        }
        case 6:
        {
            window.clear();
            show();
            text(window, 150, 0, "What to build:");
            text(window, 150, 20, "1 - Wall");
            text(window, 150, 40, "2 - Trap");
            text(window, 150, 60, "3 - Pit in");
            text(window, 150, 80, "4 - Pit out");
            text(window, 150, 100, "5 - Trasure");
            text(window, 150, 120, "6 - Exit");
            window.display();

            while (menu == 6)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass.setElemBuild(width, heigth, 1);
                    width = heigth = -1;
                    menu = 1;
                }
                if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass.setElemBuild(width, heigth, 2);
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
            window.clear();
            show();
            text(window, 150, 0, "Select pit:");
            text(window, 150, 20, "1 - Pit 1");
            text(window, 150, 40, "2 - Pit 2");
            text(window, 150, 60, "3 - Pit 3");
            text(window, 150, 80, "4 - Pit 4");
            text(window, 150, 100, "5 - Back");
            window.display();

            while (menu == 7)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass.setElemBuild(width, heigth, 21);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass.setElemBuild(width, heigth, 22);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                {
                    mass.setElemBuild(width, heigth, 23);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num4))
                {
                    mass.setElemBuild(width, heigth, 24);
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
            window.clear();
            show();
            text(window, 150, 0, "Select pit:");
            text(window, 150, 20, "1 - Pit 1");
            text(window, 150, 40, "2 - Pit 2");
            text(window, 150, 60, "3 - Pit 3");
            text(window, 150, 80, "4 - Pit 4");
            text(window, 150, 100, "5 - Back");
            window.display();

            while (menu == 8)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass.setElemBuild(width, heigth, 31);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass.setElemBuild(width, heigth, 32);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num3))
                {
                    mass.setElemBuild(width, heigth, 33);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num4))
                {
                    mass.setElemBuild(width, heigth, 34);
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
            window.clear();
            show();
            text(window, 150, 0, "Select trasure:");
            text(window, 150, 20, "1 - Real");
            text(window, 150, 40, "2 - Unreal");
            text(window, 150, 60, "3 - Back");
            window.display();

            while (menu == 9)
            {
                if (Keyboard::isKeyPressed(Keyboard::Num1))
                {
                    mass.setElemBuild(width, heigth, 3);
                    width = heigth = -1;
                    menu = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Num2))
                {
                    mass.setElemBuild(width, heigth, 4);
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
            window.clear();
            show();
            text(window, 130, 0, "You win!:");
            window.display();

            break;
        }
        default:
            break;
        }

    }

    return 0;
}