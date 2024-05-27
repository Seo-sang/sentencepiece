#include <iostream>
#include "src/sentencepiece_processor.h"


int main() {
    sentencepiece::SentencePieceProcessor processor;
    const auto status = processor.Load("python/test/test_model.model");
    if (!status.ok()) {
    std::cerr << status.ToString() << std::endl;
    // error
    }
}

// You can also load a serialized model from std::string.
// const std::string str = // Load blob contents from a file.
// auto status = processor.LoadFromSerializedProto(str);