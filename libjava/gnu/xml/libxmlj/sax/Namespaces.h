
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_sax_Namespaces__
#define __gnu_xml_libxmlj_sax_Namespaces__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace sax
        {
            class Namespaces;
        }
      }
    }
  }
}

class gnu::xml::libxmlj::sax::Namespaces : public ::java::lang::Object
{

public: // actually package-private
  Namespaces();
  virtual void push();
  virtual void pop();
  virtual ::java::lang::String * getURI(::java::lang::String *);
  virtual void define(::java::lang::String *, ::java::lang::String *);
  virtual ::java::util::Iterator * currentPrefixes();
  ::java::util::ArrayList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) stack;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_sax_Namespaces__
