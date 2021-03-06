
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_EncryptedPreMasterSecret__
#define __gnu_javax_net_ssl_provider_EncryptedPreMasterSecret__

#pragma interface

#include <gnu/javax/net/ssl/provider/ExchangeKeys.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class EncryptedPreMasterSecret;
              class ProtocolVersion;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::javax::net::ssl::provider::EncryptedPreMasterSecret : public ::gnu::javax::net::ssl::provider::ExchangeKeys
{

public:
  EncryptedPreMasterSecret(::java::nio::ByteBuffer *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
  EncryptedPreMasterSecret(JArray< jbyte > *, ::gnu::javax::net::ssl::provider::ProtocolVersion *);
  ::java::nio::ByteBuffer * buffer();
  JArray< jbyte > * encryptedSecret();
  void setEncryptedSecret(JArray< jbyte > *, jint, jint);
  jint length();
  ::java::lang::String * toString();
  ::java::lang::String * toString(::java::lang::String *);
private:
  ::gnu::javax::net::ssl::provider::ProtocolVersion * __attribute__((aligned(__alignof__( ::gnu::javax::net::ssl::provider::ExchangeKeys)))) version;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_EncryptedPreMasterSecret__
