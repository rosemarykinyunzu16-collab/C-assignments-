#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

// Derived class: LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    // Constructor
    LibraryMember(string n, int id, int books) {
        setName(n);  // Call base class method
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() const {
        return memberID;
    }

    int getBooksBorrowed() const {
        return booksBorrowed;
    }
};

// Derived class: PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    // Constructor
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() const {
        return membershipFee;
    }
};

// Main function to test the system
int main() {
    PremiumMember member("rosemary", 657, 7, 2500.00);

    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << member.getMembershipFee() << endl;

    return 0;
}
