#pragma once
#include "Money.h"

namespace Project1 
{
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            moneyList = gcnew MoneyList(textBoxOutput);

            moneyList->addMoney(gcnew Deposit("Pavlo", 1000, 8, 5));
            moneyList->addMoney(gcnew YearDeposit("Petro", 1500, 7, 3, 2));
            moneyList->addMoney(gcnew MoneyManagement("Ivan", 1700, 6, 4));

            moneyList->printAll();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::TextBox^ textBoxName;
        System::Windows::Forms::TextBox^ textBoxMoney;
        System::Windows::Forms::TextBox^ textBoxRate;
        System::Windows::Forms::TextBox^ textBoxTime;
        System::Windows::Forms::TextBox^ textBoxPeriods;
        System::Windows::Forms::TextBox^ textBoxOutput;
        System::Windows::Forms::Button^ buttonAddDeposit;
        System::Windows::Forms::Button^ buttonAddYearDeposit;
        System::Windows::Forms::Button^ buttonAddMoneyManagement;
        System::Windows::Forms::Button^ buttonShowAll;
        System::Windows::Forms::Label^ labelName;
        System::Windows::Forms::Label^ labelSum;
        System::Windows::Forms::Label^ labelRate;
        System::Windows::Forms::Label^ labelTime;
        System::Windows::Forms::Label^ labelPeriods;
        MoneyList^ moneyList;
    private: System::Windows::Forms::TextBox^ textBoxAmount;
    private: System::Windows::Forms::Button^ buttonAdd;
    private: System::Windows::Forms::Button^ buttonWithdraw;


        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->textBoxName = (gcnew System::Windows::Forms::TextBox());
            this->textBoxMoney = (gcnew System::Windows::Forms::TextBox());
            this->textBoxRate = (gcnew System::Windows::Forms::TextBox());
            this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
            this->textBoxPeriods = (gcnew System::Windows::Forms::TextBox());
            this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
            this->buttonAddDeposit = (gcnew System::Windows::Forms::Button());
            this->buttonAddYearDeposit = (gcnew System::Windows::Forms::Button());
            this->buttonAddMoneyManagement = (gcnew System::Windows::Forms::Button());
            this->buttonShowAll = (gcnew System::Windows::Forms::Button());
            this->labelName = (gcnew System::Windows::Forms::Label());
            this->labelSum = (gcnew System::Windows::Forms::Label());
            this->labelRate = (gcnew System::Windows::Forms::Label());
            this->labelTime = (gcnew System::Windows::Forms::Label());
            this->labelPeriods = (gcnew System::Windows::Forms::Label());
            this->textBoxAmount = (gcnew System::Windows::Forms::TextBox());
            this->buttonAdd = (gcnew System::Windows::Forms::Button());
            this->buttonWithdraw = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            
            // textBoxName 
            this->textBoxName->Location = System::Drawing::Point(148, 11);
            this->textBoxName->Name = L"textBoxName";
            this->textBoxName->Size = System::Drawing::Size(121, 22);
            this->textBoxName->TabIndex = 0;
            this->textBoxName->GotFocus += gcnew System::EventHandler(this, &MyForm::textBoxName_GotFocus);

            // textBoxMoney
            this->textBoxMoney->Location = System::Drawing::Point(148, 50);
            this->textBoxMoney->Name = L"textBoxMoney";
            this->textBoxMoney->Size = System::Drawing::Size(121, 22);
            this->textBoxMoney->TabIndex = 1;
            this->textBoxMoney->GotFocus += gcnew System::EventHandler(this, &MyForm::textBoxMoney_GotFocus);
            
            // textBoxRate
            this->textBoxRate->Location = System::Drawing::Point(148, 87);
            this->textBoxRate->Name = L"textBoxRate";
            this->textBoxRate->Size = System::Drawing::Size(121, 22);
            this->textBoxRate->TabIndex = 2;
            this->textBoxRate->GotFocus += gcnew System::EventHandler(this, &MyForm::textBoxRate_GotFocus);
            
            // textBoxTime
            this->textBoxTime->Location = System::Drawing::Point(148, 130);
            this->textBoxTime->Name = L"textBoxTime";
            this->textBoxTime->Size = System::Drawing::Size(121, 22);
            this->textBoxTime->TabIndex = 3;
            this->textBoxTime->GotFocus += gcnew System::EventHandler(this, &MyForm::textBoxTime_GotFocus);
             
