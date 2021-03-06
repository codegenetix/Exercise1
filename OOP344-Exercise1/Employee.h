class Manager;

class Employee
   {
   private:
      int ID;
      char* name;
      Manager* boss;
      int hours;
   protected:
   public:
      Employee(int id, const char* name);
      ~Employee();
      void setBoss(Manager& newBoss);
      void work(int numOfHours);
      void report();
      int getHours()const;
      int getID()const;
      char* getName()const;
   };
