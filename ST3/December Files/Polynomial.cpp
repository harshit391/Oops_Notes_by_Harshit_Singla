#include <bits/stdc++.h>

using namespace std;

class Polynomial {
public:
    int * degCoeff; // Name of your array (Don't change this)
    int capacity;

    Polynomial() {
        degCoeff = new int[10] {0};
        capacity = 10;
    }

    Polynomial(Polynomial &b) {
        capacity = b.capacity;
        degCoeff = new int[b.capacity] {0};
        for (int i=0; i<b.capacity; i++) {
            degCoeff[i] = b.degCoeff[i];
        }
    }

    void operator=(Polynomial const &p2) {
        degCoeff = new int[p2.capacity] {0};
        for (int i=0; i<p2.capacity; i++) {
            degCoeff[i] = p2.degCoeff[i];
        }
        capacity = p2.capacity;
    }

    void setCoefficient(int deg, int coef) {
        if (deg >= capacity) {
            int size = 2 * capacity;
            while (size <= deg) {
                size *= 2;
            }

            int *temp = new int[size] {0};
            for (int i = 0; i < capacity; i++) {
                temp[i] = degCoeff[i];
            }
            capacity = size;
            delete[] degCoeff;
            degCoeff = temp;
        }
        degCoeff[deg] = coef;
    }

    void print() const {
        for (int i=0; i<capacity; i++) {
            if (degCoeff[i] != 0) {
                cout << degCoeff[i] << "x" << i << " ";
            }
        }
    }

    Polynomial operator+(Polynomial &p2) const {
        Polynomial ans;
        int i=0;
        int j=0;
        while (i < this->capacity && j < p2.capacity) {
            ans.setCoefficient(i, this->degCoeff[i] + p2.degCoeff[j]);
            i++;j++;
        }
        while (i < this->capacity) {
            ans.setCoefficient(i,this->degCoeff[i]);
            i++;
        }
        while (j < p2.capacity) {
            ans.setCoefficient(j, p2.degCoeff[j]);
            j++;
        }
        return ans;
    }

    Polynomial operator-(Polynomial &p2) const {
        Polynomial ans;
        int i=0;
        int j=0;
        while (i < this->capacity && j < p2.capacity) {
            ans.setCoefficient(i, this->degCoeff[i] - p2.degCoeff[j]);
            i++;j++;
        }
        while (i < this->capacity) {
            ans.setCoefficient(i,this->degCoeff[i]);
            i++;
        }
        while (j < p2.capacity) {
            ans.setCoefficient(j, (-1*p2.degCoeff[j]));
            j++;
        }
        return ans;
    }

    [[nodiscard]] int getCoefficient(int degree) const {
        if (degree >= capacity) {
            return 0;
        }
        return degCoeff[degree];
    }

    Polynomial operator * (const Polynomial& p) const {
        Polynomial ans;

        for (int j = 0; j < p.capacity; j++) {
            for (int i = 0; i < capacity; i++) {
                int deg = i + j;
                int coeff = ans.getCoefficient(deg) + (this->degCoeff[i] * p.degCoeff[j]);
                ans.setCoefficient(deg, coeff);
            }
        }
        return ans;
    }
};

int main() {
    int count1, count2, choice;
    cin >> count1;

    int * degree1 = new int[count1];
    int * coeff1 = new int[count1];

    for (int i = 0; i < count1; i++) {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++) {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int * degree2 = new int[count2];
    int * coeff2 = new int[count2];

    for (int i = 0; i < count2; i++) {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;
    for (int i = 0; i < count2; i++) {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch (choice) {
        // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2:
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3:
            result = first * second;
            result.print();
            break;

        case 4: // Copy constructor
        {
            Polynomial third(first);
            if (third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            } else {
                cout << "true" << endl;
            }
            break;
        }

        case 5: // Copy assignment operator
        {
            Polynomial fourth(first);
            if (fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            } else {
                cout << "true" << endl;
            }
            break;
        }

    }

    return 0;
}