# Advanced C and C++ Concepts

## Advanced C

### Bài 1: Compiler Process

1. **Compiler (Trình biên dịch)**:
   - Compiler là công cụ chuyển đổi mã nguồn (source code) từ ngôn ngữ cấp cao (như C/C++) sang mã máy.
   - Các bước chính:
     - **Preprocessing**: Xử lý các lệnh tiền xử lý (`#include`, `#define`).
     - **Compilation**: Chuyển đổi mã nguồn thành mã assembly.
     - **Assembly**: Chuyển mã assembly thành mã máy.
     - **Linking**: Kết nối các file mã máy và thư viện thành file thực thi.

2. **Macro**:
   - Macro được định nghĩa bằng `#define`, thay thế các đoạn mã lặp lại, cải thiện hiệu suất.
   - Ví dụ: `#define PI 3.14` hoặc `#define MAX(a,b) ((a) > (b) ? (a) : (b))`.

### Bài 2: Advanced Function Concepts and Debug

1. **Thư viện stdarg**:
   - `stdarg.h` hỗ trợ viết các hàm có số lượng tham số biến đổi.
   - Các macro chính: `va_start`, `va_arg`, `va_end`.

2. **Thư viện assert**:
   - `assert.h` cung cấp hàm `assert()` để kiểm tra một điều kiện trong mã, dừng chương trình nếu điều kiện sai.

### Bài 3: Advanced Pointer

- **Con trỏ hàm**: Lưu địa chỉ của một hàm, giúp gọi hàm qua con trỏ.
- **Con trỏ đến con trỏ**: Lưu địa chỉ của một con trỏ, thường dùng với mảng hai chiều.
- **Con trỏ void**: Trỏ đến bất kỳ kiểu dữ liệu nào, cần ép kiểu khi sử dụng.

### Bài 4: Storage Classes

1. **Extern**:
   - Từ khóa `extern` cho phép khai báo biến hoặc hàm có thể truy cập từ các file khác.

2. **Static**:
   - `static` giới hạn phạm vi của biến/hàm trong file hoặc giữa các lần gọi hàm.

3. **Volatile**:
   - `volatile` báo compiler không tối ưu biến này vì giá trị có thể thay đổi ngoài chương trình.

4. **Register**:
   - `register` gợi ý compiler lưu biến trong thanh ghi CPU để truy xuất nhanh hơn.

### Bài 6: Bit Manipulation

- Các phép toán bit gồm AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), dịch trái (`<<`), dịch phải (`>>`).
- Thường dùng để tối ưu hóa bộ nhớ trong hệ thống nhúng.

### Bài 7: Pending Data

1. **Struct**:
   - `struct` nhóm các biến liên quan thành một đối tượng dữ liệu.

2. **Union**:
   - `union` tương tự `struct`, nhưng các thành viên dùng chung bộ nhớ.

### Bài 8: Memory Layout

- **Text Segment**: Chứa mã chương trình thực thi.
- **Data Segment**: Chứa các biến đã khởi tạo.
- **bss Segment**: Chứa các biến chưa khởi tạo (mặc định 0).
- **Heap**: Bộ nhớ cấp phát động, quản lý bằng `malloc`, `free`.
- **Stack**: Lưu biến cục bộ và lời gọi hàm, giải phóng tự động khi kết thúc hàm.

### Bài 9: Data Structures

1. **JSON**: Định dạng dữ liệu dựa trên text, dùng trong API.
2. **Linked List**: Danh sách liên kết, mỗi node chứa dữ liệu và con trỏ đến node tiếp theo.
3. **Stack**: Cấu trúc dữ liệu LIFO (Last In, First Out).
4. **Queue**: Cấu trúc dữ liệu FIFO (First In, First Out).

### Bài 10: Big Exercise No.1

- **Binary Search**: Thuật toán tìm kiếm nhị phân trên mảng đã sắp xếp.

## C++

### Bài 11: Class

