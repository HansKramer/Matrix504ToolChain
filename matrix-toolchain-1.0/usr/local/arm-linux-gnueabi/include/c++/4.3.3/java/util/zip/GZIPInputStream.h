
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_GZIPInputStream__
#define __java_util_zip_GZIPInputStream__

#pragma interface

#include <java/util/zip/InflaterInputStream.h>
#include <gcj/array.h>


class java::util::zip::GZIPInputStream : public ::java::util::zip::InflaterInputStream
{

public:
  GZIPInputStream(::java::io::InputStream *);
  GZIPInputStream(::java::io::InputStream *, jint);
  virtual void close();
  virtual jint read(JArray< jbyte > *, jint, jint);
private:
  void readHeader();
  void readFooter();
public:
  static const jint GZIP_MAGIC = 35615;
public: // actually package-private
  static const jint FTEXT = 1;
  static const jint FHCRC = 2;
  static const jint FEXTRA = 4;
  static const jint FNAME = 8;
  static const jint FCOMMENT = 16;
public: // actually protected
  ::java::util::zip::CRC32 * __attribute__((aligned(__alignof__( ::java::util::zip::InflaterInputStream)))) crc;
  jboolean eos;
private:
  jboolean readGZIPHeader;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_zip_GZIPInputStream__
