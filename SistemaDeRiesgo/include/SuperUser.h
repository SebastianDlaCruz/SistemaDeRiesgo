#ifndef SUPERUSER_H
#define SUPERUSER_H


class SuperUser
{
    private:
        char _email[50];
        char _contrasenia[16];
    public:
        SuperUser();
    void CargarSuperUser();

    void setEmail(const char*);
    void setContrasenia(const char*);

    const char* getEmail();
    const char* getContrasenia();
};

#endif // SUPERUSER_H
