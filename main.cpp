#include "game-of-life.hpp"



int main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("org.game-of-life.gtkmm");
    Gof game;
    return app->run(game);
}