#include <gtk/gtk.h>

static void
activate (GtkApplication* app,
          gpointer        user_data)
{
    /*GtkWidget *window;
    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "RM2K3 Easy Event Editor");
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 600);

    GtkWidget *properties_box;
    properties_box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 8);
    gtk_container_add (GTK_CONTAINER (window), properties_box);

    GtkWidget *properties_title;
    properties_title = gtk_label_new ("Properties");
    gtk_label_set_yalign (GTK_LABEL (properties_title), 1);
    gtk_label_set_xalign (GTK_LABEL (properties_title), 0);
    gtk_container_add (GTK_CONTAINER (properties_box), properties_title);

    gtk_widget_show_all (window);*/

}

int
main (int    argc,
      char **argv)
{
    GtkBuilder *builder;
    GObject *window;
    GObject *button;
    GError *error = NULL;
    int status;

    gtk_init (&argc, &argv);

    builder = gtk_builder_new ();
    if (gtk_builder_add_from_file (builder, "main.ui", &error) == 0)
    {
        g_printerr ("Error loading file: %s\n", error->message);
        g_clear_error (&error);
        return 1;
    }

    gtk_main ();

    return status;
}
