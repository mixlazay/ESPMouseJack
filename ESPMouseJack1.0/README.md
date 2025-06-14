# ESP Mouse Jack v1.0 (Manual Attack)

## ภาษาไทย (Thai)

เวอร์ชันนี้เป็นเครื่องมือสำหรับส่งชุดคำสั่งคีย์บอร์ด (Keystroke Injection) ไปยังคอมพิวเตอร์เป้าหมายผ่านช่องโหว่ของเมาส์ไร้สาย **ผู้ใช้จำเป็นต้องหา Address ของเมาส์เป้าหมายและกำหนดค่าลงในซอร์สโค้ดด้วยตนเอง**

**คำเตือน:** โปรเจกต์นี้มีไว้เพื่อการศึกษาเท่านั้น การนำไปใช้โดยไม่ได้รับอนุญาตถือเป็นสิ่งผิดกฎหมาย ผู้พัฒนาไม่มีส่วนรับผิดชอบใดๆ ทั้งสิ้น

---

### **คุณสมบัติ**

* **Keystroke Injection:** ส่งชุดคำสั่งที่กำหนดไว้ไปยังเป้าหมาย
* **กำหนดเป้าหมายเอง:** ต้องระบุ Address ของเมาส์เป้าหมายในโค้ดโดยตรง (Hardcode)

---

### **อุปกรณ์ที่ต้องใช้**

* บอร์ด ESP32 หรือ ESP8266
* โมดูล NRF24L01+ (พร้อมวงจร LNA+PA เพื่อระยะที่ไกลขึ้น)
* สายเชื่อมต่อ Dupont

---

### **การติดตั้งและใช้งาน**

1.  **หา Address เป้าหมาย:**
    * คุณจำเป็นต้องหา Address ขนาด 5-byte ของเมาส์เป้าหมายมาก่อนด้วยเครื่องมืออื่น (เช่น โปรแกรม Sniffer) เวอร์ชันนี้ **ไม่สามารถ** ค้นหา Address เองได้

2.  **แก้ไขซอร์สโค้ด:**
    * เปิดไฟล์ `.ino` ของโปรเจกต์
    * มองหาส่วนสำหรับกำหนดค่า Address และแก้ไขให้เป็นค่าของเป้าหมาย
    * **ตัวอย่าง:**
        ```cpp
        // Target's 5-byte radio address
        const uint8_t targetAddress[5] = {0x11, 0x22, 0x33, 0x44, 0x55}; // <-- เปลี่ยนค่าตรงนี้
        ```

3.  **อัปโหลดและเริ่มโจมตี:**
    * เชื่อมต่อบอร์ด ESP กับคอมพิวเตอร์
    * คอมไพล์และอัปโหลดโค้ดผ่าน Arduino IDE
    * เมื่ออัปโหลดเสร็จสิ้น อุปกรณ์จะเริ่มส่งชุดคำสั่งไปยัง Address เป้าหมายทันที

<br>
<hr>
<br>

## English

This version is a tool for sending keystroke injection payloads to a target computer by exploiting wireless mouse vulnerabilities. **The user is required to find the target mouse's address and manually hardcode it into the source code.**

**Disclaimer:** This project is for educational purposes only. Unauthorized use is illegal. The developer assumes no liability.

---

### **Features**

* **Keystroke Injection:** Sends a predefined payload to the target.
* **Manual Targeting:** Requires the target mouse address to be hardcoded.

---

### **Hardware**

* ESP32 or ESP8266 board
* NRF24L01+ module (PA+LNA version recommended for better range)
* Dupont wires

---

### **Installation & Usage**

1.  **Find Target Address:**
    * You must first obtain the 5-byte address of the target mouse using another tool (e.g., a sniffer). This version **cannot** discover addresses on its own.

2.  **Edit Source Code:**
    * Open the project's `.ino` file.
    * Locate the address configuration section and change it to your target's address.
    * **Example:**
        ```cpp
        // Target's 5-byte radio address
        const uint8_t targetAddress[5] = {0x11, 0x22, 0x33, 0x44, 0x55}; // <-- Change this value
        ```

3.  **Upload & Attack:**
    * Connect the ESP board to your computer.
    * Compile and upload the code using the Arduino IDE.
    * Once uploaded, the device will immediately begin sending payloads to the specified target address.
