#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class Client
{
private:
    int id_client;
    QString nom,prenom,adresse;

public:
    //Constructeurs
    Client();
    Client(int,QString,QString,QString);
    //Getters
    int getid_client();
    QString getnom();
    QString getprenom();
    QString getadresse();
    //Setters
    void setid_client(int);
    void setnom(QString);
    void setprenom(QString);
    void setadresse(QString );
    //Les Fonctions
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int);

};

#endif // CLIENT_H
