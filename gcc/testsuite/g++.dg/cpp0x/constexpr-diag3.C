// PR c++/45923
// { dg-options -std=c++0x }

int f(int);

template <class T>
constexpr T g(T t) { return f(t); } // { dg-error "f.int" }

int main()
{
  constexpr int i = g(1);	// { dg-error "g.T" }
}

// --------------------

struct complex 			// { dg-message "no constexpr constructor" }
{
  complex(double r, double i) : re(r), im(i) { }
  constexpr double real() { return re; } // { dg-error "not a literal type" }
  double imag() const { return im; }

private:
  double re;
  double im;
};

constexpr complex co1(0, 1);	   // { dg-error "not literal" }
constexpr double dd2 = co1.real(); // { dg-error "non-constexpr function" }

// --------------------

struct base		       // { dg-message "no constexpr constructor" }
{
  int _M_i;
  base() : _M_i(5) { }
};

struct derived : public base	// { dg-message "base class" }
{
  constexpr derived(): base() { } // { dg-error "non-constexpr function" }
};

constexpr derived obj;		// { dg-error "not literal" }

// --------------------

struct Def
{
  int _M_i;			// { dg-message "does not initialize" }

  constexpr Def() = default;	// { dg-error "implicit declaration is not constexpr" }
};

constexpr Def defobj;		// { dg-error "uninitialized" }
