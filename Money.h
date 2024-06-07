#pragma once

#include <cmath>
#include <string>
#include <vcclr.h>

using namespace System;
using namespace System::Windows::Forms;

ref class Money {
private:
    String^ name;
    double money;
    double rate;
    int time;

public:
    Money() : name(""), money(0), rate(0), time(0) {}

    Money(String^ n, double m, double r, int t) : name(n), money(m), rate(r), time(t) {}

    Money(Money^ other) : name(other->name), money(other->money), rate(other->rate), time(other->time) {}

    void setName(String^ n) { name = n; }
    void setMoney(double m) { money = m; }
    void setRate(double r) { rate = r; }
    void setTime(int t) { time = t; }

    String^ getName() { return name; }
    double getMoney() { return money; }
    double getRate() { return rate; }
    int getTime() { return time; }

    virtual double calculateMoney() = 0;

    virtual String^ ToString() override {
        return "Name: " + name + "\r\nInvestment: " + money + "\r\nRate(%): " + rate + "\r\nYears: " + time + "\r\nTotal amount: " + calculateMoney();
    }

};

ref class Deposit : public Money {
public:
    Deposit() : Money() {}
    Deposit(String^ n, double m, double r, int t) : Money(n, m, r, t) {}
    Deposit(Deposit^ other) : Money(other) {}

    double calculateMoney() override {
        return getMoney() * Math::Pow((1 + getRate() / 100), getTime());
    }

    String^ ToString() override {
        return Money::ToString();
    }
};

ref class YearDeposit : public Money {
private:
    int periods;

public:
    YearDeposit() : Money(), periods(1) {}
    YearDeposit(String^ n, double m, double r, int t, int p) : Money(n, m, r, t), periods(p) {}
    YearDeposit(YearDeposit^ other) : Money(other), periods(other->periods) {}

    void setPeriods(int p) { periods = p; }
    int getPeriods() { return periods; }

    double calculateMoney() override {
        return getMoney() * Math::Pow((1 + getRate() / 100), getTime() * periods);
    }

    String^ ToString() override {
        return Money::ToString() + "\r\nAccruals per year: " + periods;
    }
};

ref class MoneyManagement : public Money {
public:
    MoneyManagement() : Money() {}
    MoneyManagement(String^ n, double m, double r, int t) : Money(n, m, r, t) {}
    MoneyManagement(MoneyManagement^ other) : Money(other) {}

    void add(double amount) { setMoney(getMoney() + amount); }
    void withdraw(double amount) {
        if (amount <= getMoney()) {
            setMoney(getMoney() - amount);
        }
        else {
            Console::WriteLine("Too big amount.");
        }
    }

    double calculateMoney() override {
        return getMoney() * Math::Pow((1 + getRate() / 100), getTime());
    }

    String^ ToString() override {
        return Money::ToString();
    }
};

ref class MoneyList {
private:
    ref struct Node {
        Money^ data;
        Node^ next;
        Node(Money^ m) : data(m), next(nullptr) {}
    };
    Node^ head;
    TextBox^ tBox;
    MoneyManagement^ latestMoneyManagement; 

public:
    MoneyList(TextBox^ textBox) : head(nullptr), tBox(textBox), latestMoneyManagement(nullptr) {}

    void addMoney(Money^ m) {
        Node^ newNode = gcnew Node(m);
        newNode->next = head;
        head = newNode;

        MoneyManagement^ mm = dynamic_cast<MoneyManagement^>(m);
        if (mm != nullptr) {
            latestMoneyManagement = mm;
        }
    }

    double calculateTotalMoney() {
        double total = 0;
        Node^ current = head;
        while (current != nullptr) {
            total += current->data->calculateMoney();
            current = current->next;
        }
        return total;
    }

    void printAll() {
        Node^ current = head;
        tBox->Text = "All investments:\r\n";
        while (current != nullptr) {
            tBox->Text += current->data->ToString() + "\r\n\r\n";
            current = current->next;
        }
        tBox->Text += "Total amount for all investments: " + calculateTotalMoney();
    }

    MoneyManagement^ getLatestMoneyManagement() {
        return latestMoneyManagement; 
    }

};
