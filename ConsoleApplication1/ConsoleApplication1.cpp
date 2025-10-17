#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <vector>

using namespace sf;
using namespace std;

// fonction pause
void delay(int a, Sound& sound) {
    int addi = 1;
    int i;
    int time;
    time = a * 100000000;
    for (i = 0; i < time; i++) {
        addi *= i;
        if (i == 100000) {
            sound.play();
        }

        addi *= i;
        addi++;
        addi++;
    }
}

int main()
{
    //window of game:
    RenderWindow window(VideoMode({ 800u, 500u }), "Halloween Game");

    //les rectangles:
    RectangleShape rectangle(Vector2f(258.f, 40.f));
    rectangle.setPosition(Vector2f(0.f, 460.f));
    RectangleShape rectangle1(Vector2f(183.f, 62.f));
    rectangle1.setPosition(Vector2f(297.f, 438.f));
    RectangleShape rectangle2(Vector2f(259.f, 40.f));
    rectangle2.setPosition(Vector2f(541.f, 460.f));
    RectangleShape rectangle16(Vector2f(59.f, 20.f));
    rectangle16.setPosition(Vector2f(0.f, 321.f));
    RectangleShape rectangle3(Vector2f(79.f, 20.f));
    rectangle3.setPosition(Vector2f(99.f, 321.f));
    RectangleShape rectangle4(Vector2f(50.f, 20.f));
    rectangle4.setPosition(Vector2f(212.f, 380.f));
    RectangleShape rectangle5(Vector2f(76.f, 20.f));
    rectangle5.setPosition(Vector2f(288.f, 342.f));
    RectangleShape rectangle6(Vector2f(59.f, 20.f));
    rectangle6.setPosition(Vector2f(452.f, 321.f));
    RectangleShape rectangle7(Vector2f(218.f, 38.f));
    rectangle7.setPosition(Vector2f(582.f, 360.f));
    RectangleShape rectangle8(Vector2f(98.f, 20.f));
    rectangle8.setPosition(Vector2f(0.f, 222.f));
    RectangleShape rectangle9(Vector2f(114.f, 20.f));
    rectangle9.setPosition(Vector2f(137.f, 222.f));
    RectangleShape rectangle10(Vector2f(38.f, 20.f));
    rectangle10.setPosition(Vector2f(316.f, 263.f));
    RectangleShape rectangle11(Vector2f(50.f, 20.f));
    rectangle11.setPosition(Vector2f(392.f, 263.f));
    RectangleShape rectangle12(Vector2f(76.f, 38.f));
    rectangle12.setPosition(Vector2f(505.f, 198.f));
    RectangleShape rectangle13(Vector2f(179.f, 38.f));
    rectangle13.setPosition(Vector2f(621.f, 198.f));
    RectangleShape rectangle14(Vector2f(70.f, 20.f));
    rectangle14.setPosition(Vector2f(356.f, 156.f));
    RectangleShape rectangle15(Vector2f(139.f, 38.f));
    rectangle15.setPosition(Vector2f(0.f, 80.f));
    RectangleShape rectangle17(Vector2f(156.f, 38.f));
    rectangle17.setPosition(Vector2f(178.f, 80.f));
    RectangleShape rectangle18(Vector2f(39.f, 5.f));
    rectangle18.setPosition(Vector2f(139.f, 112.f));
    RectangleShape rectangle19(Vector2f(39.f, 5.f));
    rectangle19.setPosition(Vector2f(59.f, 335.f));
    RectangleShape rectangle20(Vector2f(39.f, 5.f));
    rectangle20.setPosition(Vector2f(354.f, 277.f));
    RectangleShape rectangle21(Vector2f(39.f, 5.f));
    rectangle21.setPosition(Vector2f(581.f, 230.f));

    vector<RectangleShape> rects = { rectangle,rectangle1,rectangle2,rectangle3,rectangle4,rectangle5,rectangle6,rectangle7,rectangle8,rectangle9,rectangle10,rectangle11,rectangle12,rectangle13,rectangle14,rectangle15,rectangle16,rectangle17,rectangle18,rectangle19,rectangle20,rectangle21 };
    vector<float> rects_y = { 460,438,460,321,321,380,342,321,360,222,222,263,198,198,156,80,80,112,335,277,230 };

    //les lava:
    RectangleShape lava1(Vector2f(39.f, 30.f));
    lava1.setPosition(Vector2f(258.f, 470.f));
    lava1.setFillColor(Color::Red);
    RectangleShape lava2(Vector2f(61.f, 30.f));
    lava2.setPosition(Vector2f(480.f, 470.f));
    lava2.setFillColor(Color::Red);
    RectangleShape lava6(Vector2f(40.f, 10.f));
    lava6.setPosition(Vector2f(59.f, 326.f));
    lava6.setFillColor(Color::Red);
    RectangleShape lava3(Vector2f(38.f, 10.f));
    lava3.setPosition(Vector2f(354.f, 268.f));
    lava3.setFillColor(Color::Red);
    RectangleShape lava4(Vector2f(40.f, 23.f));
    lava4.setPosition(Vector2f(581.f, 208.f));
    lava4.setFillColor(Color::Red);
    RectangleShape lava5(Vector2f(39.f, 23.f));
    lava5.setPosition(Vector2f(139.f, 90.f));
    lava5.setFillColor(Color::Red);

    vector<RectangleShape> lavas = { lava1, lava2, lava3, lava4, lava5, lava6 };

    //les porte:
    RectangleShape porte1(Vector2f(38.f, 40.f));
    porte1.setPosition(Vector2f(0.f, 40.f));
    porte1.setFillColor(Color::Blue);
    RectangleShape porte2(Vector2f(38.f, 40.f));
    porte2.setPosition(Vector2f(0.f, 281.f));
    porte2.setFillColor(Color::Blue);
    RectangleShape porte3(Vector2f(38.f, 40.f));
    porte3.setPosition(Vector2f(0.f, 420.f));
    porte3.setFillColor(Color::Blue);
    RectangleShape porte4(Vector2f(38.f, 40.f));
    porte4.setPosition(Vector2f(762.f, 158.f));
    porte4.setFillColor(Color::Blue);
    RectangleShape porte5(Vector2f(38.f, 40.f));
    porte5.setPosition(Vector2f(762.f, 320.f));
    porte5.setFillColor(Color::Blue);
    RectangleShape porte6(Vector2f(38.f, 40.f));
    porte6.setPosition(Vector2f(762.f, 420.f));
    porte6.setFillColor(Color::Blue);

    vector<RectangleShape> portes = { porte1,porte2,porte3,porte4,porte5,porte6 };

    // music
    SoundBuffer buffer;
    if (!buffer.loadFromFile("assets/music.wav")) {
        cout << "error" << endl;
    }
    Sound sound(buffer);

    SoundBuffer bufferbg;
    if (!bufferbg.loadFromFile("assets/musicbg.wav")) {
        cout << "error" << endl;
    }
    Sound soundbg(bufferbg);
    soundbg.play();

    //Textures And Sprites:
    Texture texture;
    texture.loadFromFile("assets/Game_2.png");
    Sprite bg(texture);

    Texture tpl;
    tpl.loadFromFile("assets/player_run_left.png");
    Sprite player(tpl);
    player.setTextureRect(IntRect({ 0, 0 }, { 45, 54 }));

    Texture tbl1;
    tbl1.loadFromFile("assets/lb1.png");
    Sprite bl1(tbl1);

    Texture tbl2;
    tbl2.loadFromFile("assets/lb2.png");
    Sprite bl2(tbl2);

    Texture tbl3;
    tbl3.loadFromFile("assets/lb3.png");
    Sprite bl3(tbl3);

    Texture tbl4;
    tbl4.loadFromFile("assets/lb4.png");
    Sprite bl4(tbl4);

    Texture tbl5;
    tbl5.loadFromFile("assets/lb5.png");
    Sprite bl5(tbl5);

    Texture tbl0;
    tbl0.loadFromFile("assets/lb0.png");
    Sprite bl0(tbl0);

    vector<Sprite> bls = { bl0,bl1,bl2,bl3,bl4,bl5 };
    for (auto& i : bls) {
        i.setPosition(Vector2f(638.f, 13.f));
    }

    Texture ttabl;
    ttabl.loadFromFile("assets/khdra.png");
    Sprite tabl(ttabl);
    tabl.setPosition(Vector2f(540.f, 7.f));

    Texture ttabl2;
    ttabl2.loadFromFile("assets/mauve.png");
    Sprite tabl2(ttabl2);
    tabl2.setPosition(Vector2f(540.f, 45.f));

    Texture tblm;
    tblm.loadFromFile("assets/lbm.png");
    Sprite blm(tblm);
    blm.setPosition(Vector2f(638.f, 50.f));

    Texture diamt;
    diamt.loadFromFile("assets/diamond.png");
    Sprite diaman(diamt);

    Texture dit;
    dit.loadFromFile("assets/diam.png");
    Sprite diam(dit);

    vector<Sprite> diam_vect = { diam,diam,diam,diam,diam };
    for (int k = 0; k < 5; k++) {
        diam_vect[k].setPosition(Vector2f(-50.f, -50.f));
    }

    vector<Sprite> di_vect = { diaman,diaman,diaman,diaman,diaman,diaman };
    vector<int> pos_vect_x = { 880,618,140,177,330,660 };
    vector<int> pos_vect_y = { 550,430,432,192,312,168 };

    for (int k = 0; k < 6; k++) {
        di_vect[k].setPosition(Vector2f(static_cast<float>(pos_vect_x[k]), static_cast<float>(pos_vect_y[k])));
    }

    vector<int> pos_diam = { 650,678,709,736,765 };

    Texture potiont;
    potiont.loadFromFile("assets/potionv.png");
    Sprite potion(potiont);

    vector<Sprite> pot_vect = { potion,potion,potion,potion };
    vector<int> pot_vect_x = { 138,372,677,380 };
    vector<int> pot_vect_y = { 280,398,320,117 };

    for (int k = 0; k < 4; k++) {
        pot_vect[k].setPosition(Vector2f(static_cast<float>(pot_vect_x[k]), static_cast<float>(pot_vect_y[k])));
    }

    Texture enemt;
    enemt.loadFromFile("assets/enemi.png");
    Sprite enemi(enemt);
    enemi.setPosition(Vector2f(600.f, 410.f));

    vector<Sprite> enemis = { enemi,enemi,enemi,enemi,enemi,enemi };
    vector<int> enem_x = { 50,50,570,570,570,20 };
    vector<int> enem_y = { -70,410,146,308,410,172 };

    for (int k = 0; k < 6; k++) {
        enemis[k].setPosition(Vector2f(static_cast<float>(enem_x[k]), static_cast<float>(enem_y[k])));
    }

    Texture tplay_bg;
    tplay_bg.loadFromFile("assets/play_bg.png");
    Sprite play_bg(tplay_bg);

    Texture tplay1;
    tplay1.loadFromFile("assets/play1.png");
    Sprite play1(tplay1);
    play1.setPosition(Vector2f(300.f, 290.f));

    Texture tplay2;
    tplay2.loadFromFile("assets/play2.png");
    Sprite play2(tplay2);
    play2.setPosition(Vector2f(300.f, 290.f));

    Texture tlogo;
    tlogo.loadFromFile("assets/logo1.png");
    Sprite logo(tlogo);
    logo.setPosition(Vector2f(150.f, 40.f));

    Texture tbggow;
    tbggow.loadFromFile("assets/bggow.png");
    Sprite bggow(tbggow);

    Texture tgo;
    tgo.loadFromFile("assets/gameoverfinal.png");
    Sprite go(tgo);
    go.setPosition(Vector2f(100.f, 140.f));

    Texture tcong;
    tcong.loadFromFile("assets/congrat.png");
    Sprite cong(tcong);
    cong.setPosition(Vector2f(150.f, 150.f));

    Texture treplay1;
    treplay1.loadFromFile("assets/replay1.png");
    Sprite replay1(treplay1);
    replay1.setPosition(Vector2f(50.f, 341.f));

    Texture treplay2;
    treplay2.loadFromFile("assets/replay2.png");
    Sprite replay2(treplay2);
    replay2.setPosition(Vector2f(50.f, 341.f));

    Texture texit1;
    texit1.loadFromFile("assets/exit1.png");
    Sprite exit1(texit1);
    exit1.setPosition(Vector2f(550.f, 341.f));

    Texture texit2;
    texit2.loadFromFile("assets/exit2.png");
    Sprite exit2(texit2);
    exit2.setPosition(Vector2f(550.f, 341.f));

    // Variable initialization :
    float dt;
    Clock dt_clock;
    const float movementSpeed = 100.f, movementSpeed1 = 80.f;
    Vector2f velocity, velocity1, velocity2;
    FloatRect nextPos;
    bool Left = true, Right = false;
    int life = 5;
    int xp = 0, yp = 0;
    int z = 0;
    bool isJumping = false;
    bool game_start = false;
    bool game_over = false;
    bool win = false;
    bool get_potion = false;
    bool sur_rects = true;
    bool collision = false;
    bool colision = false;
    bool colision_rep = false;
    bool colision_ex = false;
    bool up = true, down = false;

    // Boucles principale
    while (window.isOpen()) {
        // Boucle : game over or win
        while ((game_over == true && game_start == false) || (win == true && game_start == false)) {
            while (const std::optional event = window.pollEvent()) {
                if (event->is<Event::Closed>()) {
                    window.close();
                }

                if (const auto* mouseMoved = event->getIf<Event::MouseMoved>()) {
                    if (mouseMoved->position.x > 50 && mouseMoved->position.x < 250 &&
                        mouseMoved->position.y > 341 && mouseMoved->position.y < 404) {
                        colision_rep = true;
                    }
                    else {
                        colision_rep = false;
                    }

                    if (mouseMoved->position.x > 550 && mouseMoved->position.x < 750 &&
                        mouseMoved->position.y > 341 && mouseMoved->position.y < 404) {
                        colision_ex = true;
                    }
                    else {
                        colision_ex = false;
                    }
                }
            }

            if (Mouse::isButtonPressed(Mouse::Button::Left) && colision_rep == true) {
                game_start = true;
                game_over = false;
                win = false;
                life = 5;
                for (int k = 0; k < 4; k++) {
                    pot_vect[k].setPosition(Vector2f(static_cast<float>(pot_vect_x[k]), static_cast<float>(pot_vect_y[k])));
                }
                for (int k = 0; k < 6; k++) {
                    di_vect[k].setPosition(Vector2f(static_cast<float>(pos_vect_x[k]), static_cast<float>(pos_vect_y[k])));
                }
                for (int k = 0; k < 5; k++) {
                    diam_vect[k].setPosition(Vector2f(-50.f, -50.f));
                }
            }

            if (Mouse::isButtonPressed(Mouse::Button::Left) && colision_ex == true) {
                window.close();
            }

            window.clear();
            window.draw(bggow);

            if (game_over == true && game_start == false)
                window.draw(go);
            else if (win == true && game_start == false)
                window.draw(cong);

            if (colision_rep == true)
                window.draw(replay2);
            else
                window.draw(replay1);

            if (colision_ex == true)
                window.draw(exit2);
            else
                window.draw(exit1);

            window.display();
        }

        // Boucle : premiere page
        while (game_start == false) {
            while (const std::optional event = window.pollEvent()) {
                if (event->is<Event::Closed>()) {
                    window.close();
                }

                if (const auto* mouseMoved = event->getIf<Event::MouseMoved>()) {
                    if (mouseMoved->position.x > 300 && mouseMoved->position.x < 500 &&
                        mouseMoved->position.y > 290 && mouseMoved->position.y < 350) {
                        colision = true;
                    }
                    else {
                        colision = false;
                    }
                }
            }

            if (Mouse::isButtonPressed(Mouse::Button::Left) && colision == true) {
                game_start = true;
            }

            window.clear();
            window.draw(play_bg);
            window.draw(logo);

            if (colision == true)
                window.draw(play2);
            else
                window.draw(play1);

            window.display();
        }

        // Boucle du jeu     
        while (game_start == true && game_over == false && win == false) {
            while (const std::optional event = window.pollEvent()) {
                if (event->is<Event::Closed>()) {
                    window.close();
                }

                if (event->is<Event::KeyReleased>()) {
                    isJumping = false;
                }
            }

            dt = dt_clock.restart().asSeconds();
            velocity1.y = 0.f;
            velocity1.x = 0.f;
            velocity2.y = 0.f;
            velocity2.x = 0.f;

            //mouvement of enemis:
            if (enemis[0].getPosition().x >= 230) {
                Left = true;
                Right = false;
            }
            else if (enemis[0].getPosition().x <= 40) {
                Left = false;
                Right = true;
            }

            if (Left == true && Right == false)
                velocity1.x -= movementSpeed1 * dt;
            else if (Left == false && Right == true)
                velocity1.x += movementSpeed1 * dt;

            for (auto& i : enemis) {
                i.move(velocity1);
            }

            //mouvement of diamand and potion 
            if (di_vect[0].getPosition().y >= 550) {
                up = true;
                down = false;
            }
            else if (di_vect[0].getPosition().y <= 540) {
                up = false;
                down = true;
            }

            if (up == true && down == false)
                velocity2.y -= movementSpeed1 * dt * 0.1f;
            else if (up == false && down == true)
                velocity2.y += movementSpeed1 * dt * 0.1f;

            for (auto& i : di_vect) {
                i.move(velocity2);
            }
            for (auto& i : pot_vect) {
                i.move(velocity2);
            }

            // mouvement du player:
            velocity.y = 0.f;
            velocity.x = 0.f;

            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
                yp = 0;
                xp++;
                xp = xp % 7;
                player.setTextureRect(IntRect({ xp * 45, yp }, { 45, 54 }));
                velocity.x += movementSpeed * dt;
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
                yp = 1;
                xp++;
                xp = xp % 7;
                player.setTextureRect(IntRect({ xp * 45, yp * 54 }, { 45, 54 }));
                velocity.x += -movementSpeed * dt;
            }

            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
                velocity.y -= movementSpeed * dt;
                isJumping = true;
            }

            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
                velocity.y += movementSpeed * dt;
            }

            // Gravity :
            if (player.getPosition().y + player.getGlobalBounds().size.y < 500 && isJumping == false)
                player.move(Vector2f(0.f, 0.1f));

            player.move(velocity);

            // les collision avec screen:
            if (player.getPosition().x < 0.f)
                player.setPosition({ 0.f, player.getPosition().y });
            if (player.getPosition().y < 0.f)
                player.setPosition({ player.getPosition().x, 0.f });
            if (player.getPosition().x + player.getGlobalBounds().size.x > 800)
                player.setPosition({ 800 - player.getGlobalBounds().size.x, player.getPosition().y });
            if (player.getPosition().y + player.getGlobalBounds().size.y > 500)
                player.setPosition({ player.getPosition().x, 500 - player.getGlobalBounds().size.y });

            //Collision with rectangles :
            for (auto& wall : rects) {
                FloatRect playerBounds = player.getGlobalBounds();
                FloatRect wallBounds = wall.getGlobalBounds();
                nextPos = playerBounds;
                nextPos.position.x += velocity.x;
                nextPos.position.y += velocity.y;

                if (wallBounds.findIntersection(nextPos).has_value()) {
                    //double collision
                    if (playerBounds.position.x < wallBounds.position.x &&
                        playerBounds.position.y + playerBounds.size.y > wallBounds.position.y) {
                        velocity.x = 0.f;
                        player.setPosition({ wallBounds.position.x - playerBounds.size.x, playerBounds.position.y });
                    }

                    //Right collision
                    if (playerBounds.position.x < wallBounds.position.x &&
                        playerBounds.position.x + playerBounds.size.x < wallBounds.position.x + wallBounds.size.x &&
                        playerBounds.position.y < wallBounds.position.y + wallBounds.size.y &&
                        playerBounds.position.y + playerBounds.size.y > wallBounds.position.y) {
                        velocity.x = 0.f;
                        player.setPosition({ wallBounds.position.x - playerBounds.size.x, playerBounds.position.y });
                    }
                    //Left collision
                    else if (playerBounds.position.x > wallBounds.position.x &&
                        playerBounds.position.x + playerBounds.size.x > wallBounds.position.x + wallBounds.size.x &&
                        playerBounds.position.y < wallBounds.position.y + wallBounds.size.y &&
                        playerBounds.position.y + playerBounds.size.y > wallBounds.position.y) {
                        velocity.x = 0.f;
                        player.setPosition({ wallBounds.position.x + wallBounds.size.x, playerBounds.position.y });
                    }
                    //Bottom collision
                    if (playerBounds.position.y < wallBounds.position.y &&
                        playerBounds.position.y + playerBounds.size.y < wallBounds.position.y + wallBounds.size.y &&
                        playerBounds.position.x < wallBounds.position.x + wallBounds.size.x &&
                        playerBounds.position.x + playerBounds.size.x > wallBounds.position.x) {
                        velocity.y = 0.f;
                        player.setPosition({ playerBounds.position.x, wallBounds.position.y - playerBounds.size.y });
                    }

                    //Top collision
                    else if (playerBounds.position.y > wallBounds.position.y &&
                        playerBounds.position.y + playerBounds.size.y > wallBounds.position.y + wallBounds.size.y &&
                        playerBounds.position.x < wallBounds.position.x + wallBounds.size.x &&
                        playerBounds.position.x + playerBounds.size.x > wallBounds.position.x) {
                        velocity.y = 0.f;
                        player.setPosition({ playerBounds.position.x, wallBounds.position.y + wallBounds.size.y });
                        isJumping = false;
                    }
                }
            }

            // collision with diamond
            for (int i = 1; i < 6; i++) {
                if (player.getGlobalBounds().findIntersection(di_vect[i].getGlobalBounds()).has_value()) {
                    diam_vect[i - 1].setPosition(Vector2f(static_cast<float>(pos_diam[i - 1]), 55.f));
                    di_vect[i].setPosition(Vector2f(921.f, 645.f));
                }
            }

            // collision with enemis or lavas:
            for (int t = 0; t < 6; t++) {
                if (player.getGlobalBounds().findIntersection(lavas[t].getGlobalBounds()).has_value() ||
                    player.getGlobalBounds().findIntersection(enemis[t].getGlobalBounds()).has_value()) {
                    life -= 1;
                    delay(5, sound);
                    player.setPosition(Vector2f(0.f, 30.f));
                }
            }

            // colllision with potion:
            for (int i = 0; i < 4; i++) {
                if (player.getGlobalBounds().findIntersection(pot_vect[i].getGlobalBounds()).has_value()) {
                    pot_vect[i].setPosition(Vector2f(900.f, 333.f));
                    life++;
                    break;
                }
            }

            if (life == 0) {
                game_start = false;
                game_over = true;
                delay(7, sound);
            }
            else if (life > 5) {
                life = 5;
            }

            // collision with portes
            for (int x = 0; x < 6; x++) {
                if (player.getGlobalBounds().findIntersection(portes[x].getGlobalBounds()).has_value()) {
                    z = x;
                    break;
                }
            }

            if (z == 2) {
                game_start = false;
                win = true;
                cout << win;
                delay(7, sound);
            }
            else if (z == 3) {
                player.setPosition({ 0.f, 321.f - player.getGlobalBounds().size.y });
            }
            else if (z == 4) {
                cout << "closed";
            }
            else if (z == 5) {
                player.setPosition({ 0.f, 80.f - player.getGlobalBounds().size.y });
            }

            window.clear();

            // les draws:
            for (int i = 0; i < 22; i++) {
                window.draw(rects[i]);
            }
            for (int j = 0; j < 6; j++) {
                window.draw(lavas[j]);
            }
            for (int j = 0; j < 6; j++) {
                window.draw(portes[j]);
            }
            window.draw(bg);
            window.draw(blm);
            window.draw(tabl2);

            for (auto& i : di_vect)
                window.draw(i);
            for (auto& i : diam_vect)
                window.draw(i);
            for (auto& i : pot_vect)
                window.draw(i);
            for (auto& i : enemis)
                window.draw(i);
            if (life <= 5 && life >= 0)
                window.draw(bls[life]);
            window.draw(tabl);
            window.draw(player);
            window.display();
    }
    }
    return 0;
}