Trong C++, một lớp (`class`) là một blueprint (khuôn mẫu) cho các đối tượng, bao gồm các thuộc tính (biến) và phương thức (hàm) để xử lý dữ liệu của đối tượng. Đây là phần cốt lõi của lập trình hướng đối tượng (OOP). Các thành phần chính trong một lớp gồm:

1. **Khai báo lớp**:
   - Một lớp được khai báo bằng từ khóa `class`, theo sau là tên lớp và các thành viên trong cặp dấu ngoặc nhọn `{}`.
   - Ví dụ:
     ```cpp
     class Car {
     public:
         int speed; // Thuộc tính (biến thành viên)
         void drive() { // Phương thức (hàm thành viên)
             cout << "Driving at " << speed << " km/h";
         }
     };
     ```

2. **Thuộc tính (Attributes)**:
   - Thuộc tính là các biến trong lớp lưu trữ trạng thái của đối tượng.
   - Trong ví dụ trên, `speed` là một thuộc tính của lớp `Car`.

3. **Phương thức (Methods)**:
   - Phương thức là các hàm trong lớp thực hiện các hành động liên quan đến dữ liệu của đối tượng.
   - Trong ví dụ trên, `drive()` là một phương thức của lớp `Car`.

4. **Access Specifiers (Các mức truy cập)**:
   - `public`, `private`, và `protected` là các mức truy cập cho phép kiểm soát việc truy cập thành viên của lớp từ bên ngoài:
     - **public**: Thành viên có thể được truy cập từ bên ngoài lớp.
     - **private**: Thành viên chỉ có thể được truy cập từ bên trong lớp.
     - **protected**: Thành viên có thể được truy cập từ bên trong lớp và các lớp kế thừa.

5. **Constructor (Hàm khởi tạo)**:
   - Constructor là một phương thức đặc biệt được gọi tự động khi một đối tượng của lớp được tạo. Constructor thường được dùng để khởi tạo giá trị cho các thuộc tính của lớp.
   - Ví dụ:
     ```cpp
     class Car {
     public:
         int speed;
         Car(int s) { // Constructor
             speed = s;
         }
     };
     ```

6. **Destructor (Hàm hủy)**:
   - Destructor là một phương thức đặc biệt được gọi tự động khi một đối tượng của lớp bị hủy. Destructor dùng để giải phóng tài nguyên nếu cần.
   - Ví dụ:
     ```cpp
     class Car {
     public:
         ~Car() { // Destructor
             cout << "Car destroyed" << endl;
         }
     };
     ```

7. **Tạo đối tượng từ lớp**:
   - Một đối tượng là một thể hiện cụ thể của lớp. Khi một đối tượng được tạo, bộ nhớ được cấp phát cho tất cả các thuộc tính của nó.
   - Ví dụ:
     ```cpp
     Car myCar(100); // Tạo đối tượng myCar từ lớp Car với tốc độ 100 km/h
     myCar.drive();  // Gọi phương thức drive() của đối tượng myCar
     ```

8. **Tính đóng gói và kiểm soát truy cập**:
   - Bằng cách sử dụng `private` và `public`, các lớp có thể kiểm soát việc truy cập các thành viên của chúng từ bên ngoài, đảm bảo rằng dữ liệu chỉ được thay đổi theo các cách được cho phép.
   - Ví dụ:
     ```cpp
     class Car {
     private:
         int speed;
     public:
         void setSpeed(int s) {
             speed = s;
         }
         int getSpeed() {
             return speed;
         }
     };

     Car myCar;
     myCar.setSpeed(100); // Đặt tốc độ qua phương thức setSpeed
     cout << myCar.getSpeed(); // Lấy tốc độ qua phương thức getSpeed
     ```

Lớp (`class`) trong C++ là một công cụ mạnh mẽ giúp quản lý và tổ chức mã nguồn một cách rõ ràng và an toàn. Các đối tượng từ lớp có thể tạo ra những thể hiện với trạng thái và hành vi riêng biệt, hỗ trợ tốt cho các khái niệm của lập trình hướng đối tượng.
### Bài 12: OOP (Object-Oriented Programming)

