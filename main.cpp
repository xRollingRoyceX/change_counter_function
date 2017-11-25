/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 25, 2017, 8:41 AM
 */
#include <inclds>
//get amount of money: give quarter, dimes
//and nickles and pennies to calculate
//how much money you have in change. 


double get_money(unsigned quarter, unsigned dime,
        unsigned nickle, unsigned penny) 
{
    return ((quarter * 0.25) + (dime * 0.10) + (nickle * 0.05) + (penny * 0.01));
}
int main() {
    string s(30, '-');
    auto a = 0, b = 0, c = 0;
    cout << " Q / N / D / P / " << endl;
    cout << s << endl;
    
    for (int i = 0; i != 100; ++i, ++a, ++b, ++c)
        cout << "  " << a << "  " << b << "  " << c << "  " << i << "   == "
                << "$ " << get_money(a, b, c, i) << "\n";
    
}