            // textBoxPeriods
            this->textBoxPeriods->Location = System::Drawing::Point(148, 167);
            this->textBoxPeriods->Name = L"textBoxPeriods";
            this->textBoxPeriods->Size = System::Drawing::Size(121, 22);
            this->textBoxPeriods->TabIndex = 4;
            this->textBoxPeriods->GotFocus += gcnew System::EventHandler(this, &MyForm::textBoxPeriods_GotFocus);
            
            // textBoxOutput
            this->textBoxOutput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left));
            this->textBoxOutput->BackColor = System::Drawing::SystemColors::ControlLightLight;
            this->textBoxOutput->Location = System::Drawing::Point(148, 274);
            this->textBoxOutput->Multiline = true;
            this->textBoxOutput->Name = L"textBoxOutput";
            this->textBoxOutput->ReadOnly = true;
            this->textBoxOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBoxOutput->Size = System::Drawing::Size(966, 216);
            this->textBoxOutput->TabIndex = 5;
            
            // buttonAddDeposit
            this->buttonAddDeposit->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonAddDeposit->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonAddDeposit->Location = System::Drawing::Point(352, 47);
            this->buttonAddDeposit->Name = L"buttonAddDeposit";
            this->buttonAddDeposit->Size = System::Drawing::Size(250, 50);
            this->buttonAddDeposit->TabIndex = 6;
            this->buttonAddDeposit->Text = L"Add element of Deposit";
            this->buttonAddDeposit->UseVisualStyleBackColor = false;
            this->buttonAddDeposit->Click += gcnew System::EventHandler(this, &MyForm::buttonAddDeposit_Click);
            
            // buttonAddYearDeposit
            this->buttonAddYearDeposit->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonAddYearDeposit->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonAddYearDeposit->Location = System::Drawing::Point(352, 103);
            this->buttonAddYearDeposit->Name = L"buttonAddYearDeposit";
            this->buttonAddYearDeposit->Size = System::Drawing::Size(250, 53);
            this->buttonAddYearDeposit->TabIndex = 7;
            this->buttonAddYearDeposit->Text = L"Add element of YearDeposit";
            this->buttonAddYearDeposit->UseVisualStyleBackColor = false;
            this->buttonAddYearDeposit->Click += gcnew System::EventHandler(this, &MyForm::buttonAddYearDeposit_Click);
            
            // buttonAddMoneyManagement
            this->buttonAddMoneyManagement->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->buttonAddMoneyManagement->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonAddMoneyManagement->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->buttonAddMoneyManagement->Location = System::Drawing::Point(1095, 75);
            this->buttonAddMoneyManagement->Name = L"buttonAddMoneyManagement";
            this->buttonAddMoneyManagement->Size = System::Drawing::Size(196, 50);
            this->buttonAddMoneyManagement->TabIndex = 8;
            this->buttonAddMoneyManagement->Text = L"Add element of MoneyManagement";
            this->buttonAddMoneyManagement->UseVisualStyleBackColor = false;
            this->buttonAddMoneyManagement->Click += gcnew System::EventHandler(this, &MyForm::buttonAddMoneyManagement_Click);
            
            // buttonShowAll
            this->buttonShowAll->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonShowAll->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonShowAll->Location = System::Drawing::Point(42, 360);
            this->buttonShowAll->Name = L"buttonShowAll";
            this->buttonShowAll->Size = System::Drawing::Size(100, 28);
            this->buttonShowAll->TabIndex = 9;
            this->buttonShowAll->Text = L"Show all";
            this->buttonShowAll->UseVisualStyleBackColor = false;
            this->buttonShowAll->Click += gcnew System::EventHandler(this, &MyForm::buttonShowAll_Click);
            
            // labelName
            this->labelName->AutoSize = true;
            this->labelName->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelName->Location = System::Drawing::Point(38, 11);
            this->labelName->Name = L"labelName";
            this->labelName->Size = System::Drawing::Size(67, 23);
            this->labelName->TabIndex = 10;
            this->labelName->Text = L"Name";
            
            // labelSum
            this->labelSum->AutoSize = true;
            this->labelSum->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelSum->Location = System::Drawing::Point(38, 50);
            this->labelSum->Name = L"labelSum";
            this->labelSum->Size = System::Drawing::Size(53, 23);
            this->labelSum->TabIndex = 11;
            this->labelSum->Text = L"Sum";
             
            // labelRate
            this->labelRate->AutoSize = true;
            this->labelRate->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelRate->Location = System::Drawing::Point(38, 87);
            this->labelRate->Name = L"labelRate";
            this->labelRate->Size = System::Drawing::Size(55, 23);
            this->labelRate->TabIndex = 12;
            this->labelRate->Text = L"Rate";
             
            // labelTime
            this->labelTime->AutoSize = true;
            this->labelTime->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTime->Location = System::Drawing::Point(38, 133);
            this->labelTime->Name = L"labelTime";
            this->labelTime->Size = System::Drawing::Size(58, 23);
            this->labelTime->TabIndex = 13;
            this->labelTime->Text = L"Time";
             
            // labelPeriods
            this->labelPeriods->AutoSize = true;
            this->labelPeriods->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPeriods->Location = System::Drawing::Point(38, 167);
            this->labelPeriods->Name = L"labelPeriods";
            this->labelPeriods->Size = System::Drawing::Size(85, 23);
            this->labelPeriods->TabIndex = 14;
            this->labelPeriods->Text = L"Periods";
            
            // textBoxAmount
            this->textBoxAmount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->textBoxAmount->Location = System::Drawing::Point(794, 90);
            this->textBoxAmount->Name = L"textBoxAmount";
            this->textBoxAmount->Size = System::Drawing::Size(121, 22);
            this->textBoxAmount->TabIndex = 18;
             
            // buttonAdd 
            this->buttonAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->buttonAdd->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAdd->Location = System::Drawing::Point(944, 74);
            this->buttonAdd->Name = L"buttonAdd";
            this->buttonAdd->Size = System::Drawing::Size(133, 23);
            this->buttonAdd->TabIndex = 19;
            this->buttonAdd->Text = L"Add amount";
            this->buttonAdd->UseVisualStyleBackColor = false;
            this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
            
            // buttonWithdraw
            this->buttonWithdraw->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->buttonWithdraw->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonWithdraw->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonWithdraw->Location = System::Drawing::Point(944, 103);
            this->buttonWithdraw->Name = L"buttonWithdraw";
            this->buttonWithdraw->Size = System::Drawing::Size(133, 23);
            this->buttonWithdraw->TabIndex = 20;
            this->buttonWithdraw->Text = L"Withdraw amount";
            this->buttonWithdraw->UseVisualStyleBackColor = false;
            this->buttonWithdraw->Click += gcnew System::EventHandler(this, &MyForm::buttonWithdraw_Click);
             
            // MyForm
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1357, 512);
            this->Controls->Add(this->buttonWithdraw);
            this->Controls->Add(this->buttonAdd);
            this->Controls->Add(this->textBoxAmount);
            this->Controls->Add(this->labelPeriods);
            this->Controls->Add(this->labelTime);
            this->Controls->Add(this->labelRate);
            this->Controls->Add(this->labelSum);
            this->Controls->Add(this->labelName);
            this->Controls->Add(this->textBoxName);
            this->Controls->Add(this->textBoxMoney);
            this->Controls->Add(this->textBoxRate);
            this->Controls->Add(this->textBoxTime);
            this->Controls->Add(this->textBoxPeriods);
            this->Controls->Add(this->textBoxOutput);
            this->Controls->Add(this->buttonAddDeposit);
            this->Controls->Add(this->buttonAddYearDeposit);
            this->Controls->Add(this->buttonAddMoneyManagement);
            this->Controls->Add(this->buttonShowAll);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void buttonAddDeposit_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrEmpty(textBoxName->Text) || String::IsNullOrEmpty(textBoxMoney->Text) ||
                String::IsNullOrEmpty(textBoxRate->Text) || String::IsNullOrEmpty(textBoxTime->Text))
            {
                MessageBox::Show("Please fill in all the fields for Deposit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            String^ name = textBoxName->Text;
            double money = Convert::ToDouble(textBoxMoney->Text);
            double rate = Convert::ToDouble(textBoxRate->Text);
            int time = Convert::ToInt32(textBoxTime->Text);

            moneyList->addMoney(gcnew Deposit(name, money, rate, time));
            clearTextBoxes();
        }

        System::Void buttonAddYearDeposit_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrEmpty(textBoxName->Text) || String::IsNullOrEmpty(textBoxMoney->Text) ||
                String::IsNullOrEmpty(textBoxRate->Text) || String::IsNullOrEmpty(textBoxTime->Text) ||
                String::IsNullOrEmpty(textBoxPeriods->Text))
            {
                MessageBox::Show("Please fill in all the fields for YearDeposit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            String^ name = textBoxName->Text;
            double money = Convert::ToDouble(textBoxMoney->Text);
            double rate = Convert::ToDouble(textBoxRate->Text);
            int time = Convert::ToInt32(textBoxTime->Text);
            int periods = Convert::ToInt32(textBoxPeriods->Text);

            moneyList->addMoney(gcnew YearDeposit(name, money, rate, time, periods));
            clearTextBoxes();
        }

        System::Void buttonAddMoneyManagement_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrEmpty(textBoxName->Text) || String::IsNullOrEmpty(textBoxMoney->Text) ||
                String::IsNullOrEmpty(textBoxRate->Text) || String::IsNullOrEmpty(textBoxTime->Text))
            {
                MessageBox::Show("Please fill in all the fields for MoneyManagement", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            String^ name = textBoxName->Text;
            double money = Convert::ToDouble(textBoxMoney->Text);
            double rate = Convert::ToDouble(textBoxRate->Text);
            int time = Convert::ToInt32(textBoxTime->Text);

            moneyList->addMoney(gcnew MoneyManagement(name, money, rate, time));
            clearTextBoxes();
        }


        System::Void buttonWithdrawAmount_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrEmpty(textBoxAmount->Text))
            {
                MessageBox::Show("Please enter the amount to withdraw", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            double amount = Convert::ToDouble(textBoxAmount->Text);
            MoneyManagement^ money = moneyList->getLatestMoneyManagement();
            if (money != nullptr)
            {
                money->withdraw(amount);
                moneyList->printAll();
                textBoxAmount->Clear();
            }
            else
            {
                MessageBox::Show("No MoneyManagement object found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void buttonShowAll_Click(System::Object^ sender, System::EventArgs^ e)
        {
            moneyList->printAll();
        }

        void clearTextBoxes()
        {
            textBoxName->Clear();
            textBoxMoney->Clear();
            textBoxRate->Clear();
            textBoxTime->Clear();
            textBoxPeriods->Clear();
            textBoxAmount->Clear();
        }

        void textBoxName_GotFocus(System::Object^ sender, System::EventArgs^ e)
        {
            if (textBoxName->Text == "Name") textBoxName->Clear();
        }

        void textBoxMoney_GotFocus(System::Object^ sender, System::EventArgs^ e)
        {
            if (textBoxMoney->Text == "Sum") textBoxMoney->Clear();
        }

        void textBoxRate_GotFocus(System::Object^ sender, System::EventArgs^ e)
        {
            if (textBoxRate->Text == "Rate") textBoxRate->Clear();
        }

        void textBoxTime_GotFocus(System::Object^ sender, System::EventArgs^ e)
        {
            if (textBoxTime->Text == "Time") textBoxTime->Clear();
        }

        void textBoxPeriods_GotFocus(System::Object^ sender, System::EventArgs^ e)
        {
            if (textBoxPeriods->Text == "Periods") textBoxPeriods->Clear();
        }

        void textBoxAmount_GotFocus(System::Object^ sender, System::EventArgs^ e)
        {
            if (textBoxAmount->Text == "Amount") textBoxAmount->Clear();
        }


    private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBoxAmount->Text))
        {
            MessageBox::Show("Please enter the amount to add", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        double amount = Convert::ToDouble(textBoxAmount->Text);
        MoneyManagement^ money = moneyList->getLatestMoneyManagement();
        if (money != nullptr)
        {
            money->add(amount);
            moneyList->printAll();
            textBoxAmount->Clear();
        }
        else
        {
            MessageBox::Show("No MoneyManagement object found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

private: System::Void buttonWithdraw_Click(System::Object^ sender, System::EventArgs^ e) {
    if (String::IsNullOrEmpty(textBoxAmount->Text))
    {
        MessageBox::Show("Please enter the amount to withdraw", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    double amount = Convert::ToDouble(textBoxAmount->Text);
    MoneyManagement^ money = moneyList->getLatestMoneyManagement();
    if (money != nullptr)
    {
        money->withdraw(amount);
        moneyList->printAll();
        textBoxAmount->Clear();
    }
    else
    {
        MessageBox::Show("No MoneyManagement object found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
};
}
