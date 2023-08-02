class Student
{
    private:
    int scores[5];

public:
    void input(){
        int grade;
        for (int i=0; i<5; i++){
            cin >> grade; 
            scores[i]= grade;
        }
    }
    int calculateTotalScore(){
        int total=0;
        for (int i=0; i<5; i++){
            total += scores[i];
        }
        return total;
    }
}