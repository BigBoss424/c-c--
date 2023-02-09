#include <cassert>

void updateFinancialAid(int numRecords, StudentAidRecord studentRecord[],
                        double percent)
/*------------------------------------------------------------------------
 *  Increase the amount of all financial aid awards in an array of student
 *  financial aid records by a specified percentage. 
 *
 *  Precondition: numRecords > 0 and percent > 0 is expressed as a decimal
 *  Postcondition: Each record in finAidArray has been modified by increasing
 *                 the amount of each financial aid award in each record by 
 *                 the specified percentage.
 * ------------------------------------------------------------------------*/
{
    assert (numRecords > 0 && percent > 0);
    for(int record = 0; record < numRecords; record++)
    {
        int awardCount = studentRecord[record].getNumAwards();
        for(int count = 0; count < awardCount; count++)
        {
        FinancialAidAward aid = studentRecord[record].getFinancialAid(count);
        double newAmount = aid.getAmount();
        newAmount += percent * newAmount;
        aid.setAmount(newAmount);
        studentRecord[record].setFinancialAid(count, aid);
    
        }
    }
}
