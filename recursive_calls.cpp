#include <iostream>
#include <cmath>

using namespace std;

/// print astrisks

void print_astrisks(int num){

    if(num < 1)
        return;
    else
        cout << " * ";
        return print_astrisks(num - 1);
}

/// print the sum for n + n-1 + n-2... + 1

int sum(int n){

    if (n == 0)
        return n;
    if ( n == 1){
        return n;
    }
    else
        return n + sum(n-1) ;
}

/// recursive call to power function

long power(int x, int n){

    if( n ==0 )
        return 1;
    if (n == 1 )
        return x;
    else
        return power(x, n-1) * x;
}

bool isPalindrom(string word){

    if(word.length() <= 1){
        return true;
    }
    if(word[0] == word[word.length()-1]){
        return isPalindrom(word.substr(1,word.length()-2));
    }
    else
        return false;
}

/// replace blank with stars
string replaceBlank(string star){

    static int i =  1;

    if(i < (*this).star.length()){
        return star;
    }
    if(star.find(' ', i)){
        star[star.find(' ', i)] = '*';
    }
    i++;
    return replaceBlank(star.substr(i,star.length()));
}




int maxy(int largest[],int length){

    static int temp=largest[length];

    if(length <= 0){
        return temp;
    }
    if(temp < largest[length]){
        temp = largest[length];
    }
    return maxy(largest,length - 1);
}


int main(){

    int i;
    int s;
    string b;
    int team[5] = {0,93,21,390,9};
    int nums = 4;
    string word="jason harp er";

    cout << replaceBlank(word);

    cout << "\n enter a number: ";
    cin >> i;

    cout << "\n enter another number: ";
    cin >> s;

    cout << "\n enter a word: ";
    cin >> b;

    print_astrisks(i);
    cout << sum(i);
    cout << power(i,s);
    cout << endl<< endl;
    cout << isPalindrom(b);
    cout << replaceBlank(b);

    cout << b.substr(0,b.length()-1);
    cout << b.substr(1)
    cout << maxy(team, nums);
}
