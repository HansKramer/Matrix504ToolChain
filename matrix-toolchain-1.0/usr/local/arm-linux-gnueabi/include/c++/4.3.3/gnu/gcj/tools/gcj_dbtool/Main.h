
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_tools_gcj_dbtool_Main__
#define __gnu_gcj_tools_gcj_dbtool_Main__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
          class PersistentByteMap;
      }
      namespace tools
      {
        namespace gcj_dbtool
        {
            class Fileset;
            class Main;
        }
      }
    }
  }
}

class gnu::gcj::tools::gcj_dbtool::Main : public ::java::lang::Object
{

public:
  Main();
  static void main(JArray< ::java::lang::String * > *);
private:
  static ::java::lang::String * getDbPathTail();
  static void insist(jboolean);
  static void usage(::java::io::PrintStream *);
  static ::gnu::gcj::runtime::PersistentByteMap * addJar(::java::io::File *, ::gnu::gcj::runtime::PersistentByteMap *, ::java::io::File *);
public: // actually package-private
  static ::gnu::gcj::runtime::PersistentByteMap * resizeMap(::gnu::gcj::runtime::PersistentByteMap *, jint, jboolean);
  static ::java::lang::String * bytesToString(JArray< jbyte > *);
private:
  static ::gnu::gcj::tools::gcj_dbtool::Fileset * getFiles(JArray< ::java::lang::String * > *, jint, jboolean, jchar);
  static jboolean verbose;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_tools_gcj_dbtool_Main__
