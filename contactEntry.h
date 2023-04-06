#include <mariadb/conncpp.hpp>
#include <string>
using namespace std;

#ifndef CONTACTENTRY_H
#define CONTACTENTRY_H

class contactEntry {
public:
     contactEntry();
     contactEntry(sql::SQLString f, sql::SQLString l, sql::SQLString p, sql::SQLString e, sql::SQLString z, sql::SQLString t, sql::SQLString I);
     string text();
     string json();
     
     string first;
     string last;
     string phone;
	string email;
	string timezone;
     string type;
     string ID;

private:

};

#endif /* CONTACTENTRY_H */

