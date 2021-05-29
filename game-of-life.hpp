#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#define WIDTH 1152
#define HEIGHT 900

#include <iostream>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/box.h>
#include <gtkmm/drawingarea.h>
#include <gtkmm/toolbar.h>
#include <gtkmm/toolbutton.h>
#include <gdkmm/pixbuf.h>

class Gof : public Gtk::Window
{
private:
    //Child widgets
    Gtk::DrawingArea screen;
    Gtk::Box m_box;
    Gtk::Toolbar toolbar;
    Gtk::ToolButton start;
    Gtk::ToolButton pause;
    Gtk::ToolButton stop;
    Gtk::ToolButton reset;
    Gtk::Image start_img;
    Gtk::Image pause_img;
    Gtk::Image stop_img;
    Gtk::Image reset_img;
    
    //Signal handlers for the simulation
   /* void on_action_start();
    void on_action_pause();
    void on_action_stop();
    void on_action_reset();*/

public:
    Gof();
    ~Gof() override;
    void set_hierarchy();
    void load_imgs();
};

#endif