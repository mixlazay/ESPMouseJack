# ESP Mouse Jack v2.0 (Auto Scan)

## ภาษาไทย (Thai)

เวอร์ชันนี้ได้รับการปรับปรุงให้มีความสามารถในการ **สแกนหา Address ของเมาส์ไร้สายที่อยู่ในระยะได้เอง** และเริ่มทำการส่งชุดคำสั่งคีย์บอร์ด (Keystroke Injection) ไปยังเป้าหมายที่พบโดยอัตโนมัติ

**คำเตือน:** โปรเจกต์นี้มีไว้เพื่อการศึกษาเท่านั้น การนำไปใช้โดยไม่ได้รับอนุญาตถือเป็นสิ่งผิดกฎหมาย ผู้พัฒนาไม่มีส่วนรับผิดชอบใดๆ ทั้งสิ้น

---

### **คุณสมบัติ**

* **🔍 สแกนหาสัญญาณ (Signal Scanning):** ค้นหาและระบุ Address ของเมาส์ไร้สายในบริเวณใกล้เคียง
* **🎯 โจมตีอัตโนมัติ (Auto Attack):** เริ่มส่งชุดคำสั่งไปยังเป้าหมายแรกที่พบโดยอัตโนมัติ
* **⌨️ ส่งชุดคำสั่ง (Keystroke Injection):** ส่งชุดคำสั่งที่กำหนดไว้ล่วงหน้าไปยังเป้าหมาย

---

### **อุปกรณ์ที่ต้องใช้**

* บอร์ด ESP32 หรือ ESP8266
* โมดูล NRF24L01+ (พร้อมวงจร LNA+PA เพื่อระยะที่ไกลขึ้น)
* สายเชื่อมต่อ Dupont

---

### **การติดตั้งและใช้งาน**

1.  **อัปโหลดโค้ด:**
    * เชื่อมต่อบอร์ด ESP กับคอมพิวเตอร์
    * คอมไพล์และอัปโหลดโค้ดผ่าน Arduino IDE โดย **ไม่ต้องแก้ไขค่าใดๆ**

2.  **เปิด Serial Monitor:**
    * หลังจากอัปโหลดเสร็จ ให้เปิด **Serial Monitor** ใน Arduino IDE
    * ตั้งค่า Baud Rate ให้ตรงกับในโค้ด (โดยทั่วไปคือ `115200`)

3.  **เริ่มการสแกนและโจมตี:**
    * อุปกรณ์จะเริ่มทำงานใน **โหมดสแกน** โดยอัตโนมัติ
    * หน้าจอ Serial Monitor จะแสดงข้อความว่า "Scanning for targets..."
    * เมื่อพบ Address ของเมาส์เป้าหมาย จะมีข้อความแสดงขึ้นมา เช่น:
        ```
        [+] Address Found: 11:22:33:44:55
        ```
    * จากนั้น อุปกรณ์จะเปลี่ยนเข้าสู่ **โหมดโจมตี** และเริ่มส่งชุดคำสั่งไปยัง Address ที่พบโดยอัตโนมัติ

<br>
<hr>
<br>

## English

This updated version includes the ability to **automatically scan for nearby wireless mouse addresses** and begin a keystroke injection attack on the first discovered target.

**Disclaimer:** This project is for educational purposes only. Unauthorized use is illegal. The developer assumes no liability.

---

### **Features**

* **🔍 Signal Scanning:** Discovers and identifies addresses of nearby wireless mice.
* **🎯 Auto Attack:** Automatically starts the injection payload on the first target found.
* **⌨️ Keystroke Injection:** Sends a predefined payload to the target.

---

### **Hardware**

* ESP32 or ESP8266 board
* NRF24L01+ module (PA+LNA version recommended for better range)
* Dupont wires

---

### **Installation & Usage**

1.  **Upload the Code:**
    * Connect the ESP board to your computer.
    * Compile and upload the code using the Arduino IDE. **No code modification is needed.**

2.  **Open the Serial Monitor:**
    * After the upload is complete, open the **Serial Monitor** from the Arduino IDE.
    * Set the baud rate to match the one in the code (typically `115200`).

3.  **Scan & Attack:**
    * The device will automatically start in **Scanning Mode**.
    * The Serial Monitor will display "Scanning for targets..."
    * When a target mouse address is found, a message will appear, for example:
        ```
        [+] Address Found: 11:22:33:44:55
        ```
    * The device will then automatically switch to **Attack Mode** and begin sending the payload to the discovered address.
