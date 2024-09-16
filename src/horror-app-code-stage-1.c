#include <gtk/gtk.h>
#include <stdio.h>

#include <gtk/gtk.h>
#include <stdio.h>

static void
print_hello (GtkWidget *widget,
             gpointer   data)
{
  g_print ("Hello World\n");
}

/* 
   - This function is going create the contents inside the app (shown below):
   - Creates the window of the app (and size)
   - Creates the main buttons of the app (and size)
   - Creates each button actions when user presses
*/
static void activate (GtkApplication *Horror_App) {

  GtkWidget *window; // This pointer is needed to create the window for the app
  GtkWidget *button; // This pointer is needed to create buttons for the app
  GtkWidget *grid;   // This pointer is needed to place are buttons in certain areas in the app.

  window = gtk_application_window_new (Horror_App); // Creates the app window
  gtk_window_set_title (GTK_WINDOW (window), "Welcolme"); // This is the title when you first open the app

  grid = gtk_grid_new ();

  gtk_window_set_child (GTK_WINDOW (window), grid);

  
  button = gtk_button_new_with_label ("Movies"); // This creates the button name
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL); //This gives the button an action once clicked upon

  gtk_grid_attach (GTK_GRID (grid), button, 0, 0, 1, 1); //This create the button location on the window

  button = gtk_button_new_with_label ("Rooms"); // This creates the button name
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL); //This gives the button an action once clicked upon

  gtk_grid_attach (GTK_GRID (grid), button, 1, 0, 1, 1); //This create the button location on the window



  gtk_window_present (GTK_WINDOW (window));


}


/*
   The main function is what actually makes the app run.
   It will call the activate function to "activate" the app.
*/
int main (int argc, char **argv){

//variables
  GtkApplication *Horor_app_Activate;
  int status;

//Activating the app
  Horor_app_Activate = gtk_application_new ("Horror.App.com", G_APPLICATION_DEFAULT_FLAGS); // The window of the app needs a name
  g_signal_connect (Horor_app_Activate, "activate", G_CALLBACK (activate), NULL); // When the app activates the contents inside the app will run.
  status = g_application_run (G_APPLICATION (Horor_app_Activate), argc, argv); // When code is compiled this will run the app
  g_object_unref (Horor_app_Activate); // This will free up memmory once the run is completed

  return status;
}