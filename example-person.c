#include "example-person.h"

struct _ExamplePerson
{
    GObject parent_instance;
    gchar * name;
};

G_DEFINE_TYPE (ExamplePerson, example_person, G_TYPE_OBJECT)

static void example_person_class_init (ExamplePersonClass * klass)
{
    //
}

static void example_person_init (ExamplePerson * self)
{
    self->name = g_strdup("Initial name");
}

ExamplePerson * example_person_new (void)
{
    return g_object_new (EXAMPLE_TYPE_PERSON, 0);
}

const gchar * example_person_get_name (ExamplePerson * self)
{
    return self->name;
}

void example_person_set_name (ExamplePerson * self, const gchar * name)
{
    if (g_strcmp0 (name, self->name) == 0) return;

    g_free(self->name);
    self->name = g_strdup(name);
}
