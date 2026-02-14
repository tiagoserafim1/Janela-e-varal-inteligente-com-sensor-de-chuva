# Janela-e-varal-inteligente-com-sensor-de-chuva
Sistema Automático de Varal e Janela com Sensor de Chuva (ESP32)

Funcionamento:

O sistema monitora constantemente o sensor de chuva:
🌧️ Se detectar chuva (LOW)
O servo do varal recolhe automaticamente as roupas.
O servo da janela fecha para evitar entrada de água.

☀️ Se não houver chuva (HIGH)
O varal é estendido.
A janela permanece aberta.
Além disso, o LED RGB acende na cor branca por 5 segundos e depois apaga por 3 segundos, funcionando como sinalização visual do sistema.

🔹 Componentes utilizados
ESP32
Sensor de chuva
2 Servomotores
LED RGB

🔹 Objetivo
Automatizar ações domésticas simples utilizando conceitos de Internet das Coisas (IoT), sensores e atuadores, aplicando lógica condicional na programação embarcada.
