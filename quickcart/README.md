# QuickCart

A console-based grocery shopping simulator written in C++, built as a group capstone project for CSCI 272 (Object-Oriented Programming). QuickCart lets a customer browse product categories, add items to a cart, and check out with a printed receipt.

## How it works

- The customer picks a category: **Dairy**, **Produce**, or **Medicine**.
- Each category offers a small menu of items with fixed prices; the customer can add multiple items before finishing.
- Selected items are added to a shopping **Cart**, which the customer can view with a running total.
- At checkout, the cart's contents are transferred to a **Receipt**, which is printed with itemized prices and a total.

## Design

The project demonstrates core OOP concepts:

- `Categories` is a base class, with `Dairy`, `Produce`, and `Medicine` as derived classes (inheritance/polymorphism).
- `Cart`, `Customer`, and `Receipt` collaborate via composition — a `Customer` owns a `Cart`, and a `Cart` fills a `Receipt` at checkout.

## Files

| File | Purpose |
|---|---|
| `main.cpp` | Program entry point / shopping flow |
| `Customer.h` | Customer identity, cart ownership, checkout flow |
| `Categories.h` | Base class for product categories |
| `Dairy.h`, `Produce.h`, `Medicine.h` | Category-specific item menus (derived classes) |
| `Cart.h` | Holds selected items, computes totals |
| `Receipt.h` | Prints the final itemized receipt |

## Build & run

```bash
g++ -std=c++17 -o quickcart main.cpp
./quickcart
```

## Concepts used

Inheritance, class composition, vectors, and console-based interactive I/O in C++.
