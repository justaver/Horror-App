#include <gtk/gtk.h>



// Function to show a specific page
static void show_page(GtkWidget *widget, gpointer data) {
    GtkStack *stack = GTK_STACK(data);
    const gchar *page_name = g_object_get_data(G_OBJECT(widget), "page-name");
    gtk_stack_set_visible_child_name(stack, page_name);
}

// Function to go back to the main page
static void go_back(GtkWidget *widget, gpointer data) {
    GtkStack *stack = GTK_STACK(data);
    gtk_stack_set_visible_child_name(stack, "main");
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *stack;
    GtkWidget *grid;
    GtkWidget *button;
    GtkWidget *label;
    GtkWidget *back_button;
    GtkWidget *page;

    // Create the main application window
    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Navigation Example");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    // Create a GtkStack to manage pages
    stack = gtk_stack_new();
    gtk_stack_set_transition_type(GTK_STACK(stack), GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT);
    gtk_window_set_child(GTK_WINDOW(window), stack);

    // Create the main page grid and buttons
    grid = gtk_grid_new();
    gtk_stack_add_named(GTK_STACK(stack), grid, "main");

    button = gtk_button_new_with_label("Movies");
    g_object_set_data(G_OBJECT(button), "page-name", "movies");
    g_signal_connect(button, "clicked", G_CALLBACK(show_page), stack);
    gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);

    button = gtk_button_new_with_label("Rooms");
    g_object_set_data(G_OBJECT(button), "page-name", "rooms");
    g_signal_connect(button, "clicked", G_CALLBACK(show_page), stack);
    gtk_grid_attach(GTK_GRID(grid), button, 1, 0, 1, 1);

    // Create the "Movies" page
    page = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_stack_add_named(GTK_STACK(stack), page, "movies");

    label = gtk_label_new("Welcome to the Movies Info page!");
    gtk_box_append(GTK_BOX(page), label);

    back_button = gtk_button_new_with_label("Back");
    g_signal_connect(back_button, "clicked", G_CALLBACK(go_back), stack);
    gtk_box_append(GTK_BOX(page), back_button);

    // Create the "Rooms" page
    page = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_stack_add_named(GTK_STACK(stack), page, "rooms");

    label = gtk_label_new("Welcome to the Rooms Info page!");
    gtk_box_append(GTK_BOX(page), label);

    back_button = gtk_button_new_with_label("Back");
    g_signal_connect(back_button, "clicked", G_CALLBACK(go_back), stack);
    gtk_box_append(GTK_BOX(page), back_button);

    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("com.example.NavigationApp", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}