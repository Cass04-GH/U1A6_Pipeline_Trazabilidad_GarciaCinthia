# Checklist de Reproducibilidad – Pipeline Sensor → PC → Dashboard

## 1. Preparación de Hardware
☐ Conectar sensores IR a Arduino:
   - S1 → A0
   - S2 → A1
☐ Alimentar sensores a 5V
☐ Conectar Arduino por USB a la PC

---

## 2. Carga del Firmware
☐ Abrir Arduino IDE
☐ Cargar sketch ubicado en /code
☐ Verificar velocidad serial = 9600 baudios
☐ Subir programa al Arduino

**Verificación esperada:**
- Monitor Serial muestra líneas tipo:
  timestamp,S1,S2
- Valores cambian al mover el sensor entre blanco y negro.

---

## 3. Ejecución de Node-RED
☐ Abrir Node-RED
☐ Importar flow desde /code
☐ Configurar puerto COM correcto
☐ Deploy

**Verificación esperada:**
- Dashboard muestra gráficas S1 y S2.
- Actualización aproximada cada 0.5 segundos.

---

## 4. Registro de Datos
☐ Ejecutar sistema durante mínimo 60 segundos.
☐ Verificar generación de archivo CSV.

**Resultado esperado:**
- Archivo en /data/raw/U1A6_sample.csv
- ≥300 filas registradas.

---

## 5. Calibración
☐ Capturar valores mínimo (NEGRO)
☐ Capturar valores máximo (BLANCO)
☐ Verificar cálculo automático de umbral

**Resultado esperado:**
- Archivo en /data/processed/calibration_params.json
- Clasificación correcta LINEA / NO LINEA

---

## 6. Verificación Rápida (3 pruebas clave)

✓ Al colocar sensor sobre blanco → valor mayor  
✓ Al colocar sensor sobre línea negra → valor menor  
✓ El dashboard cambia estado dinámicamente