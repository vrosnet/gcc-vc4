
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_POAPackage_ServantAlreadyActive__
#define __org_omg_PortableServer_POAPackage_ServantAlreadyActive__

#pragma interface

#include <org/omg/CORBA/UserException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace PortableServer
      {
        namespace POAPackage
        {
            class ServantAlreadyActive;
        }
      }
    }
  }
}

class org::omg::PortableServer::POAPackage::ServantAlreadyActive : public ::org::omg::CORBA::UserException
{

public:
  ServantAlreadyActive();
  ServantAlreadyActive(::java::lang::String *);
private:
  static const jlong serialVersionUID = 780130793809887260LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_POAPackage_ServantAlreadyActive__
