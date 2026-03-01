#include <iostream>
using namespace std;

/*
 Overloaded constructors are multiple constructors
 with the same name but different parameters.
 They allow for varying arguments when instantiating
 an object.
 */

class News {
    public:
    string topic1;
    string topic2;

    News(){

    }
    News(string topic1){
        this->topic1 = topic1;
    }
    News(string topic1,string topic2){
        this->topic1 = topic1;
        this->topic2 = topic2;
    }
};

int main () {
    News news1("Sports");
    News news2("Technology","Dating");

    //empty initialisation,note no need for parenthesis
    News news3;

    cout << news1.topic1 << '\n';
    cout << news2.topic1 << " " << news2.topic2 << '\n';

    return 0;
}
