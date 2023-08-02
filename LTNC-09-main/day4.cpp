class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        
       
        if(initialAge<0) {
            age=0;
            cout <<"Age is not valid, setting age to 0";
        }
        else {
            age = initialAge;
        }

    }

    void Person::amIOld(){
        if(age<13) {cout << "You are young";}
        else {if(age>=13 && <=18) {cout << "You are a teenager";}
                else{cout << "You are old";}
        }

    }

    void Person::yearPasses(){
        age++;

    }