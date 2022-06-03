#pragma once
#include "Printer.h"
#include <sstream>
class Hexazecimal :
    public Printer
{
    string GetFormatName() override;
    string FormatNumber(int number) override;
};

