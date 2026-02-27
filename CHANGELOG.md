# CHANGELOG

Todas las versiones relevantes del pipeline sensor–PC–dashboard se documentan en este archivo.

---

## v0.2 - Dashboard y calibración funcional (U1A5)

### Agregado
- Implementación de normalización lineal (0–1) para S1 y S2.
- Cálculo automático de umbral dinámico (min/max).
- Indicadores visuales LINEA / NO LINEA.
- Registro automático de datos en archivo CSV.
- Visualización en tiempo casi real mediante Node-RED Dashboard.

### Mejorado
- Estabilidad de transmisión serial.
- Separación clara entre estados sobre fondo blanco y línea negra.

---

## v0.1 - Telemetría básica operativa (U1A4)

### Agregado
- Lectura ADC de sensores en A0 y A1.
- Envío de datos por Serial USB en formato CSV.
- Verificación de adquisición continua (>300 muestras).
- Prueba de estabilidad durante 60 segundos.

### Técnico
- Frecuencia de muestreo estable ~20 Hz.
- Formato de mensaje: timestamp,S1,S2.