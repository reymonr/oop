#include <iostream>

using namespace std;

class Employee {
  private:
    string name;
    int id;
  public:
    Employee(string name, int id) {
      this->name = name;
      this->id = id;
    }
    void setName(string name) { this->name = name; }
    void setId(int id) { this->id = id; }
    string getName() { return name; }
    int getId() { return id; }

    // virtual void work() {
    //   cout << name << " is working as employee to do the tasks given." << endl;
    // }

    // pure virtual function
    virtual void work() = 0;
};

class Programmer : public Employee {
  private:
    string programmingLanguage;
    string level;
  public:
    Programmer(string name, int id, string pl, string level) : 
    Employee(name, id) {
      this->programmingLanguage = pl;
      this->level = level;
    }
    void setProgrammingLanguage(string pl) { programmingLanguage = pl; }
    void setLevel(string level) { this->level = level; }
    string getProgrammingLanguage() { return programmingLanguage; }
    string getLevel() { return level; }

    void work() {
      cout << getName() << " is working as " << getProgrammingLanguage() << " programmer." << endl;
    }
};

class DBAdmin : public Employee {
  private:
    string dbServer;
    string dbType;
  public:
    DBAdmin(string name, int id, string dbServer, string dbType) : 
    Employee(name, id) {
      this->dbServer = dbServer;
      this->dbType = dbType;
    }
    void setDBServer(string dbServer) { this->dbServer = dbServer; }
    void setDBType(string dbType) { this->dbType = dbType; }
    string getDBServer() { return dbServer; }
    string getDBType() { return dbType; }

    void work() {
      cout << getName() << " is working as " << getDBServer() << " administrator." << endl;
    }
};

int main()
{
  Programmer P = Programmer("John Doe", 123, "C++", "Junior Programmer");  
  DBAdmin D = DBAdmin("Marry White", 126, "Oracle", "RDBMS");

  Employee *emp;
  
  emp = &P;     // as programmer
  emp->work();

  emp = &D;     // as db admin
  emp->work();

  return 0;
}
