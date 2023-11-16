#include <iostream>
using namespace std;

class Form {
private:
    string color;

protected:
    string name;

public:
    // Constructor for Form
    Form(string name) {
        this->name = name;
        cout << "Form Constructor: " << name << endl;
    }

    // Destructor for Form
    ~Form() {
        cout << "Form Destructor: " << name << endl;
    }

    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }
};

class Rectangle : public Form {
protected:
    int width;
    int height;

public:
    // Constructor for Rectangle
    Rectangle(string name, int width, int height) : Form(name) {
        this->width = width;
        this->height = height;
        cout << "Rectangle Constructor: " << name << ", Width: " << width << ", Height: " << height << endl;
    }

    // Destructor for Rectangle
    ~Rectangle() {
        cout << "Rectangle Destructor: " << name << endl;
    }

    void setWidth(int width) {
        this->width = width;
    }

    int getWidth() {
        return this->width;
    }
};

int main() {
    // Create a Form object
    Form* f = new Form("forma1");
    cout << "Form: " << f->getName() << endl;

    // Create a Rectangle object
    Rectangle* r = new Rectangle("rectangle 1", 1, 2);
    cout << "Rectangle Name: " << r->getName() << " Width: " << r->getWidth() << endl;

    // Delete the objects
    delete f;
    delete r;

    return 0;
}
