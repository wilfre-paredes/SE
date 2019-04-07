#ifndef CLASE_REPORTES_H
#define CLASE_REPORTES_H
#include <iostream>

struct info_persona {
  String nombre;
  String email;
  String telefono;
};

struct info_reportes {
  String fechaApertura;
  String fechaCerrada;
  int numeroReporte;
  bool status;
  String horaApertura;
  String horaCerrada;
  String producto;
  String problema;
  info_persona usuario;
  info_reportes *enlace;
};
  typedef info_reportes* NodoPtr;

class reportes{
public:
  info_reportes();
  ~info_reportes();
  void
private:
  NodoPtr cabeza;
}
#endif