Lập trình hướng đối tượng (OOP) là một mô hình lập trình dựa trên khái niệm về các "đối tượng", bao gồm dữ liệu và các phương thức. Các nguyên lý chính của OOP bao gồm:

1. **Encapsulation (Đóng gói)**:
   - Encapsulation là quá trình đóng gói dữ liệu và các phương thức liên quan vào một lớp (class) và ẩn chi tiết triển khai của chúng khỏi bên ngoài. Điều này giúp bảo vệ dữ liệu khỏi sự can thiệp hoặc sửa đổi từ bên ngoài.
   - Trong C++, `private`, `protected`, và `public` là các mức độ truy cập giúp thực hiện encapsulation.
   - Ví dụ:
     ```cpp
     class Car {
     private:
         int speed;
     public:
         void setSpeed(int s) {
             speed = s;
         }
         int getSpeed() {
             return speed;
         }
     };
     ```

2. **Inheritance (Kế thừa)**:
   - Inheritance cho phép một lớp (lớp con) kế thừa các thuộc tính và phương thức của một lớp khác (lớp cha). Điều này giúp tái sử dụng mã và xây dựng các hệ thống phân cấp.
   - Trong C++, kế thừa được thực hiện bằng cú pháp `class Subclass : access_specifier BaseClass`.
   - Ví dụ:
     ```cpp
     class Vehicle {
     public:
         void move() {
             cout << "Moving..." << endl;
         }
     };

     class Car : public Vehicle {
     public:
         void drive() {
             cout << "Driving a car" << endl;
         }
     };
     ```

3. **Polymorphism (Đa hình)**:
   - Polymorphism cho phép gọi các phương thức cùng tên nhưng với hành vi khác nhau. Trong C++, điều này đạt được thông qua phương thức ảo (`virtual function`) và ghi đè phương thức (`method overriding`).
   - Ví dụ:
     ```cpp
     class Animal {
     public:
         virtual void sound() {
             cout << "Some generic animal sound" << endl;
         }
     };

     class Dog : public Animal {
     public:
         void sound() override {
             cout << "Woof!" << endl;
         }
     };
     ```

