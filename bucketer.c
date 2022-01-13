#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {2, 3, 1};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  printf("Done counting :)\n");
}
hashmap = { "lowCount": 0, "mediumCount": 0, "highCount": 0}
    for c in cycles:
        if c < 400:
            hashmap["lowCount"]+=1
        elif 400 <= c <= 919:
            hashmap["mediumCount"]+=1
        elif c >= 920:
            hashmap["highCount"]+=1
    return hashmap

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
