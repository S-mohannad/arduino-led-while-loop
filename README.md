# 💡 LED Blink with While Loop

> **Arduino Project #12** — LED يومض 10 مرات باستخدام `while loop` ثم يتوقف 5 ثواني

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يتحكم بـ LED واحد (pin 13) باستخدام حلقة `while`:

- يومض LED الـ 10 مرات — كل وميضة 250ms تشغيل و250ms إطفاء
- العد يتم يدوياً بمتغير `c` يزيد بمقدار 1 كل دورة
- بعد انتهاء الـ 10 دورات، يدخل البرنامج في توقف **5 ثواني**
- ثم تبدأ الدورة من جديد

---

## 🔌 Circuit

```
Arduino UNO
                    ┌─────────────┐
                    │             │
  pin 13 ──[220Ω]──┤► (LED)      │── GND
                    │             │
                    └─────────────┘
```

| المكون | التوصيل |
|--------|---------|
| LED | الساق الطويلة → مقاومة 220Ω → pin 13 / الساق القصيرة → GND |

---

## 💡 Concepts Used

- `pinMode()` — تحديد pin كـ OUTPUT
- `digitalWrite()` — تشغيل وإطفاء LED
- `delay()` — التحكم بتوقيت الوميض
- `while loop` — تكرار الوميض طالما الشرط محقق (`c < 10`)
- **العداد اليدوي** — متغير `c` يبدأ من 0 ويزيد بمقدار 1 كل دورة (`c = c + 1`)

---

## 📊 Behavior

| المرحلة | حالة LED | المدة |
|---------|---------|-------|
| تشغيل (×10) | HIGH 💡 | 250ms |
| إطفاء (×10) | LOW ⚫ | 250ms |
| توقف | LOW ⚫ | 5000ms |
| تكرار... | — | — |

---

## 🔗 Code

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int c = 0;
  while (c < 10) {
    digitalWrite(13, HIGH);
    delay(250);
    digitalWrite(13, LOW);
    delay(250);
    c = c + 1;
  }
  delay(5000);
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل الدائرة كما في الرسم (LED على pin 13)
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. راقب LED يومض 10 مرات ثم يتوقف 5 ثواني وتتكرر الدورة

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
