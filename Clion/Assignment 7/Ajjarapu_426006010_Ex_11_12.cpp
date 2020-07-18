#include <iostream>
using namespace std;
class Link {
public:
    string value;

    Link(const string& v, Link* p = nullptr, Link* s = nullptr)
            : value{v}, prev{p}, succ{s} { }

    Link* insert(Link* n) ;                                   // insert n before this object
    Link* add(Link* n) ;                                       // insert n after this object
    Link* erase() ;                                                  // remove this object from list
    Link* find(const string& s);                          // find s in list
    const Link* find(const string& s) const;    // find s in const list (see §18.5.1)

    Link* advance(int n) const;                          // move n positions in list

    Link* next() const { return succ; }
    Link* previous() const { return prev; }
private:
    Link* prev;
    Link* succ;
};
Link* Link::erase()                    // remove *p from list; return p’s successort
{

    if (this==nullptr) return nullptr;
    if (this->succ) this->succ->prev = this->prev;
    if (this->prev) this->prev->succ = this->succ;
    return this->succ;
}
Link* Link::find(const string& s)              // find s in list;
// return nullptr for “not found”
{
    Link* q=this;
    while (q) {
        if (q->value == s) return q;
        q=q->succ;
    }
    return nullptr;
}
Link* Link::insert(Link* n)    // insert n before this object; return n
{
    if (n==nullptr) return this;
    if (this==nullptr) return n;
    n->succ = this;              // this object comes after n
    if (prev) prev->succ = n;
    n->prev = prev;            // this object’s predecessor becomes n’s predecessor
    prev = n;                        // n becomes this object’s predecessor
    return n;
}
const Link* Link::find(const string &s) const           // find s in list;
// return nullptr for “not found”
{
    const Link* q=this;
    while (q) {
        if (q->value == s) return q;
        q=q->succ;
    }
    return nullptr;
}
void print_all(Link* p)
{
    cout << "{ ";
    while (p) {
        cout << p->value;
        if (p=p->next()) cout << ", ";
    }
    cout << " }";
}

int main() {
    Link *norse_gods = new Link{"Thor"};
    norse_gods = norse_gods->insert(new Link{"Odin"});
    norse_gods = norse_gods->insert(new Link{"Zeus"});
    norse_gods = norse_gods->insert(new Link{"Freia"});

    Link *greek_gods = new Link{"Hera"};
    greek_gods = greek_gods->insert(new Link{"Athena"});
    greek_gods = greek_gods->insert(new Link{"Mars"});
    greek_gods = greek_gods->insert(new Link{"Poseidon"});
    Link* p = greek_gods->find("Mars");
    if (p) p->value = "Ares";
    Link* p2 = norse_gods->find("Zeus");
    if (p2) {
        if (p2==norse_gods) norse_gods = p2->next();
        p2->erase();
        greek_gods = greek_gods->insert(p2);
    }
    print_all(norse_gods);
    cout<<"\n";
    print_all(greek_gods);
    cout<<"\n";
}
//You need 2 finds in order to change a const as they are considered different enties.