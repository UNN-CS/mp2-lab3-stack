const int MaxLen=255;

class TFormula
{
   private:
     char Formula[MaxLen];     // �������� �������
     char PostfixForm[MaxLen]; // ����������� �����
   public:
     TFormula(char *form);                            // �����������
     int FormulaChecker(int Brackets[],int size);     // �������� ������������ ������
     int FormulaConverter();                          // �������������� � ����������� �����
     double FormulaCalculator();                      // ���������� �������
     int TFormula::Priority(char c) // priority of operation
     bool isOperation(char c) // check whether the symbol is (, ), +, -, * or /
};
