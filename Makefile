TARGET = app
CXX = g++ -std = c++17
CCFLAGS = -Wall -g -MMD
LD = g++
GTKFLAGS = -I/usr/include/gtkmm-3.0 -I/usr/lib64/gtkmm-3.0/include -I/usr/include/giomm-2.4 -I/usr/lib64/giomm-2.4/include -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/sysprof-4 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glibmm-2.4 -I/usr/lib64/glibmm-2.4/include -I/usr/include/sigc++-2.0 -I/usr/lib64/sigc++-2.0/include -I/usr/include/gtk-3.0 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/fribidi -I/usr/include/libxml2 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cloudproviders -I/usr/include/atk-1.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/dbus-1.0 -I/usr/lib64/dbus-1.0/include -I/usr/include/at-spi-2.0 -I/usr/include/cairomm-1.0 -I/usr/lib64/cairomm-1.0/include -I/usr/include/pangomm-1.4 -I/usr/lib64/pangomm-1.4/include -I/usr/include/atkmm-1.6 -I/usr/lib64/atkmm-1.6/include -I/usr/include/gtk-3.0/unix-print -I/usr/include/gdkmm-3.0 -I/usr/lib64/gdkmm-3.0/include -pthread -lgtkmm-3.0 -latkmm-1.6 -lgdkmm-3.0 -lgiomm-2.4 -lgtk-3 -lgdk-3 -latk-1.0 -lcairo-gobject -lgio-2.0 -lpangomm-1.4 -lglibmm-2.4 -lcairomm-1.0 -lsigc-2.0 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -lcairo -lgdk_pixbuf-2.0 -lgobject-2.0 -lglib-2.0
OBJS = main.o game-of-life.o
$(TARGET): $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(GTKFLAGS)
	@rm -f *.o *.d
main.o: main.cpp
	$(CC) -c $(CCFLAGS) $(GTKFLAGS) main.cpp -o main.o
game-of-life.o: game-of-life.cpp
	$(CC) -c $(CCFLAGS) $(GTKFLAGS) game-of-life.cpp -o game-of-life.o