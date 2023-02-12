#include "Customer.h"

WX_DEFINE_LIST(CustomerList);

int listcompare(const Customer** arg1, const Customer** arg2)
{
    return ((*arg1)->CustID < (*arg2)->CustID);
}

//Show List operations
void ListTest()
{
    //Declare an instance of our list
    CustomerList* MyList = new CustomerList();

    bool IsEmpty = MyList->IsEmpty();

    //Create some customers
    Customer* CustA = new Customer;
    custA->CustID = 10;
    custA->CustName = wxT("Aaron");

    Customer* custB = new Customer;
    custB->CustID = 12;
    custB->CustName = wxT("Bill");

    Customer* custC = new Customer;
    custC->CustID = 13;
    custC->CustName = wxT("Logan");

    //Append two customers to the list
    MyList->Append(CustA);
    MyList->Append(CustB);

    //Insert last customer into arbitraryt place in the List
    MyList->Insert((size_t)0, CustC);
      int Count = MyList->GetCount(); // will be 3
// If not found, wxNOT_FOUND is returned
int index = MyList->IndexOf(CustB); // will be 2
// Customized node holds our customized data
CustomerList::Node* node = MyList->GetFirst();
// Traverse the nodes and process the customers
while (node)
{
Customer* Cust = node->GetData();
// Process Customer
node = node->GetNext();
}
// Returns the node at the specified position
node = MyList->Item(0);
// Sort the customers according to the sort function
MyList->Sort(listcompare);
384 Data Structure Classes Chapter 13

// Remove Customer A node from the list
MyList->DeleteObject(CustA);
// CustA object is NOT deleted by removing the node
delete CustA;
// Returns the node whose client data is the object
node = MyList->Find(CustB);
// Specifies that data should be deleted when node is deleted
MyList->DeleteContents(true);
// Removes node from the list and deletes that node’s
// data (CustB)
MyList->DeleteNode(node);
// Clears the list, and deletes all stored data
// (DeleteContents is true)
MyList->Clear();
delete MyList;

}

