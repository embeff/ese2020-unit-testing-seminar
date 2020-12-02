template<typename Base>
struct register_mock {
	Base raw;
	
    operator Base() const {
        //add recording "get value" 
        return raw; 
    }

    Base& operator= (Base rhs){
        // assign
        raw = rhs;
    }
    // operator+(Base rhs){...}
    // operator-(Base rhs){...}
    // operator&(Base rhs){...}
    // ...
};