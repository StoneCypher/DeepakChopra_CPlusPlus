
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

int r4() {
    return rand() % 4;
}

int main(void) {

    srand(time(NULL));

    std::string starts[]     = {"Experiential truth ", "The physical world ", "Non-judgment ", "Quantum physics "};
    std::string middles[]    = {"nurtures an ", "projects onto ", "imparts reality to ", "constructs with "};
    std::string qualifiers[] = {"abundance of ", "the barrier of ", "self-righteous ", "potential "};
    std::string finishes[]   = {"marvel.", "choices.", "creativity.", "actions."};

    std::cout << starts[r4()] << middles[r4()] << qualifiers[r4()] << finishes[r4()] << std::endl;

}
