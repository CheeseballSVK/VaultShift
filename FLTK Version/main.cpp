#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <cstdio> // Use C++ header for printf

// Callback function for the button
void button_callback(Fl_Widget* widget, void* data) {
    std::printf("Button clicked!\n");
}

int main(int argc, char **argv) {
    // Create a window
    Fl_Window *window = new Fl_Window(340, 180);

    // Create a button
    Fl_Button *button = new Fl_Button(110, 70, 120, 40, "Click Me");

    // Assign the callback function to the button
    button->callback((Fl_Callback*)button_callback);

    // Show the window
    window->end();
    window->show(argc, argv);

    // Run the FLTK event loop
    return Fl::run();
}
