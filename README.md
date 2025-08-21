# 🎬 BookMyShow System (C++ Skeleton)

This project is a **C++ skeleton implementation** of a **BookMyShow-like movie ticket booking system**, designed from a UML class diagram.
It demonstrates **Object-Oriented Design (OOD)** principles with modular class structures.

## 📌 Features (Design Level)

* 🎬 **Movie Management** – Add and retrieve movies by city.
* 🎭 **Theatre & Screen Management** – Manage theatres, screens, and shows.
* 🎟️ **Show Scheduling** – Link movies to theatres with start/end times.
* 💺 **Seat Management** – Supports **Silver, Gold, and Platinum** seat categories.
* 🛒 **Booking System** – Book seats for a show with payment linkage.
* 💳 **Payment Handling** – Structure for payment with status (success, failed, pending).
* 📂 **Modular Design** – Each class split into header (`.h`) and implementation (`.cpp`) files.



## 🏗️ Project Structure

```
├── Seat.h / Seat.cpp
├── Screen.h / Screen.cpp
├── Movie.h / Movie.cpp
├── Show.h / Show.cpp
├── Theatre.h / Theatre.cpp
├── Booking.h / Booking.cpp
├── Payment.h / Payment.cpp
├── MovieController.h / MovieController.cpp
├── TheatreController.h / TheatreController.cpp
└── main.cpp
```

---

## 🔧 Tech Stack

* **Language:** C++
* **Paradigm:** Object-Oriented Programming (OOP)
* **Design:** UML Class Diagram


### 1️⃣ Clone the repository

```bash
git clone https://github.com/your-username/bookmyshow-skeleton.git
cd bookmyshow-skeleton
```

### 2️⃣ Compile

```bash
g++ *.cpp -o bookmyshow
```



## 🚀 Future Enhancements

* Implement different **payment gateways** (Credit Card, UPI, Wallet).
* Add **seat availability checks** before booking.
* Introduce **cancellation & refunds**.
* Add **user authentication & profiles**.
* Build a **database-backed version** instead of in-memory objects.

---

## 📜 License

This project is for **educational purposes** and is not intended for production use.


