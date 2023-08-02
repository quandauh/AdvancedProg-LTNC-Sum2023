class Student{
private:  int age; 
          int standard; 
          string first_name; 
          string last_name; 
public:
 int get_age(){
    return age;
  }
 void set_age(int n){
    age = n;
 }
 string get_last_name(){
    return last_name;
 }
 string get_first_name(){
    return first_name;
 }
 int get_standard(){
    return standard;
 }

void set_standard(int rajan){
    standard = rajan;
}
void set_first_name(string first){
    first_name = first;
}
void set_last_name(string last){
    last_name = last;
}
void to_string(){
    cout<<age;
    cout<<",";
    cout<<first_name;
    cout<<",";
    cout<<last_name;
    cout<<",";
    cout<<standard;
}
}