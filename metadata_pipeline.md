# Metadata del Pipeline Sensor–PC–Dashboard

## 1. Sensor y Señal
- Sensor utilizado: Sensor infrarrojo de reflectancia (IR)
- Tipo de señal: Analógica
- Resolución ADC: 10 bits (0–1023)
- Canales utilizados: A0 (S1), A1 (S2)

## 2. Frecuencia de muestreo
- Frecuencia configurada: 20 Hz
- Periodo aproximado: 50 ms

## 3. Canal de telemetría
- Medio: Serial USB
- Velocidad: 9600 baudios
- Formato de mensaje: CSV
- Estructura:
  timestamp,S1,S2

Ejemplo:
  0.00,512,490

## 4. Plataforma
- Microcontrolador: Arduino UNO
- PC: Windows 11
- Entorno de desarrollo: Arduino IDE

## 5. Dashboard y Herramientas
- Plataforma de visualización: Node-RED
- Nodos utilizados:
  - serial in
  - function
  - dashboard chart
  - dashboard gauge
  - file (registro CSV)

## 6. Procesamiento implementado
- Normalización lineal 0–1
- Cálculo automático de umbral:
  threshold = (min + max) / 2
- Clasificación binaria: LINEA / NO LINEA
## Control de versiones
Repositorio versionado con Git.
Versiones etiquetadas: v0.1, v0.2.