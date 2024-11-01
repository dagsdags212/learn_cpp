#include <iostream>
#include <string>
#include <set>
#include <unordered_map>

using namespace std;

class BaseSeq {
public:
  BaseSeq(string Sequence);

  string GetSeq() { return Seq; }
  int Length() { return Seq.length(); } // get sequence length
  set<char> Alphabet(); // get unique set of characters
  unordered_map<char, int> Composition(); // get charactercounts

protected:
  string Seq;
};

// Capitalize sequence before instantiating
BaseSeq::BaseSeq(string Sequence) {
  Seq = Sequence;
}

set<char> BaseSeq::Alphabet() {
  set<char> alphabet;
  alphabet.insert(Seq.begin(), Seq.end());
  for (auto a: alphabet) {
    cout << a << endl;
  }

  return alphabet;
}

unordered_map<char, int> BaseSeq::Composition() {
  unordered_map<char, int> counts;
  for (auto s: Seq) {
    if (counts.find(s) == counts.end()) {
      counts[s] = 1;
    } else {
      counts[s] += 1;
    }
  }
  return counts;
}

class NucleicAcidSeq : public BaseSeq {
public:
  NucleicAcidSeq(string Sequence, string Type);
  string GetType() { return Type; }
  NucleicAcidSeq Reverse();

private:
  string Type;
}

NucleicAcidSeq::NucleicAcidSeq(string Sequence, string Type) {
  Seq = Sequence;
  Type = Type;
}



int main() {
  string str = "ACGTACGT";
  BaseSeq dna{"ACGTACGT"};
  cout << "Sequence: " << dna.GetSeq() << endl;
  cout << "Length: " << dna.Length() << endl;
  dna.Alphabet();
  for (auto it: dna.Composition()) {
    cout << it.first << " " << it.second << endl;
  }

  return 0;
}
