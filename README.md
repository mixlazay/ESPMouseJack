# ESP Mouse Jack

## English

A proof-of-concept project demonstrating the ability to replicate and spoof wireless mouse signals using an ESP microcontroller and an NRF24L01+ module. This technique, commonly known as Mouse Jacking, exploits vulnerabilities in the 2.4GHz wireless protocol used by many non-Bluetooth wireless mice.

**Disclaimer:** This project is for educational and research purposes only. Unauthorized access to computer systems is illegal. The user assumes all liability for any actions performed with this tool.

---

### **Features**

* **Signal Sniffing:** Detect and capture signals from nearby wireless mice.
* **Address Discovery:** Identify the unique address of a target mouse.
* **Keystroke Injection:** Send malicious keystroke payloads to a target computer through the vulnerable mouse's dongle.
* **ESP-Based:** Utilizes the versatile and powerful ESP32 or ESP8266 microcontrollers.

---

### **Hardware Requirements**

* An ESP32 or ESP8266 development board.
* An NRF24L01+ or NRF24L01+ PA+LNA module.
* Connecting wires (Dupont wires).
* A computer for programming the ESP board.

---

### **Software & Libraries**

* **Arduino IDE** or **PlatformIO** installed on your computer.
* **ESP32/ESP8266 Board Support** for the Arduino IDE.
* **RF24 Library:** A popular library for controlling the NRF24L01+ module. You can typically install this through the Arduino Library Manager. Search for "RF24" by TMRh20.

---

### **Installation & Usage**

1.  **Hardware Connection:**
    * Connect the NRF24L01+ module to your ESP board according to the pinout specified in the source code. The connection will use the SPI interface (MOSI, MISO, SCK, CSN, CE).
    * Ensure the NRF24L01+ module is receiving a stable 3.3V power supply, as insufficient power can lead to instability.

2.  **Software Setup:**
    * Open the project in the Arduino IDE or PlatformIO.
    * Select the correct board (e.g., "NodeMCU-1.0 (ESP-12E Module)" or "ESP32 Dev Module").
    * Select the appropriate COM port.
    * Install the required libraries.

3.  **Operation:**
    * The initial mode of operation is typically "sniffing" mode, where the device scans for active wireless mouse communication.
    * Once a target device's address is identified, you can switch to "injection" mode.
    * In "injection" mode, the ESP will send a pre-defined sequence of keystrokes to the target computer. This payload can be customized within the code to perform various actions, such as opening a terminal and executing commands.

---
---

## ภาษาไทย (Thai)

# ESP Mouse Jack

โครงการตัวอย่างนี้สาธิตความสามารถในการลอกเลียนแบบและปลอมแปลงสัญญาณเมาส์ไร้สายโดยใช้ไมโครคอนโทรลเลอร์ ESP และโมดูล NRF24L01+ เทคนิคนี้เป็นที่รู้จักกันทั่วไปในชื่อ Mouse Jacking ซึ่งอาศัยช่องโหว่ในโปรโตคอลไร้สาย 2.4GHz ที่ใช้ในเมาส์ไร้สายที่ไม่ใช่บลูทูธจำนวนมาก

**คำเตือน:** โครงการนี้จัดทำขึ้นเพื่อวัตถุประสงค์ทางการศึกษาและการวิจัยเท่านั้น การเข้าถึงระบบคอมพิวเตอร์โดยไม่ได้รับอนุญาตถือเป็นสิ่งผิดกฎหมาย ผู้ใช้งานต้องรับผิดชอบต่อการกระทำใดๆ ที่เกิดขึ้นจากการใช้เครื่องมือนี้

---

### **คุณสมบัติ**

* **การดักจับสัญญาณ (Signal Sniffing):** ตรวจจับและดักจับสัญญาณจากเมาส์ไร้สายที่อยู่ใกล้เคียง
* **การค้นหาแอดเดรส (Address Discovery):** ระบุแอดเดรสเฉพาะของเมาส์เป้าหมาย
* **การส่งชุดคำสั่งคีย์บอร์ด (Keystroke Injection):** ส่งชุดคำสั่งที่เป็นอันตรายไปยังคอมพิวเตอร์เป้าหมายผ่านดองเกิลของเมาส์ที่มีช่องโหว่
* **ทำงานบน ESP (ESP-Based):** ใช้ประโยชน์จากไมโครคอนโทรลเลอร์ ESP32 หรือ ESP8266 ที่มีความสามารถหลากหลายและทรงพลัง

---

### **อุปกรณ์ที่ต้องใช้ (Hardware)**

* บอร์ดพัฒนา ESP32 หรือ ESP8266
* โมดูล NRF24L01+ หรือ NRF24L01+ PA+LNA
* สายเชื่อมต่อ (สาย Dupont)
* คอมพิวเตอร์สำหรับโปรแกรมบอร์ด ESP

---

### **ซอฟต์แวร์และไลบรารี (Software & Libraries)**

* **Arduino IDE** หรือ **PlatformIO** ที่ติดตั้งบนคอมพิวเตอร์ของคุณ
* **ESP32/ESP8266 Board Support** สำหรับ Arduino IDE
* **ไลบรารี RF24:** ไลบรารียอดนิยมสำหรับควบคุมโมดูล NRF24L01+ คุณสามารถติดตั้งผ่าน Arduino Library Manager โดยค้นหา "RF24" by TMRh20

---

### **การติดตั้งและการใช้งาน (Installation & Usage)**

1.  **การเชื่อมต่ออุปกรณ์:**
    * เชื่อมต่อโมดูล NRF24L01+ เข้ากับบอร์ด ESP ของคุณตามแผนผังขาที่ระบุไว้ในซอร์สโค้ด การเชื่อมต่อจะใช้อินเทอร์เฟซ SPI (MOSI, MISO, SCK, CSN, CE)
    * ตรวจสอบให้แน่ใจว่าโมดูล NRF24L01+ ได้รับแหล่งจ่ายไฟ 3.3V ที่เสถียร เนื่องจากการจ่ายไฟที่ไม่เพียงพออาจทำให้การทำงานไม่เสถียร

2.  **การตั้งค่าซอฟต์แวร์:**
    * เปิดโปรเจกต์ใน Arduino IDE หรือ PlatformIO
    * เลือกบอร์ดให้ถูกต้อง (เช่น "NodeMCU-1.0 (ESP-12E Module)" หรือ "ESP32 Dev Module")
    * เลือก COM port ที่เหมาะสม
    * ติดตั้งไลบรารีที่จำเป็น

3.  **การทำงาน:**
    * โหมดการทำงานเริ่มต้นโดยทั่วไปคือโหมด "ดักจับสัญญาณ" (sniffing mode) ซึ่งอุปกรณ์จะสแกนหาการสื่อสารของเมาส์ไร้สายที่ทำงานอยู่
    * เมื่อระบุแอดเดรสของอุปกรณ์เป้าหมายได้แล้ว คุณสามารถเปลี่ยนไปใช้โหมด "ส่งชุดคำสั่ง" (injection mode)
    * ในโหมด "ส่งชุดคำสั่ง" ESP จะส่งลำดับการกดแป้นพิมพ์ที่กำหนดไว้ล่วงหน้าไปยังคอมพิวเตอร์เป้าหมาย ชุดคำสั่งนี้สามารถปรับแต่งได้ภายในโค้ดเพื่อดำเนินการต่างๆ เช่น การเปิดเทอร์มินัลและรันคำสั่ง
