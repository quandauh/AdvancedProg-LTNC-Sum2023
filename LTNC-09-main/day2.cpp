void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = (meal_cost/100)*tip_percent;
    double tax = meal_cost*(tax_percent/100);
    double total =meal_cost+tip+tax;
    round(total);
    cout << total;

}