4. **Abstraction (Trừu tượng hóa)**:
   - Abstraction là quá trình ẩn đi các chi tiết triển khai không cần thiết và chỉ hiển thị các chức năng cốt lõi. Trong C++, abstraction được thực hiện qua các lớp trừu tượng với các phương thức thuần ảo (`pure virtual functions`).
   - Ví dụ:
     ```cpp
     class Shape {
     public:
         virtual void draw() = 0; // phương thức thuần ảo
     };

     class Circle : public Shape {
     public:
         void draw() override {
             cout << "Drawing Circle" << endl;
         }
     };

### Bài 13: Smart Pointer

Smart Pointer (con trỏ thông minh) là một tính năng trong C++ giúp quản lý bộ nhớ tự động mà không cần phải giải phóng bộ nhớ thủ công như khi sử dụng con trỏ thông thường. Các Smart Pointer nằm trong thư viện `memory` và hỗ trợ tránh rò rỉ bộ nhớ bằng cách tự động giải phóng bộ nhớ khi không còn sử dụng.

Các loại Smart Pointer trong C++:

1. **std::unique_ptr**:
   - `unique_ptr` là một smart pointer đảm bảo rằng chỉ có một con trỏ duy nhất sở hữu đối tượng.
   - Không thể sao chép (copy), nhưng có thể chuyển nhượng quyền sở hữu (move).
   - Ví dụ:
     ```cpp
     #include <memory>
     #include <iostream>

     void uniquePtrExample() {
         std::unique_ptr<int> ptr = std::make_unique<int>(10);
         std::cout << "Value: " << *ptr << std::endl;
     }
     ```

2. **std::shared_ptr**:
   - `shared_ptr` là một smart pointer có thể chia sẻ quyền sở hữu đối tượng cho nhiều con trỏ khác nhau.
   - Đối tượng được giải phóng khi không còn `shared_ptr` nào sở hữu nó (dựa trên đếm tham chiếu).
   - Ví dụ:
     ```cpp
     #include <memory>
     #include <iostream>

     void sharedPtrExample() {
         std::shared_ptr<int> ptr1 = std::make_shared<int>(20);
         std::shared_ptr<int> ptr2 = ptr1; // ptr1 và ptr2 cùng sở hữu đối tượng
         std::cout << "Value: " << *ptr1 << ", Count: " << ptr1.use_count() << std::endl;
     }
     ```

3. **std::weak_ptr**:
   - `weak_ptr` là một smart pointer hỗ trợ tham chiếu đến đối tượng mà không sở hữu nó, dùng để tránh vòng tham chiếu khi sử dụng `shared_ptr`.
   - `weak_ptr` không tăng đếm tham chiếu của đối tượng.
   - Thường được dùng cùng với `shared_ptr`.
   - Ví dụ:
     ```cpp
     #include <memory>
     #include <iostream>

     void weakPtrExample() {
         std::shared_ptr<int> sharedPtr = std::make_shared<int>(30);
         std::weak_ptr<int> weakPtr = sharedPtr; // weakPtr không sở hữu đối tượng

         if (auto sp = weakPtr.lock()) { // Kiểm tra đối tượng còn tồn tại không
             std::cout << "Value: " << *sp << std::endl;
         }
     }
     ```

Smart Pointer giúp quản lý bộ nhớ dễ dàng và hiệu quả hơn, đặc biệt trong các chương trình phức tạp và các cấu trúc dữ liệu có liên kết vòng.

---

### Bài 14: Operator và Template

**Operator Overloading (Nạp chồng toán tử)**

Operator Overloading là một tính năng trong C++ cho phép định nghĩa lại cách các toán tử hoạt động với các đối tượng của lớp tùy chỉnh. Điều này giúp thao tác với các đối tượng trở nên dễ dàng và rõ ràng hơn.

1. **Nạp chồng toán tử**:
   - Toán tử được nạp chồng bằng cách sử dụng từ khóa `operator` theo sau là ký hiệu của toán tử.
   - Ví dụ nạp chồng toán tử `+` cho lớp `Complex`:
     ```cpp
     #include <iostream>

     class Complex {
     private:
         float real;
         float imag;
     public:
         Complex(float r = 0, float i = 0) : real(r), imag(i) {}

         // Nạp chồng toán tử +
         Complex operator + (const Complex& obj) {
             return Complex(real + obj.real, imag + obj.imag);
         }

         void display() {
             std::cout << real << " + " << imag << "i" << std::endl;
         }
     };

     void operatorOverloadingExample() {
         Complex c1(3.5, 2.5), c2(1.5, 2.0);
         Complex c3 = c1 + c2;
         c3.display(); // Output: 5 + 4.5i
     }
     ```

2. **Nạp chồng toán tử so sánh**:
   - Các toán tử so sánh (như `==`, `<`, `>`, `<=`, `>=`) cũng có thể được nạp chồng để so sánh các đối tượng.
   - Ví dụ:
     ```cpp
     bool operator == (const Complex& obj) {
         return (real == obj.real && imag == obj.imag);
     }
     ```

**Template (Khuôn mẫu)**

Template là một tính năng mạnh mẽ trong C++ cho phép tạo ra các hàm hoặc lớp tổng quát, có thể làm việc với nhiều kiểu dữ liệu khác nhau mà không cần viết lại mã nguồn.

1. **Function Template**:
   - Tạo ra các hàm chung cho nhiều kiểu dữ liệu.
   - Ví dụ:
     ```cpp
     template <typename T>
     T add(T a, T b) {
         return a + b;
     }

     void functionTemplateExample() {
         std::cout << add<int>(3, 4) << std::endl; // Output: 7
         std::cout << add<double>(3.5, 4.5) << std::endl; // Output: 8.0
     }
     ```

2. **Class Template**:
   - Tạo ra các lớp chung cho nhiều kiểu dữ liệu.
   - Ví dụ:
     ```cpp
     template <typename T>
     class Calculator {
     private:
         T a, b;
     public:
         Calculator(T x, T y) : a(x), b(y) {}
         T add() { return a + b; }
         T multiply() { return a * b; }
     };

     void classTemplateExample() {
         Calculator<int> intCalc(3, 4);
         std::cout << "Int Add: " << intCalc.add() << std::endl; // Output: 7

         Calculator<double> doubleCalc(3.5, 2.0);
         std::cout << "Double Multiply: " << doubleCalc.multiply() << std::endl; // Output: 7.0
     }
     ```

Templates giúp xây dựng các hàm và lớp tổng quát, tăng tính tái sử dụng và tính linh hoạt cho mã nguồn.


### Bài 15: Design Pattern

Design Patterns (Mẫu thiết kế) là các giải pháp tối ưu đã được chứng minh cho các vấn đề phổ biến trong thiết kế phần mềm. Một số mẫu thiết kế nổi bật:

1. **Singleton Pattern**:
   - Đảm bảo rằng một lớp chỉ có một thể hiện duy nhất và cung cấp một điểm truy cập toàn cục cho nó.
   - Thường dùng trong các trường hợp cần quản lý tài nguyên chung (như cơ sở dữ liệu).
   - Ví dụ:
     ```cpp
     class Singleton {
     private:
         static Singleton* instance;
         Singleton() {} // Constructor private
     public:
         static Singleton* getInstance() {
             if (!instance) {
                 instance = new Singleton();
             }
             return instance;
         }
     };

     Singleton* Singleton::instance = nullptr;
     ```

2. **Factory Pattern**:
   - Tạo ra các đối tượng mà không cần xác định lớp chính xác của chúng.
   - Thường dùng khi có một số lớp con và quyết định lớp nào sẽ được khởi tạo tùy thuộc vào điều kiện.
   - Ví dụ:
     ```cpp
     class Animal {
     public:
         virtual void sound() = 0;
     };

     class Dog : public Animal {
     public:
         void sound() override {
             cout << "Woof!" << endl;
         }
     };

     class Cat : public Animal {
     public:
         void sound() override {
             cout << "Meow!" << endl;
         }
     };

     class AnimalFactory {
     public:
         static Animal* createAnimal(const string& type) {
             if (type == "Dog") return new Dog();
             else if (type == "Cat") return new Cat();
             return nullptr;
         }
     };
     ```

3. **Observer Pattern**:
   - Cho phép một đối tượng (Observer) đăng ký nhận thông báo khi có thay đổi ở đối tượng khác (Subject).
   - Thường dùng trong các hệ thống nơi mà một thay đổi ở một đối tượng cần được thông báo đến nhiều đối tượng khác.
   - Ví dụ:
     ```cpp
     class Observer {
     public:
         virtual void update() = 0;
     };

     class Subject {
     private:
         vector<Observer*> observers;
     public:
         void addObserver(Observer* obs) {
             observers.push_back(obs);
         }
         void notify() {
             for (Observer* obs : observers) {
                 obs->update();
             }
         }
     };

     class ConcreteObserver : public Observer {
     public:
         void update() override {
             cout << "Observer updated" << endl;
         }
     };
     ```

4. **Strategy Pattern**:
   - Cho phép thay đổi thuật toán thực hiện tại runtime.
   - Thường dùng khi có nhiều cách xử lý cho một nhiệm vụ cụ thể và cần linh hoạt chuyển đổi giữa các cách đó.
   - Ví dụ:
     ```cpp
     class Strategy {
     public:
         virtual void execute() = 0;
     };

     class ConcreteStrategyA : public Strategy {
     public:
         void execute() override {
             cout << "Executing Strategy A" << endl;
         }
     };

     class ConcreteStrategyB : public Strategy {
     public:
         void execute() override {
             cout << "Executing Strategy B" << endl;
         }
     };

     class Context {
     private:
         Strategy* strategy;
     public:
         void setStrategy(Strategy* strat) {
             strategy = strat;
         }
         void executeStrategy() {
             strategy->execute();
         }
     };
     ```
