#include <iostream>
using namespace std;

int main() {
  const double SODA_FRACTION = .001;
  double p_weight;
  double m_weight;
  double sweetener;
  double human_limit;
  double amount_soda;

  cout << "How much artificial sweetener is needed to kill a mouse?" << endl;
  cin >> sweetener;

  cout << "How much did the mouse weigh? (lbs)" << endl;
  cin >> m_weight;

  cout << "What weight would you stop dieting? What is the weight that you are\n trying to get to? (lbs)" << endl;
  cin >> p_weight;

  human_limit = (sweetener/m_weight) * p_weight;
  amount_soda = human_limit/SODA_FRACTION;

  cout << "The max amount of artificial soda that you can drink before dying is \n" << amount_soda << "cans of soda." << endl;

  return 0;
}
