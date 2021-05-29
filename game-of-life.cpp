#include "game-of-life.hpp"

Gof::Gof() :
m_box(Gtk::Orientation::ORIENTATION_VERTICAL),
start_img(Gdk::Pixbuf::create_from_file("assets/media-playback-start-symbolic.symbolic.png")),
pause_img(Gdk::Pixbuf::create_from_file("assets/media-playback-pause-symbolic.symbolic.png")),
stop_img(Gdk::Pixbuf::create_from_file("assets/media-playback-stop-symbolic.symbolic.png")),
reset_img(Gdk::Pixbuf::create_from_file("assets/media-skip-backward-symbolic.symbolic.png"))
{
    //Window configs
    set_title("Game of Life");
    set_default_size(WIDTH, HEIGHT);
    set_resizable(false);

    load_imgs();
    set_hierarchy();
    show_all_children();
}

Gof::~Gof(){}

void Gof::set_hierarchy()
{
    //Window
    add(m_box);

    //Toolbar
    toolbar.insert(start, 0);
    toolbar.insert(pause, 1);
    toolbar.insert(stop, 2);
    toolbar.insert(reset, 3);
    m_box.pack_start(toolbar, false, false, 0);
    
    //Box
    toolbar.reparent(m_box);
}

void Gof::load_imgs()
{
    //Labels
    start.set_label("start");
    pause.set_label("pause");
    stop.set_label("stop");
    reset.set_label("reset");

    //Load images
    start.set_icon_widget(start_img);
    pause.set_icon_widget(pause_img);
    stop.set_icon_widget(stop_img);
    reset.set_icon_widget(reset_img);
}