#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public :
    bool isLogin() { return !user_id.isEmpty(); }

    QString user_id;
    QString username;
    QString password;
    QString nickname;

    QString lease_id;
    QString lease_info;
    int arrive;
    int all_num;

};

#endif // USER_H
