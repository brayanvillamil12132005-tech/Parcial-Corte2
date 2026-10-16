#ifndef SENSOR_H
#define SENSOR_H
#include <string>

class Sensor {
public:
    int id;
    std::string tipo;
    std::string ubicacion;
    float valorActual;

    Sensor(int id_sensor, std::string tipo_sensor, std::string ubicacion_sensor);
    
    void registrarMedida(float nuevoValor);
    bool detectarPeligro(float umbralMaximo);
};

#endif