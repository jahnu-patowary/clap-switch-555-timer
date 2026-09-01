# Clap Switch (555 Timer Based)

## 📌 Project Overview
This project implements a **sound-activated switch** that turns an LED (representing a load such as a light or fan) ON in response to a clap. It uses a **condenser microphone** to detect sound, a **transistor amplifier stage** to boost the signal, and a **555 Timer IC** configured as a monostable multivibrator to control the ON duration of the output.

The circuit demonstrates how simple analog components can be combined to build a reliable, low-cost, sound-triggered switching system — a practical example of signal detection, amplification, and timing circuit design.

## 🔗 Components Used
| Component | Parameter |
|---|---|
| Condenser Mic | — |
| IC | 555 Timer |
| Resistors | 220Ω, 1KΩ, 47KΩ, 100KΩ |
| Transistor | BC547 (NPN) |
| Capacitor | 10 µF |
| LED | — |
| Battery | 5–9V |

## 🛠 Tech Stack
- Analog Circuit Design
- 555 Timer IC (Monostable Mode)
- Breadboard Prototyping

## ⚙️ Working Principle
1. The **condenser microphone** picks up the clap sound and converts it into a small electrical signal.
2. This signal is **amplified** by the BC547 transistor stage.
3. The amplified pulse triggers the **555 Timer IC**, configured in monostable mode.
4. The 555 Timer's output drives the **LED**, turning it ON for a duration set by the RC time constant (adjustable via the capacitor value).
5. After the timing period elapses, the circuit automatically resets and the LED turns OFF — ready to detect the next clap.

## ✅ Advantages
- Enables hands-free control of electrical loads (lights, fans, etc.)
- Energy-efficient and low-cost
- Simple, reliable analog design with high accuracy
- No manual switching required

## ⚠️ Limitations
- Requires a clap or similarly pitched sound to trigger
- May respond to unintended ambient noise
- Less convenient than a standard physical switch in some settings

## 📈 Result
The circuit was built and tested on a breadboard. Upon detecting a clap, the LED successfully turned ON, confirming correct signal detection, amplification, and timing operation as per the design.

## 📂 Repository Structure
```
clap-switch-555-timer/
├── docs/
│   └── project_report.pdf
├── images/
│   ├── circuit_diagram.png
│   ├── experimental_setup.jpg
│   └── result_led_glow.jpg
└── README.md
```

