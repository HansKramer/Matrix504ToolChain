
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Properties__
#define __java_util_Properties__

#pragma interface

#include <java/util/Hashtable.h>

class java::util::Properties : public ::java::util::Hashtable
{

public:
  Properties();
  Properties(::java::util::Properties *);
  virtual ::java::lang::Object * setProperty(::java::lang::String *, ::java::lang::String *);
  virtual void load(::java::io::InputStream *);
  virtual void save(::java::io::OutputStream *, ::java::lang::String *);
  virtual void store(::java::io::OutputStream *, ::java::lang::String *);
  virtual ::java::lang::String * getProperty(::java::lang::String *);
  virtual ::java::lang::String * getProperty(::java::lang::String *, ::java::lang::String *);
  virtual ::java::util::Enumeration * propertyNames();
  virtual void list(::java::io::PrintStream *);
  virtual void list(::java::io::PrintWriter *);
private:
  void formatForOutput(::java::lang::String *, ::java::lang::StringBuilder *, jboolean);
public:
  virtual void storeToXML(::java::io::OutputStream *, ::java::lang::String *);
  virtual void storeToXML(::java::io::OutputStream *, ::java::lang::String *, ::java::lang::String *);
  virtual void loadFromXML(::java::io::InputStream *);
public: // actually protected
  ::java::util::Properties * __attribute__((aligned(__alignof__( ::java::util::Hashtable)))) defaults;
private:
  static const jlong serialVersionUID = 4112578634029874840LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Properties__
